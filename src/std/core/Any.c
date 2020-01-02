#include "Any.h"
#include "stdlib.h"

struct _pimpl_std_core_Any {
	unsigned int refCount;
	void *child;
};

struct std_core_Any {
	struct _pimpl_std_core_Any *_pimpl;
	void (*_demolish)(struct std_core_Any *self);
};

struct std_core_Any *_init_std_core_Any() {
	struct std_core_Any *ret = (struct std_core_Any *) malloc(sizeof(struct std_core_Any));
	ret->_pimpl = (struct _pimpl_std_core_Any *) malloc(sizeof(struct _pimpl_std_core_Any));
	ret->_pimpl->refCount = 0;
	ret->_pimpl->child = NULL;
	ret->_demolish = NULL;
	return ret;
}

void _set_child_std_core_Any(struct std_core_Any *self, void *child) {
	self->_pimpl->child = child;
}

void *_get_child_std_core_Any(struct std_core_Any *self) {
	return self->_pimpl->child;
}

void _impl_demolish_std_core_Any(struct std_core_Any *self, void (*_demolish)(struct std_core_Any *self)) {
	self->_demolish = _demolish;
}

void _demolish_std_core_Any(struct std_core_Any *self) {
	if (self->_pimpl->refCount == 0) {
		self->_demolish(self);
		free(self->_pimpl);
		free(self);
	}
}
