#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "../core/String.h"
#include "io.h"

void std_io_println(struct std_core_String *val) {
	printf("%s\n", _cval_std_core_String(val));
}
