<?php
/**
 * @file
 * Plugin to output news main content.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
    'single' => TRUE,
    'title' => t('Homepage'),
    'category' => t('Immo Klink'),
    'defaults' => array(),
    'render callback' => 'immoklink_sitewide_homepage_content_type_render',
    'required context' => array(
        new ctools_context_required(t('Node'), 'node'),
    ),
);

/**
 * Output function for the 'node' content type.
 *
 * Outputs a node based on the module and delta supplied in the configuration.
 */
function immoklink_sitewide_homepage_content_type_render($subtype, $conf, $panel_args, $context) {
    $output = '';

    if (!isset($context[0]->data)) {
        return;
    }
    global $base_url;

    $output .= '<section id="gallery" class="page-gallery clearfix">
				    <div class="grid-sizer"></div>
			    </section></article><div class="clear-fix"></div></div>';

    $output .= '<script id="page-index-tpl" type="text/x-jsrender">
                    <div class="page-index image-{{:orientation}}" id="index-{{:count}}" data-id="{{:id}}" data-href="{{:url}}">
                        <div class="page-index-slideshow" data-cycle-delay={{:delay}} data-cycle-timeout="{{:timeout}}" data-cycle-auto-height="4:3">
                        {{for images}}
                        <img src="{{>#data}}" alt="{{:title}}" title="{{:title}}" data-index-id="{{>#index}}"/>
                        {{/for}}


                        </div>
                        <div class="page-index-overlay" style="display: none;"></div>
                        <div class="page-index-caption" style="display: none;">
                            <p class="home-overlay-text">{{:title}}</p>
                        </div>
                    </div>
                </script>';
    $output .= '<script type="text/javascript" src="/sites/all/themes/immoklink_base/js/jquery-1.8.3.min.js"></script>
                <script type="text/javascript" src="/sites/all/themes/immoklink_base/js/masonry.min.js"></script>
                <script type="text/javascript" src="/sites/all/themes/immoklink_base/js/jsrender.min.js"></script>
                <script type="text/javascript" src="/sites/all/themes/immoklink_base/js/jquery.cycle2.min.js"></script>';
    $output .= '<script type="text/javascript">
                    var GalleryIndex = function () {};
                    GalleryIndex.prototype.endpoint = "' . $base_url . '/home/feed' . '";
                    GalleryIndex.prototype.pageIndexElement = "gallery";
                    GalleryIndex.prototype.pageIndexClass = ".page-gallery";
                    GalleryIndex.prototype.pageIndexItemClass = ".page-index";
                    GalleryIndex.prototype.pageIndexOverlayClass = ".page-index-overlay";
                    GalleryIndex.prototype.pageIndexCaptionClass = ".page-index-caption";
                    GalleryIndex.prototype.pageIndexSlideshowClass = ".page-index-slideshow";
                    GalleryIndex.prototype.organise = {};
                    GalleryIndex.prototype.lastIndex = -1;
                    GalleryIndex.prototype.currentIndex = -1;
                    GalleryIndex.prototype.slideDelayInMs = 3 * 1000;

                    GalleryIndex.prototype.overlayCaption = function () {
                      var imageHeight, imageWidth, parent;
                      var self = this;

                      $(self.pageIndexItemClass).hover(function (ev) {

                        ev.preventDefault();

                        imageWidth = $(this).find("img").width();
                        imageHeight = $(this).find("img").height();

                        parent = $(this);
                        parent.find(self.pageIndexOverlayClass).width(imageWidth).height(imageHeight).show();
                        parent.find(self.pageIndexCaptionClass).show();
                      }, function (ev) {

                        ev.preventDefault();

                        parent = $(this);
                        parent.find(self.pageIndexOverlayClass).hide();
                        parent.find(self.pageIndexCaptionClass).hide();
                      });

                      $(self.pageIndexItemClass).click(function (ev) {
                        ev.preventDefault();
                        window.location.href = $(this).data("href");
                      });
                    };

                    GalleryIndex.prototype.triggerSlideshowByIndex = function () {

                      var self = this;

                      var randomIndexSlideshow = function () {
                        return Math.floor(Math.random() * $(self.pageIndexSlideshowClass).length);
                      };

                      this.currentIndex = randomIndexSlideshow();

                      //Fix to run cycle plugin if there is only one imagee in the set which breaks the cycle otherwise
                      while ($(self.pageIndexSlideshowClass).eq(this.currentIndex).find("img").length <= 1) {
                        this.currentIndex = randomIndexSlideshow();
                      }

                      if ($(this.pageIndexSlideshowClass).eq(this.currentIndex).is( ".cycle-paused" )) {
                        $(this.pageIndexSlideshowClass).eq(this.currentIndex).cycle("resume");
                      }

                      this.lastIndex = this.currentIndex;

                      return this.currentIndex;

                    };

                    GalleryIndex.prototype.initSlideshow = function () {

                      var timeoutId = window.timeoutId;
                      var self = this;
                      var delay = this.slideDelayInMs;

                      window.clearTimeout(timeoutId);

                      if ($(this.pageIndexSlideshowClass).length <= 0) {
                        return;
                      }
                      if (this.lastIndex < 0) {

                        $(this.pageIndexSlideshowClass).cycle({
                          "speed": 1000,
                          "log": false,
                          "timeout": 1
                        });

                        $(this.pageIndexSlideshowClass).cycle("pause");
                      }

                      delay = (parseInt(delay) > 0) ? delay : 5 * 1000;

                      if ( $(this.pageIndexSlideshowClass).length > 0) {
                        window.timeoutId = setTimeout(function () {
                            self.triggerSlideshowByIndex();
                        }, 5 * 1000);

                        $(self.pageIndexSlideshowClass).on("cycle-after", function (ev) {
                          ev.preventDefault();
                          $(this).cycle("pause");
                        });

                        $(self.pageIndexSlideshowClass).on("cycle-paused", function (ev) {
                          ev.preventDefault();
                          window.timeoutId = setTimeout(function () {
                            return self.triggerSlideshowByIndex();
                          }, delay);
                        });
                      }
                    };

                    GalleryIndex.prototype.run = function () {

                      var pageIndexHtml = $.templates("#page-index-tpl");

                      var self = this;
                      var count = 0;

                      return $.getJSON(this.endpoint, function (results) {

                        if (results && results.hasOwnProperty("data") && results.data.length > 0) {

                          $.each(results.data, function(k, v) {
                            v.count = ++count;
                            $("#" + self.pageIndexElement).append(pageIndexHtml.render(v));
                          });

                          if ($(self.pageIndexClass).length > 0) {

                            self.initSlideshow();

                            self.overlayCaption();
                          }
                        }
                      });
                    }

                    $(function () {
                      var g = new GalleryIndex();
                      g.run();
                    });
                  </script>';


    $block = new stdClass();
    $block->title = '';
    $block->content = $output;

    return $block;
}


/**
 * Returns the administrative title for a node.
 */
function immoklink_sitewide_homepage_content_type_admin_title($subtype, $conf) {
    return t('Homepage');
}

/**
 * Returns an edit form for custom type settings.
 */
function immoklink_sitewide_homepage_content_type_edit_form($form, &$form_state) {
    return $form;
}

/**
 * Submit handler for the custom type settings form.
 */
function immoklink_sitewide_homepage_content_type_edit_form_submit($form, &$form_state) {
    foreach ($form_state['values'] as $k => $v) {
        if (!empty($form_state['values'][$k])) {
            $form_state['conf'][$k] = $form_state['values'][$k];
        }
    }
}
