#include <stdlib.h>
#include "Any.h"
#include "Byte.h"

struct _pimpl_std_core_Byte {
	struct std_core_Any *Any; // supers not owned by self
	int8_t val;
};

struct std_core_Byte {
	struct _pimpl_std_core_Byte *_pimpl;
	void (*_literal)(struct std_core_Byte *self, int8_t val);
	int8_t (*_cval)(struct std_core_Byte *self);
};

void _impl_demolish_std_core_Byte(struct std_core_Any *self) {
	struct std_core_Byte *byteSelf = (struct std_core_Byte *) _get_child_std_core_Any(self);
	free(byteSelf->_pimpl);
	free(byteSelf);
}

void _impl_literal_std_core_Byte(struct std_core_Byte *self, int8_t val) { 
	self->_pimpl->val = val;
}

int8_t _impl_cval_std_core_Byte(struct std_core_Byte *self) {
	return self->_pimpl->val;
}

struct std_core_Byte *_init_std_core_Byte() {
	struct std_core_Byte *ret = (struct std_core_Byte *) malloc(sizeof(struct std_core_Byte));
	ret->_pimpl = (struct _pimpl_std_core_Byte *) malloc(sizeof(struct _pimpl_std_core_Byte));
	ret->_pimpl->Any = _init_std_core_Any();
	_impl_demolish_std_core_Any(ret->_pimpl->Any, &_impl_demolish_std_core_Byte);
	ret->_pimpl->val = 0;
	ret->_literal = &_impl_literal_std_core_Byte;
	ret->_cval = &_impl_cval_std_core_Byte;
	return ret;
}

void _literal_std_core_Byte(struct std_core_Byte *self, int8_t val) {
	self->_literal(self, val);
}

int8_t _cval_std_core_Byte(struct std_core_Byte *self) {
	return self->_cval(self);
}
