#include <stdio.h>
#include <stdint.h>
#include "../core/core.h"
#include "io.h"

void std_io_println(struct std_core_String *val) {
	printf("%s\n", _cval_std_core_String(val)(val));
}

void std_io_printPtr(void *val) {
	printf("* %d\n", (int) val);
}
