<?php
/**
 * @file
 * ott_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function ott_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: ott_1col_feature_image.
  $styles['ott_1col_feature_image'] = array(
    'name' => 'ott_1col_feature_image',
    'label' => 'Single Column Feature Image',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 782,
          'height' => 340,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ott_2col_feature_image.
  $styles['ott_2col_feature_image'] = array(
    'name' => 'ott_2col_feature_image',
    'label' => 'Two Column Feature Image',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 381,
          'height' => 166,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ott_3col_feature_image.
  $styles['ott_3col_feature_image'] = array(
    'name' => 'ott_3col_feature_image',
    'label' => 'Three Column Feature Image',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 243,
          'height' => 106,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ott_4col_feature_image.
  $styles['ott_4col_feature_image'] = array(
    'name' => 'ott_4col_feature_image',
    'label' => 'Four Column Feature Image',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 176,
          'height' => 77,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ott_5col_feature_image.
  $styles['ott_5col_feature_image'] = array(
    'name' => 'ott_5col_feature_image',
    'label' => 'Five Column Feature Image',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 136,
          'height' => 59,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ott_6col_feature_image.
  $styles['ott_6col_feature_image'] = array(
    'name' => 'ott_6col_feature_image',
    'label' => 'Six Column Feature Image',
    'effects' => array(
      7 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 109,
          'height' => 47,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ott_feature_image_thumb.
  $styles['ott_feature_image_thumb'] = array(
    'name' => 'ott_feature_image_thumb',
    'label' => 'Feature Image Thumbnail',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 115,
          'height' => 50,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
