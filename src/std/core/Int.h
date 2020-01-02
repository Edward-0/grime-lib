#pragma once
#include <stdint.h>
#include "Any.h"

struct std_core_Int;

struct std_core_Int *_init_std_core_Int();

struct std_core_Any *_get_super_std_core_Any_std_core_Int(struct std_core_Int *self); // var y: Any = (Any) x

void _literal_std_core_Int(struct std_core_Int *self, int32_t val); // var x: Int = 0
int32_t _cval_std_core_Int(struct std_core_Int *self);
