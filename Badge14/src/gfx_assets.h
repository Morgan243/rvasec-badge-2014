/* 
 * File:   gfx_assets.h
 * Author: morgan
 *
 * Created on June 3, 2014, 12:41 PM
 */

#ifndef GFX_ASSETS_H
#define	GFX_ASSETS_H

#include "badge_common.h"



static const unsigned char  bird_idle[] = {
  /* width, height/8 */
  //15,11/8,

  /* rows 0-7 */
  0x38,  /* col =  0 00111000 */
  0xc4,  /* col =  1 11000100 */
  0x84,  /* col =  2 10000100 */
  0x86,  /* col =  3 10000110 */
  0x8a,  /* col =  4 10001010 */
  0x71,  /* col =  5 01110001 */
  0x01,  /* col =  6 00000001 */
  0x8f,  /* col =  7 10001111 */
  0x51,  /* col =  8 01010001 */
  0xa1,  /* col =  9 10100001 */
  0xad,  /* col = 10 10101101 */
  0xa2,  /* col = 11 10100010 */
  0xbc,  /* col = 12 10111100 */
  0xa0,  /* col = 13 10100000 */
  0x40,  /* col = 14 01000000 */

  /* rows 8-15 */
  0x00,  /* col =  0 00000000 */
  0x00,  /* col =  1 00000000 */
  0x01,  /* col =  2 00000001 */
  0x02,  /* col =  3 00000010 */
  0x04,  /* col =  4 00000100 */
  0x04,  /* col =  5 00000100 */
  0x04,  /* col =  6 00000100 */
  0x04,  /* col =  7 00000100 */
  0x05,  /* col =  8 00000101 */
  0x02,  /* col =  9 00000010 */
  0x02,  /* col = 10 00000010 */
  0x02,  /* col = 11 00000010 */
  0x02,  /* col = 12 00000010 */
  0x01,  /* col = 13 00000001 */
  0x00,  /* col = 14 00000000 */

};

static const unsigned char bird_flap[] = {
  /* width, height/8 */
  //15,11/8,

  /* rows 0-7 */
  0x38,  /* col =  0 00111000 */
  0xc4,  /* col =  1 11000100 */
  0x44,  /* col =  2 01000100 */
  0x46,  /* col =  3 01000110 */
  0x42,  /* col =  4 01000010 */
  0x81,  /* col =  5 10000001 */
  0x01,  /* col =  6 00000001 */
  0x8f,  /* col =  7 10001111 */
  0x51,  /* col =  8 01010001 */
  0xa1,  /* col =  9 10100001 */
  0xa5,  /* col = 10 10100101 */
  0xa2,  /* col = 11 10100010 */
  0xbc,  /* col = 12 10111100 */
  0xa0,  /* col = 13 10100000 */
  0x40,  /* col = 14 01000000 */

  /* rows 8-15 */
  0x03,  /* col =  0 00000011 */
  0x04,  /* col =  1 00000100 */
  0x04,  /* col =  2 00000100 */
  0x04,  /* col =  3 00000100 */
  0x04,  /* col =  4 00000100 */
  0x03,  /* col =  5 00000011 */
  0x04,  /* col =  6 00000100 */
  0x04,  /* col =  7 00000100 */
  0x05,  /* col =  8 00000101 */
  0x02,  /* col =  9 00000010 */
  0x02,  /* col = 10 00000010 */
  0x02,  /* col = 11 00000010 */
  0x02,  /* col = 12 00000010 */
  0x01,  /* col = 13 00000001 */
  0x00,  /* col = 14 00000000 */

};

#define NUM_IMAGE_ASSETS 2

static const char doge_txt[] = "DOGE";
static const unsigned char doge[] = {
  /* width, height/8 */
  //84,48/8,

  /* rows 0-7 */
  0x00,  /* col =  0 00000000 */
  0x0e,  /* col =  1 00001110 */
  0x70,  /* col =  2 01110000 */
  0x38,  /* col =  3 00111000 */
  0x06,  /* col =  4 00000110 */
  0x78,  /* col =  5 01111000 */
  0x30,  /* col =  6 00110000 */
  0x0e,  /* col =  7 00001110 */
  0x3c,  /* col =  8 00111100 */
  0x24,  /* col =  9 00100100 */
  0x42,  /* col = 10 01000010 */
  0x42,  /* col = 11 01000010 */
  0x22,  /* col = 12 00100010 */
  0x3c,  /* col = 13 00111100 */
  0x00,  /* col = 14 00000000 */
  0x0e,  /* col = 15 00001110 */
  0x70,  /* col = 16 01110000 */
  0x38,  /* col = 17 00111000 */
  0x06,  /* col = 18 00000110 */
  0x78,  /* col = 19 01111000 */
  0x30,  /* col = 20 00110000 */
  0x0e,  /* col = 21 00001110 */
  0x00,  /* col = 22 00000000 */
  0x00,  /* col = 23 00000000 */
  0x00,  /* col = 24 00000000 */
  0x00,  /* col = 25 00000000 */
  0x00,  /* col = 26 00000000 */
  0xc0,  /* col = 27 11000000 */
  0xa0,  /* col = 28 10100000 */
  0x40,  /* col = 29 01000000 */
  0x80,  /* col = 30 10000000 */
  0x00,  /* col = 31 00000000 */
  0x00,  /* col = 32 00000000 */
  0x00,  /* col = 33 00000000 */
  0x00,  /* col = 34 00000000 */
  0x00,  /* col = 35 00000000 */
  0x00,  /* col = 36 00000000 */
  0x00,  /* col = 37 00000000 */
  0x00,  /* col = 38 00000000 */
  0x00,  /* col = 39 00000000 */
  0x00,  /* col = 40 00000000 */
  0x00,  /* col = 41 00000000 */
  0x00,  /* col = 42 00000000 */
  0x00,  /* col = 43 00000000 */
  0x00,  /* col = 44 00000000 */
  0x00,  /* col = 45 00000000 */
  0x00,  /* col = 46 00000000 */
  0x00,  /* col = 47 00000000 */
  0x00,  /* col = 48 00000000 */
  0x00,  /* col = 49 00000000 */
  0x00,  /* col = 50 00000000 */
  0x00,  /* col = 51 00000000 */
  0xc0,  /* col = 52 11000000 */
  0x80,  /* col = 53 10000000 */
  0x00,  /* col = 54 00000000 */
  0x88,  /* col = 55 10001000 */
  0x94,  /* col = 56 10010100 */
  0xa4,  /* col = 57 10100100 */
  0x64,  /* col = 58 01100100 */
  0x70,  /* col = 59 01110000 */
  0x80,  /* col = 60 10000000 */
  0x80,  /* col = 61 10000000 */
  0xf0,  /* col = 62 11110000 */
  0x00,  /* col = 63 00000000 */
  0x60,  /* col = 64 01100000 */
  0x90,  /* col = 65 10010000 */
  0x90,  /* col = 66 10010000 */
  0xfc,  /* col = 67 11111100 */
  0x10,  /* col = 68 00010000 */
  0x10,  /* col = 69 00010000 */
  0xe0,  /* col = 70 11100000 */
  0x00,  /* col = 71 00000000 */
  0x00,  /* col = 72 00000000 */
  0x00,  /* col = 73 00000000 */
  0x00,  /* col = 74 00000000 */
  0x00,  /* col = 75 00000000 */
  0x00,  /* col = 76 00000000 */
  0x00,  /* col = 77 00000000 */
  0x00,  /* col = 78 00000000 */
  0x00,  /* col = 79 00000000 */
  0x00,  /* col = 80 00000000 */
  0x00,  /* col = 81 00000000 */
  0x00,  /* col = 82 00000000 */
  0x00,  /* col = 83 00000000 */

  /* rows 8-15 */
  0x00,  /* col =  0 00000000 */
  0x00,  /* col =  1 00000000 */
  0x00,  /* col =  2 00000000 */
  0x00,  /* col =  3 00000000 */
  0x00,  /* col =  4 00000000 */
  0x00,  /* col =  5 00000000 */
  0x00,  /* col =  6 00000000 */
  0x00,  /* col =  7 00000000 */
  0x00,  /* col =  8 00000000 */
  0x00,  /* col =  9 00000000 */
  0x00,  /* col = 10 00000000 */
  0x00,  /* col = 11 00000000 */
  0x00,  /* col = 12 00000000 */
  0x00,  /* col = 13 00000000 */
  0x00,  /* col = 14 00000000 */
  0x00,  /* col = 15 00000000 */
  0x00,  /* col = 16 00000000 */
  0x00,  /* col = 17 00000000 */
  0x00,  /* col = 18 00000000 */
  0x00,  /* col = 19 00000000 */
  0x80,  /* col = 20 10000000 */
  0x80,  /* col = 21 10000000 */
  0x80,  /* col = 22 10000000 */
  0x40,  /* col = 23 01000000 */
  0x40,  /* col = 24 01000000 */
  0x20,  /* col = 25 00100000 */
  0x10,  /* col = 26 00010000 */
  0x1f,  /* col = 27 00011111 */
  0x1c,  /* col = 28 00011100 */
  0x00,  /* col = 29 00000000 */
  0x00,  /* col = 30 00000000 */
  0x01,  /* col = 31 00000001 */
  0x02,  /* col = 32 00000010 */
  0x0c,  /* col = 33 00001100 */
  0x08,  /* col = 34 00001000 */
  0x08,  /* col = 35 00001000 */
  0x08,  /* col = 36 00001000 */
  0x08,  /* col = 37 00001000 */
  0x08,  /* col = 38 00001000 */
  0x08,  /* col = 39 00001000 */
  0x08,  /* col = 40 00001000 */
  0x08,  /* col = 41 00001000 */
  0x08,  /* col = 42 00001000 */
  0x18,  /* col = 43 00011000 */
  0x70,  /* col = 44 01110000 */
  0xe0,  /* col = 45 11100000 */
  0xe0,  /* col = 46 11100000 */
  0x78,  /* col = 47 01111000 */
  0x3c,  /* col = 48 00111100 */
  0x00,  /* col = 49 00000000 */
  0x60,  /* col = 50 01100000 */
  0xe0,  /* col = 51 11100000 */
  0x63,  /* col = 52 01100011 */
  0x0f,  /* col = 53 00001111 */
  0x7e,  /* col = 54 01111110 */
  0xf0,  /* col = 55 11110000 */
  0x00,  /* col = 56 00000000 */
  0x00,  /* col = 57 00000000 */
  0x00,  /* col = 58 00000000 */
  0x00,  /* col = 59 00000000 */
  0x00,  /* col = 60 00000000 */
  0x00,  /* col = 61 00000000 */
  0xfc,  /* col = 62 11111100 */
  0x20,  /* col = 63 00100000 */
  0x20,  /* col = 64 00100000 */
  0x20,  /* col = 65 00100000 */
  0xfc,  /* col = 66 11111100 */
  0x00,  /* col = 67 00000000 */
  0x50,  /* col = 68 01010000 */
  0xb0,  /* col = 69 10110000 */
  0xb0,  /* col = 70 10110000 */
  0xe0,  /* col = 71 11100000 */
  0x60,  /* col = 72 01100000 */
  0x90,  /* col = 73 10010000 */
  0x90,  /* col = 74 10010000 */
  0x00,  /* col = 75 00000000 */
  0xfc,  /* col = 76 11111100 */
  0x20,  /* col = 77 00100000 */
  0xd0,  /* col = 78 11010000 */
  0x80,  /* col = 79 10000000 */
  0x00,  /* col = 80 00000000 */
  0x00,  /* col = 81 00000000 */
  0x00,  /* col = 82 00000000 */
  0x00,  /* col = 83 00000000 */

  /* rows 16-23 */
  0x00,  /* col =  0 00000000 */
  0x00,  /* col =  1 00000000 */
  0x00,  /* col =  2 00000000 */
  0x00,  /* col =  3 00000000 */
  0x00,  /* col =  4 00000000 */
  0x00,  /* col =  5 00000000 */
  0x00,  /* col =  6 00000000 */
  0x00,  /* col =  7 00000000 */
  0x00,  /* col =  8 00000000 */
  0x00,  /* col =  9 00000000 */
  0x00,  /* col = 10 00000000 */
  0x00,  /* col = 11 00000000 */
  0x00,  /* col = 12 00000000 */
  0x00,  /* col = 13 00000000 */
  0x00,  /* col = 14 00000000 */
  0x80,  /* col = 15 10000000 */
  0xc0,  /* col = 16 11000000 */
  0x78,  /* col = 17 01111000 */
  0x04,  /* col = 18 00000100 */
  0x02,  /* col = 19 00000010 */
  0x01,  /* col = 20 00000001 */
  0xc0,  /* col = 21 11000000 */
  0xb0,  /* col = 22 10110000 */
  0xf0,  /* col = 23 11110000 */
  0xe0,  /* col = 24 11100000 */
  0x00,  /* col = 25 00000000 */
  0x00,  /* col = 26 00000000 */
  0x00,  /* col = 27 00000000 */
  0x00,  /* col = 28 00000000 */
  0x00,  /* col = 29 00000000 */
  0x00,  /* col = 30 00000000 */
  0x00,  /* col = 31 00000000 */
  0x00,  /* col = 32 00000000 */
  0x80,  /* col = 33 10000000 */
  0xc0,  /* col = 34 11000000 */
  0xc0,  /* col = 35 11000000 */
  0x80,  /* col = 36 10000000 */
  0x00,  /* col = 37 00000000 */
  0x00,  /* col = 38 00000000 */
  0x00,  /* col = 39 00000000 */
  0x00,  /* col = 40 00000000 */
  0x00,  /* col = 41 00000000 */
  0x00,  /* col = 42 00000000 */
  0x00,  /* col = 43 00000000 */
  0x00,  /* col = 44 00000000 */
  0x00,  /* col = 45 00000000 */
  0x00,  /* col = 46 00000000 */
  0x00,  /* col = 47 00000000 */
  0x00,  /* col = 48 00000000 */
  0x06,  /* col = 49 00000110 */
  0x07,  /* col = 50 00000111 */
  0x03,  /* col = 51 00000011 */
  0x03,  /* col = 52 00000011 */
  0x18,  /* col = 53 00011000 */
  0xdc,  /* col = 54 11011100 */
  0xbf,  /* col = 55 10111111 */
  0xe0,  /* col = 56 11100000 */
  0x00,  /* col = 57 00000000 */
  0x00,  /* col = 58 00000000 */
  0x00,  /* col = 59 00000000 */
  0x00,  /* col = 60 00000000 */
  0x00,  /* col = 61 00000000 */
  0x00,  /* col = 62 00000000 */
  0x00,  /* col = 63 00000000 */
  0x00,  /* col = 64 00000000 */
  0x00,  /* col = 65 00000000 */
  0x00,  /* col = 66 00000000 */
  0x00,  /* col = 67 00000000 */
  0x00,  /* col = 68 00000000 */
  0x00,  /* col = 69 00000000 */
  0x00,  /* col = 70 00000000 */
  0x00,  /* col = 71 00000000 */
  0x00,  /* col = 72 00000000 */
  0x00,  /* col = 73 00000000 */
  0x00,  /* col = 74 00000000 */
  0x00,  /* col = 75 00000000 */
  0x00,  /* col = 76 00000000 */
  0x00,  /* col = 77 00000000 */
  0x00,  /* col = 78 00000000 */
  0x00,  /* col = 79 00000000 */
  0x00,  /* col = 80 00000000 */
  0x00,  /* col = 81 00000000 */
  0x00,  /* col = 82 00000000 */
  0x00,  /* col = 83 00000000 */

  /* rows 24-31 */
  0x00,  /* col =  0 00000000 */
  0x00,  /* col =  1 00000000 */
  0x00,  /* col =  2 00000000 */
  0x00,  /* col =  3 00000000 */
  0x00,  /* col =  4 00000000 */
  0x00,  /* col =  5 00000000 */
  0x00,  /* col =  6 00000000 */
  0x00,  /* col =  7 00000000 */
  0x00,  /* col =  8 00000000 */
  0x00,  /* col =  9 00000000 */
  0x00,  /* col = 10 00000000 */
  0x00,  /* col = 11 00000000 */
  0x00,  /* col = 12 00000000 */
  0xf8,  /* col = 13 11111000 */
  0x0e,  /* col = 14 00001110 */
  0x03,  /* col = 15 00000011 */
  0x01,  /* col = 16 00000001 */
  0x00,  /* col = 17 00000000 */
  0x70,  /* col = 18 01110000 */
  0xf8,  /* col = 19 11111000 */
  0x38,  /* col = 20 00111000 */
  0x78,  /* col = 21 01111000 */
  0xe9,  /* col = 22 11101001 */
  0xb8,  /* col = 23 10111000 */
  0xf0,  /* col = 24 11110000 */
  0x60,  /* col = 25 01100000 */
  0x00,  /* col = 26 00000000 */
  0x00,  /* col = 27 00000000 */
  0x00,  /* col = 28 00000000 */
  0x00,  /* col = 29 00000000 */
  0x00,  /* col = 30 00000000 */
  0x00,  /* col = 31 00000000 */
  0x07,  /* col = 32 00000111 */
  0x07,  /* col = 33 00000111 */
  0x0e,  /* col = 34 00001110 */
  0x07,  /* col = 35 00000111 */
  0x07,  /* col = 36 00000111 */
  0x03,  /* col = 37 00000011 */
  0x03,  /* col = 38 00000011 */
  0x00,  /* col = 39 00000000 */
  0x00,  /* col = 40 00000000 */
  0x00,  /* col = 41 00000000 */
  0x00,  /* col = 42 00000000 */
  0x00,  /* col = 43 00000000 */
  0x00,  /* col = 44 00000000 */
  0x00,  /* col = 45 00000000 */
  0x00,  /* col = 46 00000000 */
  0x00,  /* col = 47 00000000 */
  0x00,  /* col = 48 00000000 */
  0x00,  /* col = 49 00000000 */
  0x00,  /* col = 50 00000000 */
  0x00,  /* col = 51 00000000 */
  0x00,  /* col = 52 00000000 */
  0x00,  /* col = 53 00000000 */
  0x00,  /* col = 54 00000000 */
  0x01,  /* col = 55 00000001 */
  0x01,  /* col = 56 00000001 */
  0xff,  /* col = 57 11111111 */
  0x00,  /* col = 58 00000000 */
  0x00,  /* col = 59 00000000 */
  0x00,  /* col = 60 00000000 */
  0x00,  /* col = 61 00000000 */
  0x00,  /* col = 62 00000000 */
  0x00,  /* col = 63 00000000 */
  0x00,  /* col = 64 00000000 */
  0x00,  /* col = 65 00000000 */
  0x00,  /* col = 66 00000000 */
  0x00,  /* col = 67 00000000 */
  0x00,  /* col = 68 00000000 */
  0x00,  /* col = 69 00000000 */
  0x00,  /* col = 70 00000000 */
  0x00,  /* col = 71 00000000 */
  0x00,  /* col = 72 00000000 */
  0x00,  /* col = 73 00000000 */
  0x00,  /* col = 74 00000000 */
  0x00,  /* col = 75 00000000 */
  0x00,  /* col = 76 00000000 */
  0x00,  /* col = 77 00000000 */
  0x00,  /* col = 78 00000000 */
  0x00,  /* col = 79 00000000 */
  0x00,  /* col = 80 00000000 */
  0x00,  /* col = 81 00000000 */
  0x00,  /* col = 82 00000000 */
  0x00,  /* col = 83 00000000 */

  /* rows 32-39 */
  0x00,  /* col =  0 00000000 */
  0x00,  /* col =  1 00000000 */
  0x00,  /* col =  2 00000000 */
  0x00,  /* col =  3 00000000 */
  0x00,  /* col =  4 00000000 */
  0x00,  /* col =  5 00000000 */
  0x00,  /* col =  6 00000000 */
  0x00,  /* col =  7 00000000 */
  0x00,  /* col =  8 00000000 */
  0x00,  /* col =  9 00000000 */
  0x00,  /* col = 10 00000000 */
  0x00,  /* col = 11 00000000 */
  0x00,  /* col = 12 00000000 */
  0x07,  /* col = 13 00000111 */
  0xfc,  /* col = 14 11111100 */
  0x80,  /* col = 15 10000000 */
  0x00,  /* col = 16 00000000 */
  0x00,  /* col = 17 00000000 */
  0x18,  /* col = 18 00011000 */
  0x39,  /* col = 19 00111001 */
  0x2f,  /* col = 20 00101111 */
  0x7b,  /* col = 21 01111011 */
  0x7b,  /* col = 22 01111011 */
  0x7f,  /* col = 23 01111111 */
  0x7c,  /* col = 24 01111100 */
  0x7c,  /* col = 25 01111100 */
  0x66,  /* col = 26 01100110 */
  0x60,  /* col = 27 01100000 */
  0x70,  /* col = 28 01110000 */
  0x70,  /* col = 29 01110000 */
  0x30,  /* col = 30 00110000 */
  0x30,  /* col = 31 00110000 */
  0x00,  /* col = 32 00000000 */
  0x00,  /* col = 33 00000000 */
  0x00,  /* col = 34 00000000 */
  0x00,  /* col = 35 00000000 */
  0x00,  /* col = 36 00000000 */
  0x00,  /* col = 37 00000000 */
  0x00,  /* col = 38 00000000 */
  0x00,  /* col = 39 00000000 */
  0x00,  /* col = 40 00000000 */
  0x00,  /* col = 41 00000000 */
  0x00,  /* col = 42 00000000 */
  0xc0,  /* col = 43 11000000 */
  0x00,  /* col = 44 00000000 */
  0x00,  /* col = 45 00000000 */
  0x80,  /* col = 46 10000000 */
  0x40,  /* col = 47 01000000 */
  0x00,  /* col = 48 00000000 */
  0x00,  /* col = 49 00000000 */
  0x00,  /* col = 50 00000000 */
  0x00,  /* col = 51 00000000 */
  0x00,  /* col = 52 00000000 */
  0x00,  /* col = 53 00000000 */
  0x00,  /* col = 54 00000000 */
  0x00,  /* col = 55 00000000 */
  0x00,  /* col = 56 00000000 */
  0x03,  /* col = 57 00000011 */
  0x00,  /* col = 58 00000000 */
  0x00,  /* col = 59 00000000 */
  0xc0,  /* col = 60 11000000 */
  0x40,  /* col = 61 01000000 */
  0x40,  /* col = 62 01000000 */
  0x80,  /* col = 63 10000000 */
  0x00,  /* col = 64 00000000 */
  0x00,  /* col = 65 00000000 */
  0x00,  /* col = 66 00000000 */
  0x00,  /* col = 67 00000000 */
  0x00,  /* col = 68 00000000 */
  0x00,  /* col = 69 00000000 */
  0x00,  /* col = 70 00000000 */
  0x00,  /* col = 71 00000000 */
  0xc0,  /* col = 72 11000000 */
  0x00,  /* col = 73 00000000 */
  0x00,  /* col = 74 00000000 */
  0x00,  /* col = 75 00000000 */
  0x00,  /* col = 76 00000000 */
  0x00,  /* col = 77 00000000 */
  0x00,  /* col = 78 00000000 */
  0x00,  /* col = 79 00000000 */
  0x00,  /* col = 80 00000000 */
  0x00,  /* col = 81 00000000 */
  0x00,  /* col = 82 00000000 */
  0x00,  /* col = 83 00000000 */

  /* rows 40-47 */
  0x00,  /* col =  0 00000000 */
  0x00,  /* col =  1 00000000 */
  0x00,  /* col =  2 00000000 */
  0x00,  /* col =  3 00000000 */
  0x00,  /* col =  4 00000000 */
  0x00,  /* col =  5 00000000 */
  0x00,  /* col =  6 00000000 */
  0x00,  /* col =  7 00000000 */
  0x00,  /* col =  8 00000000 */
  0x00,  /* col =  9 00000000 */
  0x00,  /* col = 10 00000000 */
  0x00,  /* col = 11 00000000 */
  0x00,  /* col = 12 00000000 */
  0x00,  /* col = 13 00000000 */
  0x00,  /* col = 14 00000000 */
  0x07,  /* col = 15 00000111 */
  0x18,  /* col = 16 00011000 */
  0x30,  /* col = 17 00110000 */
  0x20,  /* col = 18 00100000 */
  0xc0,  /* col = 19 11000000 */
  0x80,  /* col = 20 10000000 */
  0x80,  /* col = 21 10000000 */
  0x80,  /* col = 22 10000000 */
  0x00,  /* col = 23 00000000 */
  0x00,  /* col = 24 00000000 */
  0x00,  /* col = 25 00000000 */
  0x00,  /* col = 26 00000000 */
  0x00,  /* col = 27 00000000 */
  0x00,  /* col = 28 00000000 */
  0x00,  /* col = 29 00000000 */
  0x00,  /* col = 30 00000000 */
  0x00,  /* col = 31 00000000 */
  0x00,  /* col = 32 00000000 */
  0x00,  /* col = 33 00000000 */
  0x00,  /* col = 34 00000000 */
  0x00,  /* col = 35 00000000 */
  0x00,  /* col = 36 00000000 */
  0x00,  /* col = 37 00000000 */
  0x00,  /* col = 38 00000000 */
  0x00,  /* col = 39 00000000 */
  0x00,  /* col = 40 00000000 */
  0x00,  /* col = 41 00000000 */
  0x00,  /* col = 42 00000000 */
  0x00,  /* col = 43 00000000 */
  0x07,  /* col = 44 00000111 */
  0x0c,  /* col = 45 00001100 */
  0x03,  /* col = 46 00000011 */
  0x00,  /* col = 47 00000000 */
  0x06,  /* col = 48 00000110 */
  0x0b,  /* col = 49 00001011 */
  0x0b,  /* col = 50 00001011 */
  0x0a,  /* col = 51 00001010 */
  0x0f,  /* col = 52 00001111 */
  0x01,  /* col = 53 00000001 */
  0x00,  /* col = 54 00000000 */
  0x21,  /* col = 55 00100001 */
  0x16,  /* col = 56 00010110 */
  0x0c,  /* col = 57 00001100 */
  0x03,  /* col = 58 00000011 */
  0x00,  /* col = 59 00000000 */
  0x0f,  /* col = 60 00001111 */
  0x0a,  /* col = 61 00001010 */
  0x0a,  /* col = 62 00001010 */
  0x05,  /* col = 63 00000101 */
  0x00,  /* col = 64 00000000 */
  0x05,  /* col = 65 00000101 */
  0x0b,  /* col = 66 00001011 */
  0x0b,  /* col = 67 00001011 */
  0x0e,  /* col = 68 00001110 */
  0x06,  /* col = 69 00000110 */
  0x09,  /* col = 70 00001001 */
  0x09,  /* col = 71 00001001 */
  0x0f,  /* col = 72 00001111 */
  0x00,  /* col = 73 00000000 */
  0x26,  /* col = 74 00100110 */
  0x29,  /* col = 75 00101001 */
  0x29,  /* col = 76 00101001 */
  0x1f,  /* col = 77 00011111 */
  0x06,  /* col = 78 00000110 */
  0x0b,  /* col = 79 00001011 */
  0x0b,  /* col = 80 00001011 */
  0x0a,  /* col = 81 00001010 */
  0x00,  /* col = 82 00000000 */
  0x00,  /* col = 83 00000000 */

};
static struct image doge_img;



static const char grump_txt[] = "GRUMPY CAT";
static const unsigned char grump[] = {
  /* width, height/8 */
  //84,48/8,

  /* rows 0-7 */
  0x08,  /* col =  0 00001000 */
  0x0a,  /* col =  1 00001010 */
  0x00,  /* col =  2 00000000 */
  0x08,  /* col =  3 00001000 */
  0x00,  /* col =  4 00000000 */
  0x04,  /* col =  5 00000100 */
  0x00,  /* col =  6 00000000 */
  0x0e,  /* col =  7 00001110 */
  0x3d,  /* col =  8 00111101 */
  0x78,  /* col =  9 01111000 */
  0xf0,  /* col = 10 11110000 */
  0xf2,  /* col = 11 11110010 */
  0xe0,  /* col = 12 11100000 */
  0xc1,  /* col = 13 11000001 */
  0xc0,  /* col = 14 11000000 */
  0x80,  /* col = 15 10000000 */
  0x81,  /* col = 16 10000001 */
  0x41,  /* col = 17 01000001 */
  0x01,  /* col = 18 00000001 */
  0x42,  /* col = 19 01000010 */
  0x08,  /* col = 20 00001000 */
  0x60,  /* col = 21 01100000 */
  0x00,  /* col = 22 00000000 */
  0x20,  /* col = 23 00100000 */
  0x20,  /* col = 24 00100000 */
  0x08,  /* col = 25 00001000 */
  0x50,  /* col = 26 01010000 */
  0x14,  /* col = 27 00010100 */
  0x00,  /* col = 28 00000000 */
  0x10,  /* col = 29 00010000 */
  0xc8,  /* col = 30 11001000 */
  0x88,  /* col = 31 10001000 */
  0x00,  /* col = 32 00000000 */
  0x88,  /* col = 33 10001000 */
  0x28,  /* col = 34 00101000 */
  0x28,  /* col = 35 00101000 */
  0x00,  /* col = 36 00000000 */
  0xc0,  /* col = 37 11000000 */
  0xe0,  /* col = 38 11100000 */
  0xf8,  /* col = 39 11111000 */
  0xff,  /* col = 40 11111111 */
  0xff,  /* col = 41 11111111 */
  0xff,  /* col = 42 11111111 */
  0xff,  /* col = 43 11111111 */
  0xff,  /* col = 44 11111111 */
  0xff,  /* col = 45 11111111 */
  0xfe,  /* col = 46 11111110 */
  0xff,  /* col = 47 11111111 */
  0xff,  /* col = 48 11111111 */
  0xff,  /* col = 49 11111111 */
  0xff,  /* col = 50 11111111 */
  0x71,  /* col = 51 01110001 */
  0x41,  /* col = 52 01000001 */
  0xc1,  /* col = 53 11000001 */
  0x23,  /* col = 54 00100011 */
  0xaf,  /* col = 55 10101111 */
  0xff,  /* col = 56 11111111 */
  0xff,  /* col = 57 11111111 */
  0xff,  /* col = 58 11111111 */
  0xff,  /* col = 59 11111111 */
  0xff,  /* col = 60 11111111 */
  0xff,  /* col = 61 11111111 */
  0xff,  /* col = 62 11111111 */
  0xff,  /* col = 63 11111111 */
  0xff,  /* col = 64 11111111 */
  0xff,  /* col = 65 11111111 */
  0xff,  /* col = 66 11111111 */
  0xff,  /* col = 67 11111111 */
  0xff,  /* col = 68 11111111 */
  0xff,  /* col = 69 11111111 */
  0xff,  /* col = 70 11111111 */
  0xff,  /* col = 71 11111111 */
  0xff,  /* col = 72 11111111 */
  0xff,  /* col = 73 11111111 */
  0xff,  /* col = 74 11111111 */
  0xff,  /* col = 75 11111111 */
  0xff,  /* col = 76 11111111 */
  0xff,  /* col = 77 11111111 */
  0xff,  /* col = 78 11111111 */
  0xff,  /* col = 79 11111111 */
  0xff,  /* col = 80 11111111 */
  0xff,  /* col = 81 11111111 */
  0xff,  /* col = 82 11111111 */
  0xff,  /* col = 83 11111111 */

  /* rows 8-15 */
  0x00,  /* col =  0 00000000 */
  0x00,  /* col =  1 00000000 */
  0x00,  /* col =  2 00000000 */
  0x00,  /* col =  3 00000000 */
  0x00,  /* col =  4 00000000 */
  0x00,  /* col =  5 00000000 */
  0x00,  /* col =  6 00000000 */
  0x00,  /* col =  7 00000000 */
  0x00,  /* col =  8 00000000 */
  0x00,  /* col =  9 00000000 */
  0x03,  /* col = 10 00000011 */
  0xff,  /* col = 11 11111111 */
  0xcf,  /* col = 12 11001111 */
  0xff,  /* col = 13 11111111 */
  0xef,  /* col = 14 11101111 */
  0xff,  /* col = 15 11111111 */
  0x7f,  /* col = 16 01111111 */
  0x7f,  /* col = 17 01111111 */
  0x3f,  /* col = 18 00111111 */
  0x3e,  /* col = 19 00111110 */
  0x1c,  /* col = 20 00011100 */
  0x0d,  /* col = 21 00001101 */
  0x0f,  /* col = 22 00001111 */
  0x02,  /* col = 23 00000010 */
  0xe3,  /* col = 24 11100011 */
  0xa3,  /* col = 25 10100011 */
  0x01,  /* col = 26 00000001 */
  0x83,  /* col = 27 10000011 */
  0xe2,  /* col = 28 11100010 */
  0x03,  /* col = 29 00000011 */
  0x02,  /* col = 30 00000010 */
  0xe3,  /* col = 31 11100011 */
  0x03,  /* col = 32 00000011 */
  0x11,  /* col = 33 00010001 */
  0x1d,  /* col = 34 00011101 */
  0x1b,  /* col = 35 00011011 */
  0x3c,  /* col = 36 00111100 */
  0x3f,  /* col = 37 00111111 */
  0x7f,  /* col = 38 01111111 */
  0x3f,  /* col = 39 00111111 */
  0x7f,  /* col = 40 01111111 */
  0xff,  /* col = 41 11111111 */
  0xff,  /* col = 42 11111111 */
  0xff,  /* col = 43 11111111 */
  0xff,  /* col = 44 11111111 */
  0xff,  /* col = 45 11111111 */
  0xfb,  /* col = 46 11111011 */
  0xff,  /* col = 47 11111111 */
  0xff,  /* col = 48 11111111 */
  0x7f,  /* col = 49 01111111 */
  0x0f,  /* col = 50 00001111 */
  0xd0,  /* col = 51 11010000 */
  0xae,  /* col = 52 10101110 */
  0xd4,  /* col = 53 11010100 */
  0x2c,  /* col = 54 00101100 */
  0xff,  /* col = 55 11111111 */
  0xff,  /* col = 56 11111111 */
  0xff,  /* col = 57 11111111 */
  0xff,  /* col = 58 11111111 */
  0xff,  /* col = 59 11111111 */
  0xff,  /* col = 60 11111111 */
  0xff,  /* col = 61 11111111 */
  0xff,  /* col = 62 11111111 */
  0xff,  /* col = 63 11111111 */
  0xff,  /* col = 64 11111111 */
  0xff,  /* col = 65 11111111 */
  0xff,  /* col = 66 11111111 */
  0xff,  /* col = 67 11111111 */
  0xff,  /* col = 68 11111111 */
  0xff,  /* col = 69 11111111 */
  0xff,  /* col = 70 11111111 */
  0xff,  /* col = 71 11111111 */
  0xff,  /* col = 72 11111111 */
  0xff,  /* col = 73 11111111 */
  0xff,  /* col = 74 11111111 */
  0xff,  /* col = 75 11111111 */
  0xff,  /* col = 76 11111111 */
  0xff,  /* col = 77 11111111 */
  0xff,  /* col = 78 11111111 */
  0xff,  /* col = 79 11111111 */
  0xff,  /* col = 80 11111111 */
  0xff,  /* col = 81 11111111 */
  0xff,  /* col = 82 11111111 */
  0xff,  /* col = 83 11111111 */

  /* rows 16-23 */
  0x01,  /* col =  0 00000001 */
  0x00,  /* col =  1 00000000 */
  0x00,  /* col =  2 00000000 */
  0x80,  /* col =  3 10000000 */
  0x00,  /* col =  4 00000000 */
  0x40,  /* col =  5 01000000 */
  0x70,  /* col =  6 01110000 */
  0xe0,  /* col =  7 11100000 */
  0x00,  /* col =  8 00000000 */
  0xc0,  /* col =  9 11000000 */
  0x60,  /* col = 10 01100000 */
  0x20,  /* col = 11 00100000 */
  0x97,  /* col = 12 10010111 */
  0xcf,  /* col = 13 11001111 */
  0xe0,  /* col = 14 11100000 */
  0x78,  /* col = 15 01111000 */
  0xf0,  /* col = 16 11110000 */
  0xcc,  /* col = 17 11001100 */
  0xfc,  /* col = 18 11111100 */
  0xfc,  /* col = 19 11111100 */
  0xfe,  /* col = 20 11111110 */
  0xfe,  /* col = 21 11111110 */
  0xf4,  /* col = 22 11110100 */
  0xfb,  /* col = 23 11111011 */
  0x7f,  /* col = 24 01111111 */
  0xce,  /* col = 25 11001110 */
  0xf0,  /* col = 26 11110000 */
  0x1f,  /* col = 27 00011111 */
  0xfd,  /* col = 28 11111101 */
  0xfe,  /* col = 29 11111110 */
  0xf3,  /* col = 30 11110011 */
  0xee,  /* col = 31 11101110 */
  0xfc,  /* col = 32 11111100 */
  0xfa,  /* col = 33 11111010 */
  0xfe,  /* col = 34 11111110 */
  0xfc,  /* col = 35 11111100 */
  0x80,  /* col = 36 10000000 */
  0xe0,  /* col = 37 11100000 */
  0x40,  /* col = 38 01000000 */
  0xc0,  /* col = 39 11000000 */
  0xc3,  /* col = 40 11000011 */
  0x01,  /* col = 41 00000001 */
  0x01,  /* col = 42 00000001 */
  0x09,  /* col = 43 00001001 */
  0x3f,  /* col = 44 00111111 */
  0x7f,  /* col = 45 01111111 */
  0xff,  /* col = 46 11111111 */
  0xff,  /* col = 47 11111111 */
  0xef,  /* col = 48 11101111 */
  0x60,  /* col = 49 01100000 */
  0xe1,  /* col = 50 11100001 */
  0xf3,  /* col = 51 11110011 */
  0x5e,  /* col = 52 01011110 */
  0xf9,  /* col = 53 11111001 */
  0xfa,  /* col = 54 11111010 */
  0xff,  /* col = 55 11111111 */
  0xff,  /* col = 56 11111111 */
  0xff,  /* col = 57 11111111 */
  0xff,  /* col = 58 11111111 */
  0xff,  /* col = 59 11111111 */
  0xff,  /* col = 60 11111111 */
  0xff,  /* col = 61 11111111 */
  0xff,  /* col = 62 11111111 */
  0xff,  /* col = 63 11111111 */
  0xff,  /* col = 64 11111111 */
  0xff,  /* col = 65 11111111 */
  0xff,  /* col = 66 11111111 */
  0xff,  /* col = 67 11111111 */
  0xff,  /* col = 68 11111111 */
  0xff,  /* col = 69 11111111 */
  0xff,  /* col = 70 11111111 */
  0xff,  /* col = 71 11111111 */
  0xff,  /* col = 72 11111111 */
  0xff,  /* col = 73 11111111 */
  0xff,  /* col = 74 11111111 */
  0xff,  /* col = 75 11111111 */
  0xff,  /* col = 76 11111111 */
  0xff,  /* col = 77 11111111 */
  0xff,  /* col = 78 11111111 */
  0xff,  /* col = 79 11111111 */
  0xff,  /* col = 80 11111111 */
  0xff,  /* col = 81 11111111 */
  0xff,  /* col = 82 11111111 */
  0xff,  /* col = 83 11111111 */

  /* rows 24-31 */
  0xa8,  /* col =  0 10101000 */
  0x96,  /* col =  1 10010110 */
  0x93,  /* col =  2 10010011 */
  0x58,  /* col =  3 01011000 */
  0x74,  /* col =  4 01110100 */
  0x1a,  /* col =  5 00011010 */
  0x0d,  /* col =  6 00001101 */
  0x07,  /* col =  7 00000111 */
  0x01,  /* col =  8 00000001 */
  0x80,  /* col =  9 10000000 */
  0x00,  /* col = 10 00000000 */
  0x00,  /* col = 11 00000000 */
  0x0b,  /* col = 12 00001011 */
  0xff,  /* col = 13 11111111 */
  0xff,  /* col = 14 11111111 */
  0xfb,  /* col = 15 11111011 */
  0xf7,  /* col = 16 11110111 */
  0xef,  /* col = 17 11101111 */
  0xf7,  /* col = 18 11110111 */
  0x7f,  /* col = 19 01111111 */
  0x7c,  /* col = 20 01111100 */
  0x3f,  /* col = 21 00111111 */
  0x0f,  /* col = 22 00001111 */
  0x17,  /* col = 23 00010111 */
  0x20,  /* col = 24 00100000 */
  0x01,  /* col = 25 00000001 */
  0x80,  /* col = 26 10000000 */
  0x0e,  /* col = 27 00001110 */
  0x0f,  /* col = 28 00001111 */
  0x7f,  /* col = 29 01111111 */
  0xff,  /* col = 30 11111111 */
  0xff,  /* col = 31 11111111 */
  0xfb,  /* col = 32 11111011 */
  0xf7,  /* col = 33 11110111 */
  0xff,  /* col = 34 11111111 */
  0xff,  /* col = 35 11111111 */
  0xff,  /* col = 36 11111111 */
  0xff,  /* col = 37 11111111 */
  0xff,  /* col = 38 11111111 */
  0xff,  /* col = 39 11111111 */
  0x3f,  /* col = 40 00111111 */
  0xd7,  /* col = 41 11010111 */
  0x77,  /* col = 42 01110111 */
  0x24,  /* col = 43 00100100 */
  0x08,  /* col = 44 00001000 */
  0x00,  /* col = 45 00000000 */
  0x00,  /* col = 46 00000000 */
  0x03,  /* col = 47 00000011 */
  0x11,  /* col = 48 00010001 */
  0xff,  /* col = 49 11111111 */
  0xfd,  /* col = 50 11111101 */
  0xfd,  /* col = 51 11111101 */
  0xff,  /* col = 52 11111111 */
  0xfe,  /* col = 53 11111110 */
  0xff,  /* col = 54 11111111 */
  0xff,  /* col = 55 11111111 */
  0xff,  /* col = 56 11111111 */
  0xff,  /* col = 57 11111111 */
  0xff,  /* col = 58 11111111 */
  0xff,  /* col = 59 11111111 */
  0xff,  /* col = 60 11111111 */
  0xff,  /* col = 61 11111111 */
  0xff,  /* col = 62 11111111 */
  0xff,  /* col = 63 11111111 */
  0xff,  /* col = 64 11111111 */
  0xff,  /* col = 65 11111111 */
  0xff,  /* col = 66 11111111 */
  0xff,  /* col = 67 11111111 */
  0xff,  /* col = 68 11111111 */
  0xff,  /* col = 69 11111111 */
  0xff,  /* col = 70 11111111 */
  0xff,  /* col = 71 11111111 */
  0xff,  /* col = 72 11111111 */
  0xff,  /* col = 73 11111111 */
  0xff,  /* col = 74 11111111 */
  0xff,  /* col = 75 11111111 */
  0xff,  /* col = 76 11111111 */
  0xff,  /* col = 77 11111111 */
  0xff,  /* col = 78 11111111 */
  0xff,  /* col = 79 11111111 */
  0xff,  /* col = 80 11111111 */
  0xff,  /* col = 81 11111111 */
  0xff,  /* col = 82 11111111 */
  0xff,  /* col = 83 11111111 */

  /* rows 32-39 */
  0x86,  /* col =  0 10000110 */
  0xc1,  /* col =  1 11000001 */
  0x81,  /* col =  2 10000001 */
  0x00,  /* col =  3 00000000 */
  0x80,  /* col =  4 10000000 */
  0xa0,  /* col =  5 10100000 */
  0xc0,  /* col =  6 11000000 */
  0x70,  /* col =  7 01110000 */
  0xd8,  /* col =  8 11011000 */
  0xff,  /* col =  9 11111111 */
  0x50,  /* col = 10 01010000 */
  0x00,  /* col = 11 00000000 */
  0x00,  /* col = 12 00000000 */
  0x00,  /* col = 13 00000000 */
  0x00,  /* col = 14 00000000 */
  0x00,  /* col = 15 00000000 */
  0x03,  /* col = 16 00000011 */
  0x00,  /* col = 17 00000000 */
  0x00,  /* col = 18 00000000 */
  0x00,  /* col = 19 00000000 */
  0x00,  /* col = 20 00000000 */
  0x10,  /* col = 21 00010000 */
  0x08,  /* col = 22 00001000 */
  0x09,  /* col = 23 00001001 */
  0x27,  /* col = 24 00100111 */
  0x59,  /* col = 25 01011001 */
  0x29,  /* col = 26 00101001 */
  0x5c,  /* col = 27 01011100 */
  0x18,  /* col = 28 00011000 */
  0x20,  /* col = 29 00100000 */
  0x78,  /* col = 30 01111000 */
  0x40,  /* col = 31 01000000 */
  0x71,  /* col = 32 01110001 */
  0xe3,  /* col = 33 11100011 */
  0xb6,  /* col = 34 10110110 */
  0xff,  /* col = 35 11111111 */
  0x7f,  /* col = 36 01111111 */
  0xff,  /* col = 37 11111111 */
  0xfb,  /* col = 38 11111011 */
  0xfb,  /* col = 39 11111011 */
  0x3b,  /* col = 40 00111011 */
  0x1e,  /* col = 41 00011110 */
  0x08,  /* col = 42 00001000 */
  0x00,  /* col = 43 00000000 */
  0x00,  /* col = 44 00000000 */
  0x00,  /* col = 45 00000000 */
  0x00,  /* col = 46 00000000 */
  0x00,  /* col = 47 00000000 */
  0x00,  /* col = 48 00000000 */
  0x0f,  /* col = 49 00001111 */
  0xbf,  /* col = 50 10111111 */
  0xff,  /* col = 51 11111111 */
  0xff,  /* col = 52 11111111 */
  0xff,  /* col = 53 11111111 */
  0xff,  /* col = 54 11111111 */
  0xff,  /* col = 55 11111111 */
  0xff,  /* col = 56 11111111 */
  0xff,  /* col = 57 11111111 */
  0xff,  /* col = 58 11111111 */
  0xff,  /* col = 59 11111111 */
  0x7f,  /* col = 60 01111111 */
  0x7f,  /* col = 61 01111111 */
  0x7f,  /* col = 62 01111111 */
  0xff,  /* col = 63 11111111 */
  0xff,  /* col = 64 11111111 */
  0xff,  /* col = 65 11111111 */
  0x7f,  /* col = 66 01111111 */
  0x7f,  /* col = 67 01111111 */
  0x7f,  /* col = 68 01111111 */
  0xff,  /* col = 69 11111111 */
  0xff,  /* col = 70 11111111 */
  0xff,  /* col = 71 11111111 */
  0xff,  /* col = 72 11111111 */
  0xff,  /* col = 73 11111111 */
  0xff,  /* col = 74 11111111 */
  0xff,  /* col = 75 11111111 */
  0xff,  /* col = 76 11111111 */
  0xff,  /* col = 77 11111111 */
  0xff,  /* col = 78 11111111 */
  0xff,  /* col = 79 11111111 */
  0xff,  /* col = 80 11111111 */
  0xff,  /* col = 81 11111111 */
  0xff,  /* col = 82 11111111 */
  0xff,  /* col = 83 11111111 */

  /* rows 40-47 */
  0xb4,  /* col =  0 10110100 */
  0x0b,  /* col =  1 00001011 */
  0x37,  /* col =  2 00110111 */
  0x5e,  /* col =  3 01011110 */
  0x84,  /* col =  4 10000100 */
  0xed,  /* col =  5 11101101 */
  0xbf,  /* col =  6 10111111 */
  0xdb,  /* col =  7 11011011 */
  0xff,  /* col =  8 11111111 */
  0x1f,  /* col =  9 00011111 */
  0x01,  /* col = 10 00000001 */
  0x00,  /* col = 11 00000000 */
  0x00,  /* col = 12 00000000 */
  0x00,  /* col = 13 00000000 */
  0x00,  /* col = 14 00000000 */
  0x00,  /* col = 15 00000000 */
  0x00,  /* col = 16 00000000 */
  0x00,  /* col = 17 00000000 */
  0x00,  /* col = 18 00000000 */
  0x00,  /* col = 19 00000000 */
  0x00,  /* col = 20 00000000 */
  0x00,  /* col = 21 00000000 */
  0x00,  /* col = 22 00000000 */
  0x00,  /* col = 23 00000000 */
  0x00,  /* col = 24 00000000 */
  0x00,  /* col = 25 00000000 */
  0x00,  /* col = 26 00000000 */
  0x00,  /* col = 27 00000000 */
  0x00,  /* col = 28 00000000 */
  0x40,  /* col = 29 01000000 */
  0x20,  /* col = 30 00100000 */
  0x00,  /* col = 31 00000000 */
  0x2c,  /* col = 32 00101100 */
  0x23,  /* col = 33 00100011 */
  0x21,  /* col = 34 00100001 */
  0x33,  /* col = 35 00110011 */
  0x50,  /* col = 36 01010000 */
  0x04,  /* col = 37 00000100 */
  0x10,  /* col = 38 00010000 */
  0x00,  /* col = 39 00000000 */
  0x00,  /* col = 40 00000000 */
  0x00,  /* col = 41 00000000 */
  0x00,  /* col = 42 00000000 */
  0x00,  /* col = 43 00000000 */
  0x00,  /* col = 44 00000000 */
  0x00,  /* col = 45 00000000 */
  0x00,  /* col = 46 00000000 */
  0x00,  /* col = 47 00000000 */
  0x00,  /* col = 48 00000000 */
  0x00,  /* col = 49 00000000 */
  0x00,  /* col = 50 00000000 */
  0x8f,  /* col = 51 10001111 */
  0xff,  /* col = 52 11111111 */
  0xff,  /* col = 53 11111111 */
  0xff,  /* col = 54 11111111 */
  0xff,  /* col = 55 11111111 */
  0xff,  /* col = 56 11111111 */
  0xff,  /* col = 57 11111111 */
  0xff,  /* col = 58 11111111 */
  0xff,  /* col = 59 11111111 */
  0xf0,  /* col = 60 11110000 */
  0xff,  /* col = 61 11111111 */
  0xff,  /* col = 62 11111111 */
  0xf0,  /* col = 63 11110000 */
  0xff,  /* col = 64 11111111 */
  0xf8,  /* col = 65 11111000 */
  0xf7,  /* col = 66 11110111 */
  0xf7,  /* col = 67 11110111 */
  0xf7,  /* col = 68 11110111 */
  0xf8,  /* col = 69 11111000 */
  0xff,  /* col = 70 11111111 */
  0xff,  /* col = 71 11111111 */
  0xff,  /* col = 72 11111111 */
  0xff,  /* col = 73 11111111 */
  0xff,  /* col = 74 11111111 */
  0xff,  /* col = 75 11111111 */
  0xff,  /* col = 76 11111111 */
  0xff,  /* col = 77 11111111 */
  0xff,  /* col = 78 11111111 */
  0xff,  /* col = 79 11111111 */
  0xff,  /* col = 80 11111111 */
  0xff,  /* col = 81 11111111 */
  0xff,  /* col = 82 11111111 */
  0xff,  /* col = 83 11111111 */

};
static const struct image grumpy_img;


#endif	/* GFX_ASSETS_H */

