#include <stdlib.h>
#include "Any.h"
#include "Int.h"
#include "Char.h"
#include "String.h"

struct _pimpl_std_core_String {
	struct std_core_Any *Any; // supers not owned by self
	char const *val;
};

struct std_core_String {
	struct _pimpl_std_core_String *_pimpl;
	void (*_literal)(struct std_core_String *self, char const *val);
	char const *(*_cval)(struct std_core_String *self);
	struct std_core_Char *(*charAt)(struct std_core_String *self, struct std_core_Int *index);
};

void _impl_demolish_std_core_String(struct std_core_Any *self) {
	struct std_core_String *stringSelf = (struct std_core_String *) _get_child_std_core_Any(self);
	free(stringSelf->_pimpl);
	free(stringSelf);
}

void _impl_literal_std_core_String(struct std_core_String *self, char const *val) { 
	self->_pimpl->val = val;
}

char const *_impl_cval_std_core_String(struct std_core_String *self) {
	return self->_pimpl->val;
}

struct std_core_Char *impl_charAt_std_core_String(struct std_core_String *self, struct std_core_Int *index) {
	struct std_core_Char *ret = _init_std_core_Char();
	int32_t cIndex = _cval_std_core_Int(index);
	_literal_std_core_Char(ret, self->_pimpl->val[cIndex]);
	return ret;
}

struct std_core_String *_init_std_core_String() {
	struct std_core_String *ret = (struct std_core_String *) malloc(sizeof(struct std_core_String));
	ret->_pimpl = (struct _pimpl_std_core_String *) malloc(sizeof(struct _pimpl_std_core_String));
	ret->_pimpl->Any = _init_std_core_Any();
	_impl_demolish_std_core_Any(ret->_pimpl->Any, &_impl_demolish_std_core_String);
	ret->_pimpl->val = NULL;
	ret->_literal = &_impl_literal_std_core_String;
	ret->_cval = &_impl_cval_std_core_String;
	return ret;
}

void _literal_std_core_String(struct std_core_String *self, char const *val) {
	self->_literal(self, val);
}

char const *_cval_std_core_String(struct std_core_String *self) {
	return self->_cval(self);
}

struct std_core_Char *charAt_std_core_String(struct std_core_String *self, struct std_core_Int *index) {
	return self->charAt(self, index);
}
