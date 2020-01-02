#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "../core/core.h"
#include "io.h"

void std_io_println(struct std_core_String *val) {
	printf("%s\n", _cval_std_core_String(val)(val));
}

struct _pimpl_std_io_FileWriter {
	FILE *file;	
};

struct std_io_FileWriter {
	struct _pimpl_std_io_FileWriter *_pimpl;
	void (*_demolish)(struct std_io_FileWriter *self);
	void (*_build)(struct std_io_FileWriter *self, struct std_core_String *path);
	void (*writeByte)(struct std_io_FileWriter *self, struct std_core_Byte *byte);
};

void _impl_demolish_std_io_FileWriter(struct std_io_FileWriter *self) {
	fclose(self->_pimpl->file);
	free(self->_pimpl);
	free(self);	
}

void _impl_build_std_io_FileWriter(struct std_io_FileWriter *self, struct std_core_String *path) {
	self->_pimpl->file = fopen(_cval_std_core_String(path)(path), "w");
}

void impl_writeByte_std_io_FileWriter(struct std_io_FileWriter *self, struct std_core_Byte *byte) {
	int8_t cByte = _cval_std_core_Byte(byte)(byte);
	fwrite(&cByte, sizeof(int8_t), 1, self->_pimpl->file);
}

struct std_io_FileWriter *_init_std_io_FileWriter() {
	struct std_io_FileWriter *ret = (struct std_io_FileWriter *) malloc(sizeof(struct std_io_FileWriter));
	ret->_pimpl = (struct _pimpl_std_io_FileWriter *) malloc(sizeof(struct std_io_FileWriter));
	ret->_demolish = &_impl_demolish_std_io_FileWriter;
	ret->_build = &_impl_build_std_io_FileWriter;
	ret->writeByte = &impl_writeByte_std_io_FileWriter;
	return ret;
}

void (*_demolish_std_io_FileWriter(struct std_io_FileWriter *self))(struct std_io_FileWriter *self) {
	return self->_demolish;
}

void (*_build_std_io_FileWriter(struct std_io_FileWriter *self))(struct std_io_FileWriter *self, struct std_core_String *path) {
	return self->_build;
}

void (*writeByte_std_io_FileWriter(struct std_io_FileWriter *self))(struct std_io_FileWriter *self, struct std_core_Byte *path) {
	return self->writeByte;
}
