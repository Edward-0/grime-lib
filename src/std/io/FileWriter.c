#include <stdlib.h>
#include <stdio.h>
#include "../core/Any.h"
#include "../core/Byte.h"
#include "../core/Int.h"
#include "FileWriter.h"

struct _pimpl_std_io_FileWriter {
	struct std_core_Any *Any;
	FILE *file;	
};

struct std_io_FileWriter {
	struct _pimpl_std_io_FileWriter *_pimpl;
	void (*_demolish)(struct std_io_FileWriter *self);
	void (*_build)(struct std_io_FileWriter *self, struct std_core_String *path);
	void (*writeByte)(struct std_io_FileWriter *self, struct std_core_Byte *byte);
};

void _impl_demolish_std_io_FileWriter(struct std_core_Any *self) {
	struct std_io_FileWriter *fileWriterSelf = (struct std_io_FileWriter *) _get_child_std_core_Any(self);
	fclose(fileWriterSelf->_pimpl->file);
	free(fileWriterSelf->_pimpl);
	free(self);	
}

void _impl_build_std_io_FileWriter(struct std_io_FileWriter *self, struct std_core_String *path) {
	self->_pimpl->file = fopen(_cval_std_core_String(path), "w");
}

void impl_writeByte_std_io_FileWriter(struct std_io_FileWriter *self, struct std_core_Byte *byte) {
	int8_t cByte = _cval_std_core_Byte(byte);
	fwrite(&cByte, sizeof(int8_t), 1, self->_pimpl->file);
}

struct std_io_FileWriter *_init_std_io_FileWriter() {
	struct std_io_FileWriter *ret = (struct std_io_FileWriter *) malloc(sizeof(struct std_io_FileWriter));
	ret->_pimpl = (struct _pimpl_std_io_FileWriter *) malloc(sizeof(struct _pimpl_std_io_FileWriter));
	ret->_pimpl->Any = _init_std_core_Any();
	_impl_demolish_std_core_Any(ret->_pimpl->Any, &_impl_demolish_std_io_FileWriter);
	ret->_build = &_impl_build_std_io_FileWriter;
	ret->writeByte = &impl_writeByte_std_io_FileWriter;
	return ret;
}

void _build_std_io_FileWriter(struct std_io_FileWriter *self, struct std_core_String *path) {
	self->_build(self, path);
}

void writeByte_std_io_FileWriter(struct std_io_FileWriter *self, struct std_core_Byte *value) {
	self->writeByte(self, value);
}
