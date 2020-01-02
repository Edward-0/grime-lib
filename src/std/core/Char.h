#pragma once
#include <stdint.h>
#include "Any.h"

struct std_core_Char;

struct std_core_Char *_init_std_core_Char();

struct std_core_Any *_get_super_std_core_Any(struct std_core_Char *self); // var y: Any = (Any) x

void _literal_std_core_Char(struct std_core_Char *self, int32_t val); // var x: Char = 'x'
int32_t _cval_std_core_Char(struct std_core_Char *self);
