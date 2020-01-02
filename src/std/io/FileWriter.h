#pragma once
#include "../core/Byte.h"
#include "../core/String.h"

struct std_io_FileWriter;

struct std_io_FileWriter *_init_std_io_FileWriter();

void _build_std_io_FileWriter(struct std_io_FileWriter *self, struct std_core_String *path);
void writeByte_std_io_FileWriter(struct std_io_FileWriter *self, struct std_core_Byte *byte);
