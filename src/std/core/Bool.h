#pragma once
#include <stdint.h>
#include "Any.h"

struct std_core_Bool;

struct std_core_Bool *_init_std_core_Bool();

struct std_core_Any *_get_super_std_core_Any_std_core_Bool(struct std_core_Bool *self); // var y: Any = (Any) x

void _literal_std_core_Bool(struct std_core_Bool *self, int8_t val); // var x: Bool = true
int8_t _cval_std_core_Bool(struct std_core_Bool *self);
