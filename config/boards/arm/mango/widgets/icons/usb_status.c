/*
 *
 * Copyright (c) 2023 HellTM
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

// USB CONNECTED

#ifndef LV_ATTRIBUTE_IMG_USB_CONNECTED
#define LV_ATTRIBUTE_IMG_USB_CONNECTED
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_USB_CONNECTED uint8_t usb_connected_map[] = {
    0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
    0x00, 0x00, 0x00, 0xff, /*Color of index 1*/

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 
	0xc0, 0x00, 0x07, 0x20, 0x00, 0x30, 0x11, 0xc0, 0x60, 0x13, 0xe0, 0xff, 0xff, 0xe0, 0x60, 0x0b, 
	0xe0, 0x30, 0x11, 0xc0, 0x01, 0xa0, 0x00, 0x03, 0xc0, 0x00, 0x03, 0xc0, 0x00, 0x01, 0x80, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const lv_img_dsc_t usb_connected = {
    .header.always_zero = 0,
    .header.w = 19,
    .header.h = 18,
    .data_size = 62,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = usb_connected_map,
};