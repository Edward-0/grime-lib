#pragma once
#include "../core/core.h"

void std_io_println(struct std_core_String *out);

struct std_io_FileWriter;

struct std_io_FileWriter *_init_std_io_FileWriter();

void (*_demolish_std_io_FileWriter(struct std_io_FileWriter *this))(struct std_io_FileWriter *this);
void (*_build_std_io_FileWriter(struct std_io_FileWriter *self))(struct std_io_FileWriter *self, struct std_core_String *path);
void (*writeByte_std_io_FileWriter(struct std_io_FileWriter *this))(struct std_io_FileWriter *this, struct std_core_Byte *byte);
