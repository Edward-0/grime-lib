#pragma once
#include "Any.h"
#include "Int.h"
#include "Char.h"

struct std_core_String;

struct std_core_String *_init_std_core_Strig();

struct std_core_Any *_get_super_std_core_Any_std_core_String(struct std_core_String *self);

void _literal_std_core_String(struct std_core_String *self, char const *val);
char const *_cval_std_core_String(struct std_core_String *self);

struct std_core_Char *charAt_std_core_String(struct std_core_String *self, struct std_core_Int *index);
