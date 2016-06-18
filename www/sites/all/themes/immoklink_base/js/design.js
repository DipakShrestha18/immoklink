/* JavaScript Document */

var windowSize = '';
var windowWidth = 0;
var actualSize = 0;
if(window.location.href.indexOf("/gallery/") > -1) {
	$(window).resize(function () {
		location.reload();
	});
}
$(document).ready(function() {
	touchhover();
	//setInterval('checkBrowserSize()', 100);

	$('a.mobile_menu').on('click', function(){
		var navHeight = $('nav').height();
		var newNewHeight = $('nav div').height();

		if (navHeight == 0){
			$('nav').animate({'height': newNewHeight + 'px'}, 500);
			$(this).addClass('mobile_menu selected');
		} else {
			$('nav').animate({'height': '0px'}, 500);
			$(this).removeClass('selected');
		}
	});

	//video in image gallery
	$('.venoboxvid').venobox({bgcolor: '#000'});

	$("#bigimages").justifiedGallery({
		rowHeight: 200,
		fixedHeight: false,
		margins : 5,
	});
});

/**
* HOMEPAGE IMAGE CYCLE.
*/
function cycleImages(container){
      var $active = container.find('.active');
      var $next = ($active.next().length > 0) ? $active.next() : container.find('img:first');
      $next.css('z-index',2);//move the next image up the pile
      $active.fadeOut(1500,function(){//fade out the top image
	  $active.css('z-index',1).show().removeClass('active');//reset the z-index and unhide the image
          $next.css('z-index',3).addClass('active');//make the next image the top one
      });
    }


function checkBrowserSize(){
	windowWidth = window.outerWidth;
	var contentWidth = $('body').width();
	var sizeDiff = windowWidth - contentWidth;
	actualSize = windowWidth - sizeDiff;

	if (actualSize > 800){ newWindowSize = 'large'; }
	if (actualSize <= 800 && actualSize > 500){ newWindowSize = 'medium'; }
	if (actualSize <= 500){ newWindowSize = 'small'; }



	if (windowSize != newWindowSize){
		windowSize = newWindowSize;
		loadHero();
	}
}

function loadHero(){

		if (windowSize == 'large'){
			$('nav').css('height', '65px');
			$('li.media div').addClass('media__body');
		}

		if (windowSize == 'medium'){
			if (actualSize > 500 ) {
				$('nav').css('height', '65px');
				$('div').removeClass('media__body');
			}
		}

		if (windowSize == 'small'){
			if (actualSize <= 500 ) {
				$('nav').css('height', '0px');
				$('div').removeClass('media__body');
			}
		}
	}

function touchhover() {
$('a.hoover').on("touchstart", function (e) {
    "use strict"; //satisfy the code inspectors
    var link = $(this); //preselect the link
    if (link.hasClass('hover')) {
        return true;
    }
	else {
        link.addClass("hover");
        $('a.hoover').not(this).removeClass("hover");
        e.preventDefault();
        return false; //extra, and to make sure the function has consistent return points
    }
});
}
