/*
retrorun - libretro frontend for Anbernic Devices
Copyright (C) 2020  OtherCrashOverride
Copyright (C) 2021-present  navy1978

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/
#include <stdio.h>
#include <stdarg.h>

unsigned char fontdata8x8[64*16] =
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x3C,0x42,0x99,0xBD,0xBD,0x99,0x42,0x3C,0x3C,0x42,0x81,0x81,0x81,0x81,0x42,0x3C,
	0xFE,0x82,0x8A,0xD2,0xA2,0x82,0xFE,0x00,0xFE,0x82,0x82,0x82,0x82,0x82,0xFE,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x64,0x74,0x7C,0x38,0x00,0x00,
	0x80,0xC0,0xF0,0xFC,0xF0,0xC0,0x80,0x00,0x01,0x03,0x0F,0x3F,0x0F,0x03,0x01,0x00,
	0x18,0x3C,0x7E,0x18,0x7E,0x3C,0x18,0x00,0xEE,0xEE,0xEE,0xCC,0x00,0xCC,0xCC,0x00,
	0x00,0x00,0x30,0x68,0x78,0x30,0x00,0x00,0x00,0x38,0x64,0x74,0x7C,0x38,0x00,0x00,
	0x3C,0x66,0x7A,0x7A,0x7E,0x7E,0x3C,0x00,0x0E,0x3E,0x3A,0x22,0x26,0x6E,0xE4,0x40,
	0x18,0x3C,0x7E,0x3C,0x3C,0x3C,0x3C,0x00,0x3C,0x3C,0x3C,0x3C,0x7E,0x3C,0x18,0x00,
	0x08,0x7C,0x7E,0x7E,0x7C,0x08,0x00,0x00,0x10,0x3E,0x7E,0x7E,0x3E,0x10,0x00,0x00,
	0x58,0x2A,0xDC,0xC8,0xDC,0x2A,0x58,0x00,0x24,0x66,0xFF,0xFF,0x66,0x24,0x00,0x00,
	0x00,0x10,0x10,0x38,0x38,0x7C,0xFE,0x00,0xFE,0x7C,0x38,0x38,0x10,0x10,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x1C,0x1C,0x18,0x00,0x18,0x18,0x00,
	0x6C,0x6C,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0x7C,0x28,0x7C,0x28,0x00,0x00,
	0x10,0x38,0x60,0x38,0x0C,0x78,0x10,0x00,0x40,0xA4,0x48,0x10,0x24,0x4A,0x04,0x00,
	0x18,0x34,0x18,0x3A,0x6C,0x66,0x3A,0x00,0x18,0x18,0x20,0x00,0x00,0x00,0x00,0x00,
	0x30,0x60,0x60,0x60,0x60,0x60,0x30,0x00,0x0C,0x06,0x06,0x06,0x06,0x06,0x0C,0x00,
	0x10,0x54,0x38,0x7C,0x38,0x54,0x10,0x00,0x00,0x18,0x18,0x7E,0x18,0x18,0x00,0x00,
	0x00,0x00,0x00,0x00,0x18,0x18,0x30,0x00,0x00,0x00,0x00,0x00,0x3E,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x04,0x08,0x10,0x20,0x40,0x00,0x00,
	0x38,0x4C,0xC6,0xC6,0xC6,0x64,0x38,0x00,0x18,0x38,0x18,0x18,0x18,0x18,0x7E,0x00,
	0x7C,0xC6,0x0E,0x3C,0x78,0xE0,0xFE,0x00,0x7E,0x0C,0x18,0x3C,0x06,0xC6,0x7C,0x00,
	0x1C,0x3C,0x6C,0xCC,0xFE,0x0C,0x0C,0x00,0xFC,0xC0,0xFC,0x06,0x06,0xC6,0x7C,0x00,
	0x3C,0x60,0xC0,0xFC,0xC6,0xC6,0x7C,0x00,0xFE,0xC6,0x0C,0x18,0x30,0x30,0x30,0x00,
	0x78,0xC4,0xE4,0x78,0x86,0x86,0x7C,0x00,0x7C,0xC6,0xC6,0x7E,0x06,0x0C,0x78,0x00,
	0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x18,0x18,0x30,
	0x1C,0x38,0x70,0xE0,0x70,0x38,0x1C,0x00,0x00,0x7C,0x00,0x00,0x7C,0x00,0x00,0x00,
	0x70,0x38,0x1C,0x0E,0x1C,0x38,0x70,0x00,0x7C,0xC6,0xC6,0x1C,0x18,0x00,0x18,0x00,
	0x3C,0x42,0x99,0xA1,0xA5,0x99,0x42,0x3C,0x38,0x6C,0xC6,0xC6,0xFE,0xC6,0xC6,0x00,
	0xFC,0xC6,0xC6,0xFC,0xC6,0xC6,0xFC,0x00,0x3C,0x66,0xC0,0xC0,0xC0,0x66,0x3C,0x00,
	0xF8,0xCC,0xC6,0xC6,0xC6,0xCC,0xF8,0x00,0xFE,0xC0,0xC0,0xFC,0xC0,0xC0,0xFE,0x00,
	0xFE,0xC0,0xC0,0xFC,0xC0,0xC0,0xC0,0x00,0x3E,0x60,0xC0,0xCE,0xC6,0x66,0x3E,0x00,
	0xC6,0xC6,0xC6,0xFE,0xC6,0xC6,0xC6,0x00,0x7E,0x18,0x18,0x18,0x18,0x18,0x7E,0x00,
	0x06,0x06,0x06,0x06,0xC6,0xC6,0x7C,0x00,0xC6,0xCC,0xD8,0xF0,0xF8,0xDC,0xCE,0x00,
	0x60,0x60,0x60,0x60,0x60,0x60,0x7E,0x00,0xC6,0xEE,0xFE,0xFE,0xD6,0xC6,0xC6,0x00,
	0xC6,0xE6,0xF6,0xFE,0xDE,0xCE,0xC6,0x00,0x7C,0xC6,0xC6,0xC6,0xC6,0xC6,0x7C,0x00,
	0xFC,0xC6,0xC6,0xC6,0xFC,0xC0,0xC0,0x00,0x7C,0xC6,0xC6,0xC6,0xDE,0xCC,0x7A,0x00,
	0xFC,0xC6,0xC6,0xCE,0xF8,0xDC,0xCE,0x00,0x78,0xCC,0xC0,0x7C,0x06,0xC6,0x7C,0x00,
	0x7E,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0x7C,0x00,
	0xC6,0xC6,0xC6,0xEE,0x7C,0x38,0x10,0x00,0xC6,0xC6,0xD6,0xFE,0xFE,0xEE,0xC6,0x00,
	0xC6,0xEE,0x3C,0x38,0x7C,0xEE,0xC6,0x00,0x66,0x66,0x66,0x3C,0x18,0x18,0x18,0x00,
	0xFE,0x0E,0x1C,0x38,0x70,0xE0,0xFE,0x00,0x3C,0x30,0x30,0x30,0x30,0x30,0x3C,0x00,
	0x60,0x60,0x30,0x18,0x0C,0x06,0x06,0x00,0x3C,0x0C,0x0C,0x0C,0x0C,0x0C,0x3C,0x00,
	0x18,0x3C,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
	0x30,0x30,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x06,0x3E,0x66,0x66,0x3C,0x00,
	0x60,0x7C,0x66,0x66,0x66,0x66,0x7C,0x00,0x00,0x3C,0x66,0x60,0x60,0x66,0x3C,0x00,
	0x06,0x3E,0x66,0x66,0x66,0x66,0x3E,0x00,0x00,0x3C,0x66,0x66,0x7E,0x60,0x3C,0x00,
	0x1C,0x30,0x78,0x30,0x30,0x30,0x30,0x00,0x00,0x3E,0x66,0x66,0x66,0x3E,0x06,0x3C,
	0x60,0x7C,0x76,0x66,0x66,0x66,0x66,0x00,0x18,0x00,0x38,0x18,0x18,0x18,0x18,0x00,
	0x0C,0x00,0x1C,0x0C,0x0C,0x0C,0x0C,0x38,0x60,0x60,0x66,0x6C,0x78,0x6C,0x66,0x00,
	0x38,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0xEC,0xFE,0xFE,0xFE,0xD6,0xC6,0x00,
	0x00,0x7C,0x76,0x66,0x66,0x66,0x66,0x00,0x00,0x3C,0x66,0x66,0x66,0x66,0x3C,0x00,
	0x00,0x7C,0x66,0x66,0x66,0x7C,0x60,0x60,0x00,0x3E,0x66,0x66,0x66,0x3E,0x06,0x06,
	0x00,0x7E,0x70,0x60,0x60,0x60,0x60,0x00,0x00,0x3C,0x60,0x3C,0x06,0x66,0x3C,0x00,
	0x30,0x78,0x30,0x30,0x30,0x30,0x1C,0x00,0x00,0x66,0x66,0x66,0x66,0x6E,0x3E,0x00,
	0x00,0x66,0x66,0x66,0x66,0x3C,0x18,0x00,0x00,0xC6,0xD6,0xFE,0xFE,0x7C,0x6C,0x00,
	0x00,0x66,0x3C,0x18,0x3C,0x66,0x66,0x00,0x00,0x66,0x66,0x66,0x66,0x3E,0x06,0x3C,
	0x00,0x7E,0x0C,0x18,0x30,0x60,0x7E,0x00,0x0E,0x18,0x0C,0x38,0x0C,0x18,0x0E,0x00,
	0x18,0x18,0x18,0x00,0x18,0x18,0x18,0x00,0x70,0x18,0x30,0x1C,0x30,0x18,0x70,0x00,
	0x00,0x00,0x76,0xDC,0x00,0x00,0x00,0x00,0x10,0x28,0x10,0x54,0xAA,0x44,0x00,0x00,
};


/* The font is generated from Xorg clR5x8.bdf */
/*
COMMENT  Copyright 1989 Dale Schumacher, dal@syntel.mn.org
COMMENT                 399 Beacon Ave.
COMMENT                 St. Paul, MN  55104-3527
COMMENT
COMMENT  Permission to use, copy, modify, and distribute this software and
COMMENT  its documentation for any purpose and without fee is hereby
COMMENT  granted, provided that the above copyright notice appear in all
COMMENT  copies and that both that copyright notice and this permission
COMMENT  notice appear in supporting documentation, and that the name of
COMMENT  Dale Schumacher not be used in advertising or publicity pertaining to
COMMENT  distribution of the software without specific, written prior
COMMENT  permission.  Dale Schumacher makes no representations about the
COMMENT  suitability of this software for any purpose.  It is provided "as
COMMENT  is" without express or implied warranty.
COMMENT
*/
unsigned char fontdata6x8[256][8] = {
{ 0x7c>>2, 0x44>>2, 0x7c>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0xff>>2, 0x7c>>2, },
{ 0x00>>2, 0x00>>2, 0x10>>2, 0x28>>2, 0x44>>2, 0x7c>>2, 0x44>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x78>>2, 0x44>>2, 0x78>>2, 0x44>>2, 0x78>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x38>>2, 0x44>>2, 0x40>>2, 0x44>>2, 0x38>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x78>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x78>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x7c>>2, 0x40>>2, 0x78>>2, 0x40>>2, 0x7c>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x7c>>2, 0x40>>2, 0x78>>2, 0x40>>2, 0x40>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x3c>>2, 0x40>>2, 0x4c>>2, 0x44>>2, 0x3c>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x44>>2, 0x44>>2, 0x7c>>2, 0x44>>2, 0x44>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x38>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x38>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x1c>>2, 0x04>>2, 0x04>>2, 0x44>>2, 0x38>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x48>>2, 0x50>>2, 0x60>>2, 0x50>>2, 0x48>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x40>>2, 0x40>>2, 0x40>>2, 0x40>>2, 0x7c>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x44>>2, 0x6c>>2, 0x54>>2, 0x54>>2, 0x44>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x44>>2, 0x64>>2, 0x54>>2, 0x4c>>2, 0x44>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x38>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x38>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x78>>2, 0x44>>2, 0x78>>2, 0x40>>2, 0x40>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x38>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x38>>2, 0x0c>>2, },
{ 0x00>>2, 0x00>>2, 0x78>>2, 0x44>>2, 0x78>>2, 0x50>>2, 0x4c>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x3c>>2, 0x40>>2, 0x38>>2, 0x04>>2, 0x78>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x7c>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x38>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x44>>2, 0x44>>2, 0x28>>2, 0x28>>2, 0x10>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x44>>2, 0x54>>2, 0x54>>2, 0x6c>>2, 0x44>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x44>>2, 0x28>>2, 0x10>>2, 0x28>>2, 0x44>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x44>>2, 0x28>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x7c>>2, 0x08>>2, 0x10>>2, 0x20>>2, 0x7c>>2, 0x00>>2, },
{ 0xe0>>2, 0x80>>2, 0xe0>>2, 0x8c>>2, 0xf0>>2, 0x10>>2, 0x10>>2, 0x0c>>2, },
{ 0x00>>2, 0x10>>2, 0x38>>2, 0x7c>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x00>>2, },
{ 0x00>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x7c>>2, 0x38>>2, 0x10>>2, 0x00>>2, },
{ 0x00>>2, 0x10>>2, 0x18>>2, 0xfc>>2, 0x18>>2, 0x10>>2, 0x00>>2, 0x00>>2, },
{ 0x00>>2, 0x20>>2, 0x60>>2, 0xfc>>2, 0x60>>2, 0x20>>2, 0x00>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, },
{ 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x00>>2, 0x10>>2, 0x00>>2, },
{ 0x28>>2, 0x28>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, },
{ 0x00>>2, 0x28>>2, 0x7c>>2, 0x28>>2, 0x7c>>2, 0x28>>2, 0x00>>2, 0x00>>2, },
{ 0x10>>2, 0x3c>>2, 0x50>>2, 0x38>>2, 0x14>>2, 0x78>>2, 0x10>>2, 0x00>>2, },
{ 0x60>>2, 0x64>>2, 0x08>>2, 0x10>>2, 0x20>>2, 0x4c>>2, 0x0c>>2, 0x00>>2, },
{ 0x38>>2, 0x40>>2, 0x40>>2, 0x20>>2, 0x54>>2, 0x48>>2, 0x34>>2, 0x00>>2, },
{ 0x10>>2, 0x20>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, },
{ 0x04>>2, 0x08>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x08>>2, 0x04>>2, 0x00>>2, },
{ 0x40>>2, 0x20>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x20>>2, 0x40>>2, 0x00>>2, },
{ 0x00>>2, 0x10>>2, 0x54>>2, 0x38>>2, 0x54>>2, 0x10>>2, 0x00>>2, 0x00>>2, },
{ 0x00>>2, 0x10>>2, 0x10>>2, 0x7c>>2, 0x10>>2, 0x10>>2, 0x00>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x10>>2, 0x10>>2, 0x20>>2, },
{ 0x00>>2, 0x00>>2, 0x00>>2, 0x7c>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x10>>2, 0x10>>2, 0x00>>2, },
{ 0x04>>2, 0x04>>2, 0x08>>2, 0x08>>2, 0x10>>2, 0x10>>2, 0x20>>2, 0x20>>2, },
{ 0x38>>2, 0x44>>2, 0x4c>>2, 0x54>>2, 0x64>>2, 0x44>>2, 0x38>>2, 0x00>>2, },
{ 0x10>>2, 0x30>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x00>>2, },
{ 0x38>>2, 0x44>>2, 0x04>>2, 0x08>>2, 0x10>>2, 0x20>>2, 0x7c>>2, 0x00>>2, },
{ 0x38>>2, 0x44>>2, 0x04>>2, 0x18>>2, 0x04>>2, 0x44>>2, 0x38>>2, 0x00>>2, },
{ 0x18>>2, 0x18>>2, 0x28>>2, 0x28>>2, 0x7c>>2, 0x08>>2, 0x1c>>2, 0x00>>2, },
{ 0x7c>>2, 0x40>>2, 0x78>>2, 0x04>>2, 0x04>>2, 0x44>>2, 0x38>>2, 0x00>>2, },
{ 0x18>>2, 0x20>>2, 0x40>>2, 0x78>>2, 0x44>>2, 0x44>>2, 0x38>>2, 0x00>>2, },
{ 0x7c>>2, 0x44>>2, 0x04>>2, 0x08>>2, 0x08>>2, 0x10>>2, 0x10>>2, 0x00>>2, },
{ 0x38>>2, 0x44>>2, 0x44>>2, 0x38>>2, 0x44>>2, 0x44>>2, 0x38>>2, 0x00>>2, },
{ 0x38>>2, 0x44>>2, 0x44>>2, 0x3c>>2, 0x04>>2, 0x08>>2, 0x30>>2, 0x00>>2, },
{ 0x00>>2, 0x10>>2, 0x10>>2, 0x00>>2, 0x00>>2, 0x10>>2, 0x10>>2, 0x00>>2, },
{ 0x00>>2, 0x10>>2, 0x10>>2, 0x00>>2, 0x00>>2, 0x10>>2, 0x10>>2, 0x20>>2, },
{ 0x00>>2, 0x0c>>2, 0x30>>2, 0xc0>>2, 0x30>>2, 0x0c>>2, 0x00>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x7c>>2, 0x00>>2, 0x7c>>2, 0x00>>2, 0x00>>2, 0x00>>2, },
{ 0x00>>2, 0xc0>>2, 0x30>>2, 0x0c>>2, 0x30>>2, 0xc0>>2, 0x00>>2, 0x00>>2, },
{ 0x38>>2, 0x44>>2, 0x04>>2, 0x08>>2, 0x10>>2, 0x00>>2, 0x10>>2, 0x00>>2, },
{ 0x38>>2, 0x44>>2, 0x5c>>2, 0x5c>>2, 0x58>>2, 0x40>>2, 0x38>>2, 0x00>>2, },
{ 0x10>>2, 0x28>>2, 0x44>>2, 0x44>>2, 0x7c>>2, 0x44>>2, 0x44>>2, 0x00>>2, },
{ 0x78>>2, 0x44>>2, 0x44>>2, 0x78>>2, 0x44>>2, 0x44>>2, 0x78>>2, 0x00>>2, },
{ 0x38>>2, 0x44>>2, 0x40>>2, 0x40>>2, 0x40>>2, 0x44>>2, 0x38>>2, 0x00>>2, },
{ 0x70>>2, 0x48>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x48>>2, 0x70>>2, 0x00>>2, },
{ 0x7c>>2, 0x40>>2, 0x40>>2, 0x78>>2, 0x40>>2, 0x40>>2, 0x7c>>2, 0x00>>2, },
{ 0x7c>>2, 0x40>>2, 0x40>>2, 0x78>>2, 0x40>>2, 0x40>>2, 0x40>>2, 0x00>>2, },
{ 0x38>>2, 0x44>>2, 0x40>>2, 0x4c>>2, 0x44>>2, 0x44>>2, 0x3c>>2, 0x00>>2, },
{ 0x44>>2, 0x44>>2, 0x44>>2, 0x7c>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x00>>2, },
{ 0x7c>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x7c>>2, 0x00>>2, },
{ 0x1c>>2, 0x04>>2, 0x04>>2, 0x04>>2, 0x44>>2, 0x44>>2, 0x38>>2, 0x00>>2, },
{ 0x44>>2, 0x48>>2, 0x50>>2, 0x60>>2, 0x50>>2, 0x48>>2, 0x44>>2, 0x00>>2, },
{ 0x40>>2, 0x40>>2, 0x40>>2, 0x40>>2, 0x40>>2, 0x40>>2, 0x7c>>2, 0x00>>2, },
{ 0x44>>2, 0x6c>>2, 0x54>>2, 0x54>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x00>>2, },
{ 0x44>>2, 0x64>>2, 0x64>>2, 0x54>>2, 0x4c>>2, 0x4c>>2, 0x44>>2, 0x00>>2, },
{ 0x38>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x38>>2, 0x00>>2, },
{ 0x78>>2, 0x44>>2, 0x44>>2, 0x78>>2, 0x40>>2, 0x40>>2, 0x40>>2, 0x00>>2, },
{ 0x38>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x38>>2, 0x0c>>2, },
{ 0x78>>2, 0x44>>2, 0x44>>2, 0x78>>2, 0x50>>2, 0x48>>2, 0x44>>2, 0x00>>2, },
{ 0x38>>2, 0x44>>2, 0x40>>2, 0x38>>2, 0x04>>2, 0x44>>2, 0x38>>2, 0x00>>2, },
{ 0x7c>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x00>>2, },
{ 0x44>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x38>>2, 0x00>>2, },
{ 0x44>>2, 0x44>>2, 0x44>>2, 0x28>>2, 0x28>>2, 0x10>>2, 0x10>>2, 0x00>>2, },
{ 0x44>>2, 0x44>>2, 0x44>>2, 0x54>>2, 0x54>>2, 0x6c>>2, 0x44>>2, 0x00>>2, },
{ 0x44>>2, 0x44>>2, 0x28>>2, 0x10>>2, 0x28>>2, 0x44>>2, 0x44>>2, 0x00>>2, },
{ 0x44>>2, 0x44>>2, 0x28>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x00>>2, },
{ 0x7c>>2, 0x04>>2, 0x08>>2, 0x10>>2, 0x20>>2, 0x40>>2, 0x7c>>2, 0x00>>2, },
{ 0x1c>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x1c>>2, 0x00>>2, },
{ 0x20>>2, 0x20>>2, 0x10>>2, 0x10>>2, 0x08>>2, 0x08>>2, 0x04>>2, 0x04>>2, },
{ 0x70>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x70>>2, 0x00>>2, },
{ 0x10>>2, 0x28>>2, 0x44>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0xfc>>2, 0x00>>2, },
{ 0x10>>2, 0x08>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x3c>>2, 0x44>>2, 0x44>>2, 0x4c>>2, 0x34>>2, 0x00>>2, },
{ 0x40>>2, 0x40>>2, 0x78>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x78>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x3c>>2, 0x40>>2, 0x40>>2, 0x40>>2, 0x3c>>2, 0x00>>2, },
{ 0x04>>2, 0x04>>2, 0x3c>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x3c>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x38>>2, 0x44>>2, 0x7c>>2, 0x40>>2, 0x38>>2, 0x00>>2, },
{ 0x1c>>2, 0x20>>2, 0x78>>2, 0x20>>2, 0x20>>2, 0x20>>2, 0x20>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x3c>>2, 0x44>>2, 0x44>>2, 0x3c>>2, 0x04>>2, 0x38>>2, },
{ 0x40>>2, 0x40>>2, 0x78>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x00>>2, },
{ 0x10>>2, 0x00>>2, 0x30>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x38>>2, 0x00>>2, },
{ 0x08>>2, 0x00>>2, 0x38>>2, 0x08>>2, 0x08>>2, 0x08>>2, 0x08>>2, 0x70>>2, },
{ 0x40>>2, 0x40>>2, 0x48>>2, 0x50>>2, 0x60>>2, 0x50>>2, 0x48>>2, 0x00>>2, },
{ 0x30>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x38>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x68>>2, 0x54>>2, 0x54>>2, 0x54>>2, 0x44>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x58>>2, 0x64>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x38>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x38>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x78>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x78>>2, 0x40>>2, },
{ 0x00>>2, 0x00>>2, 0x3c>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x3c>>2, 0x04>>2, },
{ 0x00>>2, 0x00>>2, 0x58>>2, 0x60>>2, 0x40>>2, 0x40>>2, 0x40>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x3c>>2, 0x40>>2, 0x38>>2, 0x04>>2, 0x78>>2, 0x00>>2, },
{ 0x10>>2, 0x10>>2, 0x7c>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x0c>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x4c>>2, 0x34>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x6c>>2, 0x28>>2, 0x28>>2, 0x10>>2, 0x10>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x44>>2, 0x54>>2, 0x54>>2, 0x54>>2, 0x28>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x44>>2, 0x28>>2, 0x10>>2, 0x28>>2, 0x44>>2, 0x00>>2, },
{ 0x00>>2, 0x00>>2, 0x44>>2, 0x44>>2, 0x44>>2, 0x3c>>2, 0x04>>2, 0x38>>2, },
{ 0x00>>2, 0x00>>2, 0x7c>>2, 0x08>>2, 0x10>>2, 0x20>>2, 0x7c>>2, 0x00>>2, },
{ 0x04>>2, 0x08>>2, 0x08>>2, 0x10>>2, 0x08>>2, 0x08>>2, 0x04>>2, 0x00>>2, },
{ 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x10>>2, 0x00>>2, },
{ 0x40>>2, 0x20>>2, 0x20>>2, 0x10>>2, 0x20>>2, 0x20>>2, 0x40>>2, 0x00>>2, },
{ 0x20>>2, 0x54>>2, 0x08>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, 0x00>>2, },
{ 0x00>>2, 0x10>>2, 0x10>>2, 0x28>>2, 0x28>>2, 0x44>>2, 0x7c>>2, 0x00>>2, },
};




















void basic_text_out16_nf_color(void *fb, int w, int x, int y, const char *text, unsigned short color)
{
	int i, l;
	unsigned short *screen;

	//screen =  (unsigned short *)((void *)fb + x + y * w);
	screen =  (unsigned short *)fb + x + y * w;
		
	for (i = 0; ; i++, screen += 8)
	{
		char c = text[i];
		if (c == 0)
			break;
		if (c == ' ')
			continue;

		for (l = 0; l < 8; l++)
		{
			unsigned char fd = fontdata8x8[c * 8 + l];
			unsigned short *s = screen + l * w;
			unsigned char fd1, fdp = 0;

			if (fd&0x80) s[0] = color;
			if (fd&0x40) s[1] = color;
			if (fd&0x20) s[2] = color;
			if (fd&0x10) s[3] = color;
			if (fd&0x08) s[4] = color;
			if (fd&0x04) s[5] = color;
			if (fd&0x02) s[6] = color;
			if (fd&0x01) s[7] = color;

			// draw "shadow" (RGB1555 compatible)
			if (l > 0)
				fdp = fontdata8x8[c * 8 + l - 1];

			for (fd1 = 0x80; fd1 != 0; fd1 >>= 1, s++)
				if (!(fd & (fd1 >> 1)) && ((fdp | fd) & fd1))
					s[1] = (s[1] >> 1) & 0x39ef;
		}
	}
}

/* note: may use 1 extra pixel on the right */
void basic_text_out16_nf(void *fb, int w, int x, int y, const char *text)
{
	basic_text_out16_nf_color(fb,w,x,y,text, 0xffff);
}

void basic_text_out_uyvy_nf(void *fb, int w, int x, int y, const char *text)
{
	int i, l;
	unsigned short *screen;

	screen = (unsigned short *)fb + x + y * w;
	for (i = 0; ; i++, screen += 8)
	{
		char c = text[i];
		if (c == 0)
			break;
		if (c == ' ')
			continue;

		for (l = 0; l < 8; l++)
		{
			unsigned char fd = fontdata8x8[c * 8 + l];
			unsigned char *s = (unsigned char *)(screen + l * w);
			unsigned char fd1, fdp = 0;

			if (fd&0x80) s[0 * 2 + 1] = 235;
			if (fd&0x40) s[1 * 2 + 1] = 235;
			if (fd&0x20) s[2 * 2 + 1] = 235;
			if (fd&0x10) s[3 * 2 + 1] = 235;
			if (fd&0x08) s[4 * 2 + 1] = 235;
			if (fd&0x04) s[5 * 2 + 1] = 235;
			if (fd&0x02) s[6 * 2 + 1] = 235;
			if (fd&0x01) s[7 * 2 + 1] = 235;

			// draw "shadow"
			if (l > 0)
				fdp = fontdata8x8[c * 8 + l - 1];

			for (fd1 = 0x80; fd1 != 0; fd1 >>= 1, s += 2)
				if (!(fd & (fd1 >> 1)) && ((fdp | fd) & fd1))
					s[1] /= 2;
		}
	}
}

void basic_text_out16(void *fb, int w, int x, int y, const char *texto, ...)
{
	va_list args;
	char    buffer[256];

	va_start(args, texto);
	vsnprintf(buffer, sizeof(buffer), texto, args);
	va_end(args);

	basic_text_out16_nf(fb, w, x, y, buffer);
}

void basic_text_out16_color(void *fb, int w, int x, int y, unsigned short color, const char *texto, ...)
{
	va_list args;
	char    buffer[256];

	va_start(args, texto);
	vsnprintf(buffer, sizeof(buffer), texto, args);
	va_end(args);

	basic_text_out16_nf_color(fb, w, x, y, buffer, color);
}

