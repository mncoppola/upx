/* fold_pti86.h -- created from fold_pti86.bin, 1544 (0x608) bytes

   This file is part of the UPX executable compressor.

   Copyright (C) 1996-2005 Markus Franz Xaver Johannes Oberhumer
   Copyright (C) 1996-2005 Laszlo Molnar
   All Rights Reserved.

   UPX and the UCL library are free software; you can redistribute them
   and/or modify them under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 2 of
   the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING.
   If not, write to the Free Software Foundation, Inc.,
   59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

   Markus F.X.J. Oberhumer              Laszlo Molnar
   <mfx@users.sourceforge.net>          <ml1050@users.sourceforge.net>
 */


#define LINUX_I386PTI_FOLD_ADLER32 0xddc79b4e
#define LINUX_I386PTI_FOLD_CRC32   0x9a6b2960

unsigned char linux_i386pti_fold[1544] = {
127, 69, 76, 70,  1,  1,  1,  0, 76,105,110,117,120,  0,  0,  0,   /* 0x   0 */
  2,  0,  3,  0,  1,  0,  0,  0,128,  0,  1,  0, 52,  0,  0,  0,   /* 0x  10 */
  0,  0,  0,  0,  0,  0,  0,  0, 52,  0, 32,  0,  2,  0,  0,  0,   /* 0x  20 */
  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,   /* 0x  30 */
  0,  0,  1,  0,  8,  6,  0,  0,  8,  6,  0,  0,  5,  0,  0,  0,   /* 0x  40 */
  0, 16,  0,  0,  1,  0,  0,  0,  8,  6,  0,  0,  8,  6,  1,  0,   /* 0x  50 */
  8,  6,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,  0,  0,  0,   /* 0x  60 */
  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   /* 0x  70 */
 93, 89, 88,141,124,132,  4, 80, 41,192,175,117,253,175,137,254,   /* 0x  80 */
139,  6,131,248,  3,116,  8,131,198,  8,131,248,  0,117,241,139,   /* 0x  90 */
 94,  4, 83,129,236,  0, 10,  0,  0,137,226, 81,141, 67, 88,139,   /* 0x  a0 */
115, 24, 41,198,139, 24,139, 72,  4,131,193, 12, 96,232, 78,  4,   /* 0x  b0 */
  0,  0,129,196, 36, 10,  0,  0, 91, 80,139, 75, 20,139, 91,  8,   /* 0x  c0 */
184, 91,  0,  0,  0,205,128, 41,192, 41,201, 41,210, 41,219, 41,   /* 0x  d0 */
237, 41,246, 41,255,195,  0,  0, 85, 87,137,207, 86,137,198, 83,   /* 0x  e0 */
 57,  8,139,104,  4,115,  8,106,127, 91,106,  1, 88,205,128,133,   /* 0x  f0 */
255,116, 11,137,249,138, 69,  0, 69,136,  2, 66,226,247, 91,  1,   /* 0x 100 */
126,  4, 41, 62, 94, 95, 93,195, 83,141, 92, 36,  8,106, 90, 88,   /* 0x 110 */
205,128, 91,195, 85,137,229, 87, 86,137,199, 83,137,214,131,236,   /* 0x 120 */
 20,131, 58,  0, 15,132,183,  0,  0,  0,141, 85,228,137,248,185,   /* 0x 130 */
 12,  0,  0,  0,232,159,255,255,255,131,125,228,  0,139, 69,232,   /* 0x 140 */
117, 18, 61, 85, 80, 88, 33,117, 15,131, 63,  0, 15,132,143,  0,   /* 0x 150 */
  0,  0,235,  4,133,192,117,  8,106,127, 91,106,  1, 88,205,128,   /* 0x 160 */
139, 77,232,139, 69,228, 57,193,119,238, 59,  6,119,234, 57,193,   /* 0x 170 */
115, 82, 15,182, 69,236, 80,255, 85,  8,141, 85,224,137, 20, 36,   /* 0x 180 */
255,118,  4,255,117,232,255,119,  4,255, 16,131,196, 16,133,192,   /* 0x 190 */
117,198,139, 69,228, 57, 69,224,117,190,138, 69,237,132,192,116,   /* 0x 1a0 */
 25, 15,182,192, 80,255, 85, 12, 15,182, 85,238,137, 20, 36,255,   /* 0x 1b0 */
117,224,255,118,  4,255, 16,131,196, 12,139, 69,232,  1, 71,  4,   /* 0x 1c0 */
 41,  7,235, 10,139, 86,  4,137,248,232, 10,255,255,255,139, 85,   /* 0x 1d0 */
228,139,  6,  1, 86,  4, 41,208,133,192,137,  6,233, 67,255,255,   /* 0x 1e0 */
255,141,101,244, 91, 94, 95,201,195,133,210,137,209,116,  6,198,   /* 0x 1f0 */
  0,  0, 64,226,250,195,133,192, 83,137,211,116, 29,168,  1,117,   /* 0x 200 */
 25,139, 16, 57,218,116,  7, 74,117, 11,133,219,116,  7,137, 24,   /* 0x 210 */
137, 72,  4,235,  5,131,192,  8,235,231, 91,195, 85,137,229, 87,   /* 0x 220 */
 86, 83,131,236, 76,137, 69,228,139, 69,  8,137, 85,224,139, 77,   /* 0x 230 */
 16,199, 69,204,  0,  0,  0,  0,137, 69,220,  3, 64, 28,139, 93,   /* 0x 240 */
220,137, 77,212,139, 85, 12,137, 69,208, 49,192,102,131,123, 16,   /* 0x 250 */
  3,137, 85,216, 15,183, 75, 44,139, 85,208, 15,149,192,131,206,   /* 0x 260 */
255,193,224,  4,137,207,131,192, 34, 49,219, 79,137, 69,184,120,   /* 0x 270 */
 34,131, 58,  1,117, 24,139, 66,  8, 57,240,115,  8,139,122, 16,   /* 0x 280 */
137,198,137,125,204,  3, 66, 20, 57,195,115,  2,137,195,131,194,   /* 0x 290 */
 32,226,222,137,247,106,  0,129,231,  0,240,255,255,106,  0, 41,   /* 0x 2a0 */
251,255,117,184,129,195,255, 15,  0,  0,106,  7,129,227,  0,240,   /* 0x 2b0 */
255,255,139, 85,204, 83,137,240, 37,255, 15,  0,  0, 87,141,180,   /* 0x 2c0 */
  2,255, 15,  0,  0,232, 62,254,255,255,137,194,131,196, 24,  1,   /* 0x 2d0 */
218,129,230,  0,240,255,255,137, 85,240,137,194, 41,243,  1,242,   /* 0x 2e0 */
137,217,137, 69,172,137,211,106, 91, 88,205,128,139,117,172,139,   /* 0x 2f0 */
 69,220, 41,254, 49,255,102,131,120, 44,  0, 15,132,198,  1,  0,   /* 0x 300 */
  0,139, 85,208,139,  2,131,248,  6,117, 23,139, 74,  8,186,  3,   /* 0x 310 */
  0,  0,  0,139, 69,212,  1,241,232,217,254,255,255,233,145,  1,   /* 0x 320 */
  0,  0, 72, 15,133,138,  1,  0,  0,139, 93,208,199, 69,196, 64,   /* 0x 330 */
 98, 81,115,139, 75, 24,139, 67,  8,131,225,  7,139, 83, 16,193,   /* 0x 340 */
225,  2,137, 69,236,211,109,196,137,193,  3, 75, 20,137,195,129,   /* 0x 350 */
227,255, 15,  0,  0,137, 85,232,  1,218, 41,216,137, 85,192,139,   /* 0x 360 */
 85,208,  1,240,  1,241,137, 69,180,139, 66,  4,131,101,196,  7,   /* 0x 370 */
 41,216,131,125,216,  1, 80,255,117,228, 25,192,137, 93,188,131,   /* 0x 380 */
224,224,137, 77,176,131,192, 50,131,125,216,  0, 80,139, 69,192,   /* 0x 390 */
106,  3,116,  3,131,192,  3, 80,255,117,180,232,104,253,255,255,   /* 0x 3a0 */
131,196, 24, 57, 69,180, 15,133,173,  0,  0,  0,131,125,216,  0,   /* 0x 3b0 */
116, 19,255,117,224,255,117,228,141, 85,232,139, 69,216,232, 81,   /* 0x 3c0 */
253,255,255, 88, 90,139, 85,188,139, 69,180,232, 25,254,255,255,   /* 0x 3d0 */
139, 77,192,139, 69,180,247,217,  3, 69,192,129,225,255, 15,  0,   /* 0x 3e0 */
  0,137,202,137, 77,188,232,254,253,255,255,131,125,216,  0,116,   /* 0x 3f0 */
 86,139, 93,208,131, 59,  1,117, 78,246, 67, 24,  1,116, 72,139,   /* 0x 400 */
 67, 20, 59, 67, 16,139, 83,  8,141, 12, 16,117, 14,137,200,247,   /* 0x 410 */
216, 37,255, 15,  0,  0,131,248,  3,119, 12,139, 69,208,141, 74,   /* 0x 420 */
 12,131,120,  4,  0,117, 15,139,  1, 61,205,128, 97,195,116,  6,   /* 0x 430 */
199,  1,205,128, 97,195,133,201,116, 13,139, 69,212, 49,210,131,   /* 0x 440 */
224,254,232,175,253,255,255,139, 93,180,139, 77,192,139, 85,196,   /* 0x 450 */
106,125, 88,205,128,133,192,116,  8,106,127, 91,106,  1, 88,205,   /* 0x 460 */
128,139, 69,192,  3, 69,188,  1, 69,180,139, 69,176, 57, 69,180,   /* 0x 470 */
115, 31,106,  0, 43, 69,180,106,  0,106, 50,255,117,196, 80,255,   /* 0x 480 */
117,180,232,129,252,255,255,131,196, 24, 57, 69,180,116, 36,235,   /* 0x 490 */
200,131,125,216,  0,116, 28,131, 69,192,  3,129,101,192,255, 15,   /* 0x 4a0 */
  0,  0,131,125,192,  3,119, 11,139, 93,180,139, 77,192,106, 91,   /* 0x 4b0 */
 88,205,128,139, 85,220, 71,131, 69,208, 32, 15,183, 66, 44, 57,   /* 0x 4c0 */
199, 15,140, 58,254,255,255,131,125,216,  0,117, 17,139, 93,228,   /* 0x 4d0 */
106,  6, 88,205,128,133,192,116, 23,233,123,255,255,255,139,125,   /* 0x 4e0 */
220,102,131,127, 16,  3,116,  8,139, 93,240,106, 45, 88,205,128,   /* 0x 4f0 */
139, 69,220,  3,112, 24,141,101,244, 91,137,240, 94, 95,201,195,   /* 0x 500 */
 85,137,229, 87, 86, 83, 81,139,125, 20,141, 85, 24,255,117, 40,   /* 0x 510 */
141, 71, 52,139, 93,  8,255,117, 16,137, 69,240,139,117, 32,141,   /* 0x 520 */
 69, 32,232,237,251,255,255,139, 85,240,139, 69, 12,139, 74,  8,   /* 0x 530 */
186,  3,  0,  0,  0,137, 69, 32,137,216,131,193, 52, 41,117, 36,   /* 0x 540 */
232,177,252,255,255, 15,183, 79, 42,137,216,186,  4,  0,  0,  0,   /* 0x 550 */
232,161,252,255,255, 15,183, 79, 44,137,216,186,  5,  0,  0,  0,   /* 0x 560 */
232,145,252,255,255,139, 79, 24,137,216,186,  9,  0,  0,  0,232,   /* 0x 570 */
130,252,255,255,141, 69, 32, 83,139, 85, 40, 80,139, 69, 16, 87,   /* 0x 580 */
232,151,252,255,255,102,139, 79, 44,131,196, 20, 49,210,102,133,   /* 0x 590 */
201,137,195,116, 89,139, 69,240,131, 56,  3,117, 69, 49,201,139,   /* 0x 5a0 */
 88,  8,137,202,106,  5, 88,205,128,133,192,137,198,120, 20,102,   /* 0x 5b0 */
186,  0,  2,137,195,137,249,106,  3, 88,205,128, 61,  0,  2,  0,   /* 0x 5c0 */
  0,116, 10,106,127, 91,106,  1, 88,205,128,235,246,106,  0, 49,   /* 0x 5d0 */
210,106,  0,137,240, 87,232, 65,252,255,255,131,196, 12,137,195,   /* 0x 5e0 */
235, 12, 66, 15,183,193,131, 69,240, 32, 57,194,124,167,141,101,   /* 0x 5f0 */
244,137,216, 91, 94, 95,201,195                                    /* 0x 600 */
};
