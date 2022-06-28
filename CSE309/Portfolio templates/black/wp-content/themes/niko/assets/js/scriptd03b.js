(function($,window,document,undefined){'use strict';let savedPostLoadedAjax={};let preloaderIdentification=$('.preloader-wrap');let pageWrapIdentification=$('.site-content__page-wrap');let sidebarIdentification=$('.site-content__sidebar');let navBarIdentification=$('.left-menu__menu-list .menu');let parentOffset=pageWrapIdentification.offset().top;let parentHeight=pageWrapIdentification.outerHeight();const preloaderWhite=()=>{if(preloaderIdentification.length){setTimeout(function(){preloaderIdentification.fadeOut(300);},700);}};const mobileMenu=()=>{if(window.outerWidth<=991&&$('.unit').length){if(!$('.menu-item-has-children i').length){$('.site-content__mobile-menu .menu-item-has-children').append('<i class="fa fa-angle-down js-btn-mobile"></i>');}
$('.js-btn-mobile').on('click',function(){const animationDuration=350;if($(this).hasClass('animation')){return;}
$(this).addClass('animation').prev('.sub-menu').slideToggle(animationDuration).parent().toggleClass('is-opened').siblings().removeClass('is-opened').find('.sub-menu').slideUp(animationDuration);setTimeout(()=>{$('.js-btn-mobile').removeClass('animation');},animationDuration);});}else{$('.js-btn-mobile').remove();}};const customScrollBar=()=>{if(!$('.unit').length){sidebarIdentification.mCustomScrollbar();navBarIdentification.mCustomScrollbar();pageWrapIdentification.mCustomScrollbar({callbacks:{onInit:function(){counter(parentOffset,parentHeight);skills(parentOffset,parentHeight);masonry();},whileScrolling:function(){counter(parentOffset,parentHeight);skills(parentOffset,parentHeight);}}});}};const addImageToBackground=(img_sel,parent_sel)=>{if(!img_sel){return false;}
let $parent,$imgDataHidden,_this;$(img_sel).each(function(){_this=$(this);$imgDataHidden=_this.data('s-hidden');$parent=_this.closest(parent_sel);$parent=$parent.length?$parent:_this.parent();$parent.css('background-image','url('+this.src+')').addClass('s-back-switch');if($imgDataHidden){_this.css('visibility','hidden');_this.show();}
else{_this.hide();}});};const addWrapperToElements=()=>{if($('.widget_search form input[type="submit"]').length){$('.widget_search form input[type="submit"]').each(function(){$('.widget_search form ').wrap('<span class="search-wrap"></span>');})}
if($('.site-content__sidebar select, .wp-block-archives select, .wp-block-categories select').length){$('.site-content__sidebar select, .wp-block-archives select, .wp-block-categories select').each(function(){$(this).wrap('<span class="select-wrap"></span>');})}};const openAndCloseSidebar=()=>{$(".left-menu__sidebar-btn").on('click',function(){$(".site-content").addClass("sidebar-opened");});$(".overlay").on('click',function(){$(".site-content").removeClass("sidebar-opened");});};const isEmptySidebar=()=>{if(!$('.sidebar-js').length&&$('.unit').length){$(".site-content__inner-left").hide();$(".site-content__inner-right").addClass("full_width")}};const openAndCloseMobMenu=()=>{$(".site-content__mobile-menu--btn").on('click',function(){$(".site-content").addClass("menu-opened");});$(".site-content__inner-right").on('click',function(){$(".site-content").removeClass("menu-opened");})};const counter=(parentO,parentHeight)=>{if($('.js-counter').length){$('.js-counter').not('.is-complete').each(function(){if(parentHeight>$(this).offset().top-30){$(this).countTo().addClass('is-complete');}});}};const skills=(parentO,parentHeight)=>{if($('.niko-sc__skills-list').length){$('.niko-sc__skills-item').not('.active').each(function(){if(parentHeight>$(this).offset().top-30){$(this).addClass('active');$(this).each(function(){let procent=$(this).attr('data-value');$(this).find('.active-line').css('width',procent+'%').css('opacity','1');$(this).find('.counter').countTo();});}});}};const masonry=()=>{$('.grid').isotope({itemSelector:'.grid-item',percentPosition:true,masonry:{columnWidth:'.grid-item'}});$('.grid').imagesLoaded().progress(function(){$('.grid').isotope('layout');});$('.niko-sc__portfolio-filter').on('click','li',function(){let filterValue=$(this).attr('data-filter');$('.grid').isotope({filter:filterValue});$('.niko-sc__portfolio-filter li').removeClass('active');$(this).addClass('active');});};const audioOnLinkHover=()=>{if($('.audio_on_hover').length){let soundLink=$("#sound-link")[0];$("a").on('click',function(){soundLink.play();})}};const setFullHeightToPage=()=>{let vh=window.innerHeight*0.01;document.documentElement.style.setProperty('--vh',`${vh}px`);};const ajaxPageFlipAnimation=()=>{let menuIndent=$('.js-load-post').not('.current-menu-item');menuIndent.on('click',function(){$('.site-content__inner-right').addClass('animated');setTimeout(function(){$('.site-content__inner-right').removeClass('animated');},500);});};const reInitFunctionsOnAjax=(data)=>{if(typeof data!=='string')return false;if(data.indexOf('acf-map')!==-1){$('.acf-map').each(function(){new_map($(this));});}
if(data.indexOf('grid')!==-1){masonry();}
if(data.indexOf('js-counter')!==-1){counter(parentOffset,parentHeight);}
if(data.indexOf('niko-sc__skills-list')!==-1){skills(parentOffset,parentHeight);}
if(data.indexOf('audio_on_hover')!==-1){audioOnLinkHover();}
ajaxPageFlipAnimation();};const ajaxLoadPost=(postID)=>{let data={'action':'niko_ajax_load_post','post_id':postID,};if(savedPostLoadedAjax.hasOwnProperty(postID)===false){$.ajax({url:js_data.ajaxurl,data:data,type:'POST',success:function(data){savedPostLoadedAjax[postID]=data;$('.preloader-page').fadeOut(600);$('.site-content__page-wrap .mCSB_container').html(data);reInitFunctionsOnAjax(data);},error:function(xhr,ajaxOptions,thrownError){alert('Error. Please try again');console.log(xhr);console.log(ajaxOptions);console.log(thrownError);}});}else{$('.ajax-page-preload').fadeOut();$('.site-content__page-wrap .mCSB_container').html(savedPostLoadedAjax[postID]);reInitFunctionsOnAjax(savedPostLoadedAjax[postID]);}};const isOnePageStyleChecker=()=>{$('.js-load-post').on('click',function(){let $this=$(this),postID=$this.find('> a').attr('data-page-id');if($this.hasClass('current-menu-item'))return false;$('.site-content__page-wrap .mCSB_container').html('<div class="preloader-page"></div>');ajaxLoadPost(postID);$('.menu-item').removeClass('current-menu-item');$this.addClass('current-menu-item');return false;});};$(window).on('load',function(){preloaderWhite();setFullHeightToPage();audioOnLinkHover();addImageToBackground('.s-img-switch');addWrapperToElements();customScrollBar();openAndCloseSidebar();openAndCloseMobMenu();isOnePageStyleChecker();ajaxPageFlipAnimation();mobileMenu();isEmptySidebar();if($('.unit').length){masonry();}});$(window).on('resize',function(){setFullHeightToPage();if($('.unit').length){masonry();}});function new_map($el){var $markers=$el.find('.marker');var $style=jQuery('.acf-map').data("map-style");var args={zoom:16,disableDefaultUI:true,center:new google.maps.LatLng(0,0),mapTypeId:google.maps.MapTypeId.ROADMAP,styles:$style}
var map=new google.maps.Map($el[0],args);map.markers=[];$markers.each(function(){add_marker(jQuery(this),map);});center_map(map);return map;}
function add_marker($marker,map){var latlng=new google.maps.LatLng($marker.attr('data-lat'),$marker.attr('data-lng'));var marker=new google.maps.Marker({position:latlng,map:map});map.markers.push(marker);if($marker.html()){var infowindow=new google.maps.InfoWindow({content:$marker.html()});google.maps.event.addListener(marker,'click',function(){infowindow.open(map,marker);});}}
function center_map(map){var bounds=new google.maps.LatLngBounds();jQuery.each(map.markers,function(i,marker){var latlng=new google.maps.LatLng(marker.position.lat(),marker.position.lng());bounds.extend(latlng);});if(map.markers.length==1){map.setCenter(bounds.getCenter());map.setZoom(16);}
else{map.fitBounds(bounds);}}
$(document).ready(function(){$('.acf-map').each(function(){new_map($(this));});});})(jQuery,window,document);