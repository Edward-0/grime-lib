#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "core.h"

struct _pimpl_std_core_Int {
	int val;
};

void _impl_demolish_std_core_Int(struct std_core_Int *this) {
	free(this->_pimpl);
}

void _impl_literal_std_core_Int(struct std_core_Int *this, int32_t val) {
	this->_pimpl->val = val;
}

int32_t _impl_cval_std_core_Int(struct std_core_Int *this) {
	return this->_pimpl->val;
}

struct std_core_Int *_init_std_core_Int() {
	struct std_core_Int *this = malloc(sizeof(struct std_core_Int));
	this->_pimpl = malloc(sizeof(struct _pimpl_std_core_Int));
	this->_demolish = &_impl_demolish_std_core_Int;
	this->_literal = &_impl_literal_std_core_Int;
	this->_cval = &_impl_cval_std_core_Int;
	return this;
}

void (*_demolish_std_core_Int(struct std_core_Int *this))(struct std_core_Int *this) {
	return this->_demolish;
}

void (*_literal_std_core_Int(struct std_core_Int *this))(struct std_core_Int *this, int32_t val) {
	return this->_literal;
}

int32_t (*_cval_std_core_Int(struct std_core_Int *this))(struct std_core_Int *this) {
	return this->_cval;
}

struct _pimpl_std_core_String {
	char const *val;
};

void _impl_demolish_std_core_String(struct std_core_String *this) {
	free(this->_pimpl);
}

void _impl_literal_std_core_String(struct std_core_String *this, char const *val) {
	this->_pimpl->val = val;
}

char const* _impl_cval_std_core_String(struct std_core_String *this) {
	return this->_pimpl->val;
}

struct std_core_String *_init_std_core_String() {
	struct std_core_String *this = malloc(sizeof(struct std_core_String));
	this->_pimpl = malloc(sizeof(struct _pimpl_std_core_String));
	this->_demolish = &_impl_demolish_std_core_String;
	this->_literal = &_impl_literal_std_core_String;
	this->_cval = &_impl_cval_std_core_String;
	this->_literal(this, "test");
	return this;
}

void (*_demolish_std_core_String(struct std_core_String *this))(struct std_core_String *this) {
	return this->_demolish;
}

void (*_literal_std_core_String(struct std_core_String *this))(struct std_core_String *this, char const *val) {
	return this->_literal;
}

char const *(*_cval_std_core_String(struct std_core_String *this))(struct std_core_String *this) {
	return this->_cval;
}
