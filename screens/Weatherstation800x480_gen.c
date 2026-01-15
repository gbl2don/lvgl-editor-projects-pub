/**
 * @file Weatherstation800x480_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "Weatherstation800x480_gen.h"
#include "ui.h"

/*********************
 *      DEFINES
 *********************/



/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * Weatherstation800x480_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t H_Line;
    static lv_style_t V_Line;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&H_Line);
        lv_style_set_height(&H_Line, 2);
        lv_style_set_border_color(&H_Line, lv_color_hex(0xffffff));
        lv_style_set_bg_color(&H_Line, lv_color_hex(0x000000));
        lv_style_set_border_side(&H_Line, LV_BORDER_SIDE_FULL);
        lv_style_set_border_width(&H_Line, 2);

        lv_style_init(&V_Line);
        lv_style_set_width(&V_Line, 2);
        lv_style_set_border_color(&V_Line, lv_color_hex(0xffffff));
        lv_style_set_bg_color(&V_Line, lv_color_hex(0x000000));
        lv_style_set_border_side(&V_Line, LV_BORDER_SIDE_FULL);
        lv_style_set_border_width(&V_Line, 2);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_width(lv_obj_0, 800);
    lv_obj_set_height(lv_obj_0, 480);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(lv_obj_0, &BlackView, 0);

    lv_obj_t * DateTimeComp_0 = DateTimeComp_create(lv_obj_0);
    lv_obj_set_x(DateTimeComp_0, 0);
    lv_obj_set_y(DateTimeComp_0, 8);


    lv_obj_t * MainComp_0 = MainComp_create(lv_obj_0);
    lv_obj_set_x(MainComp_0, 0);
    lv_obj_set_y(MainComp_0, 108);


    lv_obj_t * MoonComp_0 = MoonComp_create(lv_obj_0);
    lv_obj_set_x(MoonComp_0, 576);
    lv_obj_set_y(MoonComp_0, 100);


    lv_obj_t * IndoorComp_0 = IndoorComp_create(lv_obj_0);
    lv_obj_set_x(IndoorComp_0, 576);
    lv_obj_set_y(IndoorComp_0, 8);


    lv_obj_t * FC1 = WeatherFCComp_create(lv_obj_0);
    lv_obj_set_name(FC1, "FC1");
    lv_obj_set_x(FC1, 0);
    lv_obj_set_y(FC1, 298);


    lv_obj_t * FC2 = WeatherFCComp_create(lv_obj_0);
    lv_obj_set_name(FC2, "FC2");
    lv_obj_set_x(FC2, 133);
    lv_obj_set_y(FC2, 298);


    lv_obj_t * FC3 = WeatherFCComp_create(lv_obj_0);
    lv_obj_set_name(FC3, "FC3");
    lv_obj_set_x(FC3, 267);
    lv_obj_set_y(FC3, 298);


    lv_obj_t * FC4 = WeatherFCComp_create(lv_obj_0);
    lv_obj_set_name(FC4, "FC4");
    lv_obj_set_x(FC4, 400);
    lv_obj_set_y(FC4, 298);


    lv_obj_t * FC5 = WeatherFCComp_create(lv_obj_0);
    lv_obj_set_name(FC5, "FC5");
    lv_obj_set_x(FC5, 534);
    lv_obj_set_y(FC5, 298);


    lv_obj_t * FC6 = WeatherFCComp_create(lv_obj_0);
    lv_obj_set_name(FC6, "FC6");
    lv_obj_set_x(FC6, 667);
    lv_obj_set_y(FC6, 298);


    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_1, 0);
    lv_obj_set_y(lv_obj_1, 100);
    lv_obj_set_width(lv_obj_1, 800);
    lv_obj_add_style(lv_obj_1, &H_Line, 0);


    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_2, 576);
    lv_obj_set_y(lv_obj_2, 0);
    lv_obj_set_height(lv_obj_2, 285);
    lv_obj_add_style(lv_obj_2, &V_Line, 0);


    lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_3, 0);
    lv_obj_set_y(lv_obj_3, 285);
    lv_obj_set_width(lv_obj_3, 800);
    lv_obj_add_style(lv_obj_3, &H_Line, 0);



    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "Weatherstation800x480");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/