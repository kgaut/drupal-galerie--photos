
Drupal.behaviors.fancybox = {
    attach: function(context, settings) {
        fancyboxInit = function() {
            //alert('laaa');
            //$(".fancybox").fancybox();
            jQuery('.node-gallery .field-name-field-gallery-pictures a.fancybox').fancybox();

        }
        jQuery(document).ready(function() {
            fancyboxInit();
        });
    }
};

