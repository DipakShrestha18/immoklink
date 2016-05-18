$(function(){
  // time between image rotate
  var delay = 5000;
  
  // for each list item in 
  // the rotator ul, generate
  // show a random list item
  $('#basicExample div.group-image').each(function(){
    // save images in an array
    var $imgArr = $(this).children();
    // show a random image
    $imgArr.eq(Math.floor(Math.random()*$imgArr.length)).show();
  });
  // run the changeImage function after every (delay) miliseconds
  setInterval(function(){
    changeImage();
  },delay);
  
  function changeImage(){
    // save list items in an array
    var $liArr = $('#basicExample div.group-image');
    // select a random list item
    var $currLi = $liArr.eq(Math.floor(Math.random()*$liArr.length));
    // get the currently visible image
    var $currImg = $('.rotator-image:visible', $currLi);
    if ($currImg.next().length == 1) {
      var $next = $currImg.next();
	  $liArr.removeAttr("style");
    } else {
      var $next = $('.rotator-image:first', $currLi);
	  $liArr.removeAttr("style");
    }
    $currImg.fadeOut();
    $next.fadeIn();
  }  
});
