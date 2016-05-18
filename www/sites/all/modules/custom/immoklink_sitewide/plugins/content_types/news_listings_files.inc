<?php
/**
 * @file
 * Plugin to output logo.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('News listings files'),
  'category' => t('Immo Klink'),
  'defaults' => array(),
  'render callback' => 'immoklink_sitewide_news_listings_files_content_type_render',
);

/**
 * Output function for the 'node' content type.
 *
 * Outputs a node based on the module and delta supplied in the configuration.
 */
function immoklink_sitewide_news_listings_files_content_type_render($subtype, $conf, $panel_args, $context) {
  $output = '';

  $output .= '<script id="page-cover-tpl" type="text/x-jsrender">
		<div class="page-cover-item clearfix image-{{:~imageOrientation(image)}}" data-id="{{:id}}">
			<div class="page-cover-wrap">
				<span class="page-cover-img">
					<a href="{{:link}}"><img src="{{:image.path}}" alt="{{:title}}" title="{{:title}}"></a>
				</span>
			</div>
			<div class="page-cover-wrap">
				<a href="{{:link}}"><h2>{{:title}}</h2></a>
				<p>{{:description}}</p>
				<em>{{:date}}</em>
				<ul class="page-cover-tags">
					{{for tags}}
					<li>{{:#data}}</li>
					{{/for}}
				</ul>
			</div>
		</div>
	</script>';
  $output .= '<script id="page-grid-tpl" type="text/x-jsrender">
		<div class="page-grid-item clearfix image-{{:~imageOrientation(image)}}" data-id="{{:id}}">
			<div class="page-grid-wrap">
				<span class="page-grid-img">
					<a href="{{:link}}"><img src="{{:image.path}}" alt="{{:title}}" title="{{:title}}" ></a>
				</span>
			</div>
			<div class="page-grid-wrap">
				<a href="{{:link}}"><h2>{{:title}}</h2></a>
				<p>{{:description}}</p>
				<em>{{:date}}</em>
				<ul class="page-grid-tags">
					{{for tags}}
					<li>{{:#data}}</li>
					{{/for}}
				</ul>
			</div>
		</div>
	</script>';

  $output .= '<script type="text/javascript" src="https://cdnjs.cloudflare.com/ajax/libs/jquery/1.10.2/jquery.min.js"></script>
	<script src="https://npmcdn.com/masonry-layout@4.0/dist/masonry.pkgd.min.js"></script>
	<script type="text/javascript" src="https://cdnjs.cloudflare.com/ajax/libs/jsrender/0.9.73/jsrender.min.js"></script>';
	$output .= '<script type="text/javascript">

    $.views.helpers({
			imageOrientation: function (val) {
    if (!val || !val.hasOwnProperty("width") || !val.hasOwnProperty("height")) {
      return "unknown";
    }
    return parseInt(val.width) > parseInt(val.height) ? "landscape" : "portrait";
  }
		});


		var Gallery = function () {};

		Gallery.prototype.endpoint = "news/json";

		Gallery.prototype.pageCoverElement = "gallery-highlight";
		Gallery.prototype.pageGridElement= "gallery-collection";

		Gallery.prototype.pageCoverClass = ".page-cover";
		Gallery.prototype.pageGridClass = ".page-grid";

		Gallery.prototype.pageCoverItemClass = ".page-cover-item";
		Gallery.prototype.pageGridItemClass = ".page-grid-item";

		Gallery.prototype.organise = {};

		Gallery.prototype.organiseGrid = function () {
      //if (typeof $.masonry === "function") {
      this.organise = $(this.pageGridClass).masonry({
				  // options
				  itemSelector: this.pageGridItemClass,
				  columnWidth: 290,
				  //percentPosition: true,
				  gutter: 25,
				  initLayout: false,
				  fitWidth: true
				});
			//}
		}

		Gallery.prototype.getImages = function () {
      var pageGridHtml = $.templates("#page-grid-tpl");
      var pageCoverHtml = $.templates("#page-cover-tpl");

      var self = this;

      return $.getJSON(this.endpoint, function (results) {
        if (results && results.hasOwnProperty("data") && results.data.length > 0) {
          $.each(results.data, function(k, v) {
            //populate first three image as cover
            //and rest as grid
            if (v.hasOwnProperty("id") && parseInt(v.id) <= 3) {
              $("#" + self.pageCoverElement).append(pageCoverHtml.render(v));
            } else {
              $("#" + self.pageGridElement).append(pageGridHtml.render(v));
            }
          });

          if ($(self.pageGridClass).length > 0) {
            self.organiseGrid();
            setTimeout(function () {
              self.organise.masonry();
            }, 100);
          }
        }

      });
    }

		var g = new Gallery();

		g.getImages();

	</script>';

  $block = new stdClass();
  $block->title = '';
  $block->content = $output;

  return $block;
}


/**
 * Returns the administrative title for a node.
 */
function immoklink_sitewide_news_listings_files_content_type_admin_title($subtype, $conf) {
  return t('News listings files');
}

/**
 * Returns an edit form for custom type settings.
 */
function immoklink_sitewide_news_listings_files_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Submit handler for the custom type settings form.
 */
function immoklink_sitewide_news_listings_files_content_type_edit_form_submit($form, &$form_state) {
  foreach ($form_state['values'] as $k => $v) {
    if (!empty($form_state['values'][$k])) {
      $form_state['conf'][$k] = $form_state['values'][$k];
    }
  }
}
