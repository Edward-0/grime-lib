#pragma once
#include <stdint.h>
#include "Any.h"

struct std_core_Byte;

struct std_core_Byte *_init_std_core_Byte();

struct std_core_Any *_get_super_std_core_Any_std_core_Byte(struct std_core_Byte *self); // var y: Any = (Any) x

void _literal_std_core_Byte(struct std_core_Byte *self, int8_t val); // var x: Byte = 0B
int8_t _cval_std_core_Byte(struct std_core_Byte *self);
