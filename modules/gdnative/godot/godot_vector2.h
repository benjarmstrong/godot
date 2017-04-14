/*************************************************************************/
/*  godot_vector2.h                                                      */
/*************************************************************************/
/*                       This file is part of:                           */
/*                           GODOT ENGINE                                */
/*                    http://www.godotengine.org                         */
/*************************************************************************/
/* Copyright (c) 2007-2017 Juan Linietsky, Ariel Manzur.                 */
/* Copyright (c) 2014-2017 Godot Engine contributors (cf. AUTHORS.md)    */
/*                                                                       */
/* Permission is hereby granted, free of charge, to any person obtaining */
/* a copy of this software and associated documentation files (the       */
/* "Software"), to deal in the Software without restriction, including   */
/* without limitation the rights to use, copy, modify, merge, publish,   */
/* distribute, sublicense, and/or sell copies of the Software, and to    */
/* permit persons to whom the Software is furnished to do so, subject to */
/* the following conditions:                                             */
/*                                                                       */
/* The above copyright notice and this permission notice shall be        */
/* included in all copies or substantial portions of the Software.       */
/*                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.*/
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY  */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,  */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE     */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                */
/*************************************************************************/
#ifndef GODOT_VECTOR2_H
#define GODOT_VECTOR2_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#ifndef GODOT_CORE_API_GODOT_VECTOR2_TYPE_DEFINED
#define GODOT_CORE_API_GODOT_VECTOR2_TYPE_DEFINED
typedef struct godot_vector2 {
	uint8_t _dont_touch_that[8];
} godot_vector2;
#endif

#include "../godot.h"

void GDAPI godot_vector2_new(godot_vector2 *p_v, const godot_real p_x, const godot_real p_y);

void GDAPI godot_vector2_set_x(godot_vector2 *p_v, const godot_real p_x);
void GDAPI godot_vector2_set_y(godot_vector2 *p_v, const godot_real p_y);
godot_real GDAPI godot_vector2_get_x(const godot_vector2 *p_v);
godot_real GDAPI godot_vector2_get_y(const godot_vector2 *p_v);

void GDAPI godot_vector2_normalize(godot_vector2 *p_v);
void GDAPI godot_vector2_normalized(godot_vector2 *p_dest, const godot_vector2 *p_src);

godot_real GDAPI godot_vector2_length(const godot_vector2 *p_v);
godot_real GDAPI godot_vector2_length_squared(const godot_vector2 *p_v);

godot_real GDAPI godot_vector2_distance_to(const godot_vector2 *p_a, const godot_vector2 *p_b);
godot_real GDAPI godot_vector2_distance_squared_to(const godot_vector2 *p_a, const godot_vector2 *p_b);

void GDAPI godot_vector2_abs(godot_vector2 *p_dest, const godot_vector2 *p_src);
godot_real GDAPI godot_vector2_angle(const godot_vector2 *p_src);
godot_real GDAPI godot_vector2_angle_to(const godot_vector2 *p_src, const godot_vector2 *p_to);
godot_real GDAPI godot_vector2_angle_to_point(const godot_vector2 *p_src, const godot_vector2 *p_to);
void GDAPI godot_vector2_clamped(godot_vector2 *p_dest, const godot_vector2 *p_src, godot_real length);
void GDAPI godot_vector2_cubic_interpolate(godot_vector2 *p_dest, const godot_vector2 *p_src,
		const godot_vector2 *p_b, const godot_vector2 *p_pre_a,
		const godot_vector2 *p_post_b, godot_real t);
godot_real GDAPI godot_vector2_dot(const godot_vector2 *p_src, const godot_vector2 *p_with);
void GDAPI godot_vector2_floor(godot_vector2 *p_dest, const godot_vector2 *p_src);
godot_real GDAPI godot_vector2_aspect(const godot_vector2 *p_src);
void GDAPI godot_vector2_linear_interpolate(godot_vector2 *p_dest, const godot_vector2 *p_src,
		const godot_vector2 *p_b, godot_real t);
void GDAPI godot_vector2_reflect(godot_vector2 *p_dest, const godot_vector2 *p_src, const godot_vector2 *p_vec);
void GDAPI godot_vector2_rotated(godot_vector2 *p_dest, const godot_vector2 *p_src, godot_real phi);
void GDAPI godot_vector2_slide(godot_vector2 *p_dest, const godot_vector2 *p_src, godot_vector2 *p_vec);
void GDAPI godot_vector2_snapped(godot_vector2 *p_dest, const godot_vector2 *p_src, godot_vector2 *p_by);
void GDAPI godot_vector2_tangent(godot_vector2 *p_dest, const godot_vector2 *p_src);
void GDAPI godot_vector2_to_string(godot_string *p_dest, const godot_vector2 *p_src);

void GDAPI godot_vector2_operator_add(godot_vector2 *p_dest, const godot_vector2 *p_a, const godot_vector2 *p_b);
void GDAPI godot_vector2_operator_subtract(godot_vector2 *p_dest, const godot_vector2 *p_a, const godot_vector2 *p_b);
void GDAPI godot_vector2_operator_multiply_vector(godot_vector2 *p_dest, const godot_vector2 *p_a, const godot_vector2 *p_b);
void GDAPI godot_vector2_operator_multiply_scalar(godot_vector2 *p_dest, const godot_vector2 *p_a, const godot_real p_b);
void GDAPI godot_vector2_operator_divide_vector(godot_vector2 *p_dest, const godot_vector2 *p_a, const godot_vector2 *p_b);
void GDAPI godot_vector2_operator_divide_scalar(godot_vector2 *p_dest, const godot_vector2 *p_a, const godot_real p_b);

godot_bool GDAPI godot_vector2_operator_equal(const godot_vector2 *p_a, const godot_vector2 *p_b);
godot_bool GDAPI godot_vector2_operator_less(const godot_vector2 *p_a, const godot_vector2 *p_b);

#ifdef __cplusplus
}
#endif

#endif // GODOT_VECTOR2_H
