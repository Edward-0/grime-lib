#pragma once
#include "../core/Any.h"

struct std_maths_Ring; // trait <T>

struct std_maths_Ring *_init_std_maths_Ring();

struct std_core_Any *sum_std_maths_Ring(struct std_maths_Ring *self, struct std_core_Any *x, struct std_core_Any *y);
void impl_sum_std_maths_Ring(struct std_maths_Ring *self, struct std_core_Any *(*sum)(struct std_core_Any *x, struct std_core_Any *y));
