/**
 * @file lv_templ.h
 *
 */

#ifndef LV_GIFDEC_H
#define LV_GIFDEC_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lvgl/lvgl.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

lv_obj_t * lv_gif_create_form_file(lv_obj_t * parent, const char * path);
lv_obj_t * lv_gif_create_form_data(lv_obj_t * parent, const void * data);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_GIFDEC_H*/
