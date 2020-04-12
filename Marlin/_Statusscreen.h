/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//
#define STATUS_LOGO_X            0
#define STATUS_LOGO_Y            0
#define STATUS_LOGO_WIDTH       32

const unsigned char status_logo_bmp[] PROGMEM = {
  B00001111,B11111111,B11111111,B11111000,
  B00000000,B00001000,B00001000,B00000000,
  B00000000,B00001000,B00001000,B00000000,
  B00000000,B00001111,B11111000,B00000000,
  B00111100,B00001100,B00011000,B00000000,
  B01000000,B00001100,B00011000,B00000000,
  B01000000,B00001100,B00011000,B00000000,
  B01000000,B00001100,B00011000,B00000000,
  B00111100,B00011111,B11111100,B01000000,
  B00000000,B00010000,B00000100,B01000000,
  B00100010,B00010000,B00000100,B00000000,
  B00110010,B00011111,B11110100,B01111000,
  B00101010,B00010000,B00001100,B00000100,
  B00100110,B00001000,B00001000,B00111000,
  B00100010,B00001111,B11111000,B01000000,
  B00000000,B00000010,B00100000,B01111100,
  B00001111,B00000010,B00100000,B00000000,
  B00010000,B00000010,B11100000,B00111000,
  B00010000,B00000011,B11100000,B01001100,
  B00010000,B00000011,B00100000,B01010100,
  B00001111,B00000010,B11100000,B01100100,
  B00000000,B00000011,B11100000,B00111000,
  B00000000,B00000011,B00100000,B00000000,
  B11111111,B11100011,B01100011,B11111111,
  B00000000,B01100001,B11000011,B00000000,
  B00000000,B00100000,B00000010,B00000000,
  B00000000,B00011111,B11111100,B00000000,
  B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,
  B01111111,B11111111,B11111111,B11111111,
  B00000000,B00000000,B00000000,B00000000
};

//
// Use default bitmaps
//
 #define STATUS_HOTEND_ANIM // KS_Tweak
 #define STATUS_BED_ANIM // KS_Tweak
 #if HOTENDS < 2 // KS_Tweak
   #define STATUS_HEATERS_X      40 // KS_Tweak
   #define STATUS_BED_X          72 // KS_Tweak
 #else // KS_Tweak
   #define STATUS_HEATERS_X      32 // KS_Tweak
   #define STATUS_BED_X          80 // KS_Tweak
 #endif // KS_Tweak

