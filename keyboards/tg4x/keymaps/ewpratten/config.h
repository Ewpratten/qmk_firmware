/* Copyright 2019 MechMerlin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// place overrides here

// Force constant-speed controls for mouse movement
#define MK_3_SPEED

// Override the mode-2 speed
#define MK_C_OFFSET_1 8 // Defaut: 4


// Backlight defaults
#define RGBLIGHT_DEFAULT_HUE 234
#define RGBLIGHT_DEFAULT_SAT 128
#define RGBLIGHT_DEFAULT_VAL 255

// Layer-based lighting
#define RGBLIGHT_LAYERS
// NOTE: May need to increase the max light layer count in the future

// To be tweaked based on typing speed
#define TAPPING_TERM 300

