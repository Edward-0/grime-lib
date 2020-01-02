#include <stdlib.h>
#include "Any.h"
#include "Int.h"

struct _pimpl_std_core_Int {
	struct std_core_Any *Any; // supers not owned by self
	int32_t val;
};

struct std_core_Int {
	struct _pimpl_std_core_Int *_pimpl;
	void (*_literal)(struct std_core_Int *self, int32_t val);
	int32_t (*_cval)(struct std_core_Int *self);
};

void _impl_demolish_std_core_Int(struct std_core_Any *self) {
	struct std_core_Int *intSelf = (struct std_core_Int *) _get_child_std_core_Any(self);
	free(intSelf->_pimpl);
	free(intSelf);
}

void _impl_literal_std_core_Int(struct std_core_Int *self, int32_t val) { 
	self->_pimpl->val = val;
}

int32_t _impl_cval_std_core_Int(struct std_core_Int *self) {
	return self->_pimpl->val;
}

struct std_core_Int *_init_std_core_Int() {
	struct std_core_Int *ret = (struct std_core_Int *) malloc(sizeof(struct std_core_Int));
	ret->_pimpl = (struct _pimpl_std_core_Int *) malloc(sizeof(struct _pimpl_std_core_Int));
	ret->_pimpl->Any = _init_std_core_Any();
	_impl_demolish_std_core_Any(ret->_pimpl->Any, &_impl_demolish_std_core_Int);
	ret->_pimpl->val = 0;
	ret->_literal = &_impl_literal_std_core_Int;
	ret->_cval = &_impl_cval_std_core_Int;
	return ret;
}

void _literal_std_core_Int(struct std_core_Int *self, int32_t val) {
	self->_literal(self, val);
}

int32_t _cval_std_core_Int(struct std_core_Int *self) {
	return self->_cval(self);
}
