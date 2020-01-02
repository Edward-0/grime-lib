#pragma once

struct std_core_Any;

struct std_core_Any *_init_std_core_Any();

void _set_child_std_core_Any(struct std_core_Any *self, void *child); // All open classes
void *_get_child_std_core_Any(struct std_core_Any *self);

void _impl_demolish_std_core_Any(struct std_core_Any *self, void (*_demolish)(struct std_core_Any *self)); // open methods
void _demolish_std_core_Any(struct std_core_Any *self);
