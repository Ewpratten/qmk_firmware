/*
Copyright 2020 Pierre Chevalier <pierrechevalier83@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// Tapdance settings
#define TAPPING_TERM 50
#define TAPPING_TERM_PER_KEY
#define RETRO_TAPPING // https://docs.qmk.fm/#/tap_hold?id=retro-tapping

// Space cadet on control key
#define LCPO_KEYS KC_LCTL, KC_LSFT, KC_0

// // Force constant-speed controls for mouse movement
// #define MK_3_SPEED
// #define MK_MOMENTARY_ACCEL

// // Override the mode-2 speed
// #define MK_C_OFFSET_1 4 // Defaut: 4

// Bootloader settings
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

#define BOOTMAGIC_LITE_ROW_RIGHT 5
#define BOOTMAGIC_LITE_COLUMN_RIGHT 0

// Chording config
#define FORCE_NKRO
// #define COMBO_COUNT 3
#define COMBO_COUNT 21


// Settings for enabling experiments
#define ENABLE_ASETNIOP
