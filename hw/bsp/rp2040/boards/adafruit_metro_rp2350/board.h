/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2025 Ha Thach (tinyusb.org)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * This file is part of the TinyUSB stack.
 */

/* metadata:
   name: Adafruit Metro RP2350
   url: https://www.adafruit.com/product/6003
*/

#ifndef TUSB_BOARD_H
#define TUSB_BOARD_H

#ifdef __cplusplus
 extern "C" {
#endif

// UART and LED are already defined in pico-sdk board

//--------------------------------------------------------------------+
// PIO_USB
//--------------------------------------------------------------------+
// default to pico brain tester
#define PICO_DEFAULT_PIO_USB_DP_PIN       32
#define PICO_DEFAULT_PIO_USB_VBUSEN_PIN   29
#define PICO_DEFAULT_PIO_USB_VBUSEN_STATE 1

//--------------------------------------------------------------------
// USB Host MAX3421E
//--------------------------------------------------------------------

#ifdef __cplusplus
 }
#endif

#endif
