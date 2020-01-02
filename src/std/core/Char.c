#include <stdlib.h>
#include "Any.h"
#include "Char.h"

struct _pimpl_std_core_Char {
	struct std_core_Any *Any; // supers not owned by self
	int32_t val;
};

struct std_core_Char {
	struct _pimpl_std_core_Char *_pimpl;
	void (*_literal)(struct std_core_Char *self, int32_t val);
	int32_t (*_cval)(struct std_core_Char *self);
};

void _impl_demolish_std_core_Char(struct std_core_Any *self) {
	struct std_core_Char *intSelf = (struct std_core_Char *) _get_child_std_core_Any(self);
	free(intSelf->_pimpl);
	free(intSelf);
}

void _impl_literal_std_core_Char(struct std_core_Char *self, int32_t val) { 
	self->_pimpl->val = val;
}

int32_t _impl_cval_std_core_Char(struct std_core_Char *self) {
	return self->_pimpl->val;
}

struct std_core_Char *_init_std_core_Char() {
	struct std_core_Char *ret = (struct std_core_Char *) malloc(sizeof(struct std_core_Char));
	ret->_pimpl = (struct _pimpl_std_core_Char *) malloc(sizeof(struct _pimpl_std_core_Char));
	ret->_pimpl->Any = _init_std_core_Any();
	_impl_demolish_std_core_Any(ret->_pimpl->Any, &_impl_demolish_std_core_Char);
	ret->_pimpl->val = 0;
	ret->_literal = &_impl_literal_std_core_Char;
	ret->_cval = &_impl_cval_std_core_Char;
	return ret;
}

void _literal_std_core_Char(struct std_core_Char *self, int32_t val) {
	self->_literal(self, val);
}

int32_t _cval_std_core_Char(struct std_core_Char *self) {
	return self->_cval(self);
}
