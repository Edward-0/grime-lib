#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "core.h"

struct _pimpl_std_core_Int {
	int val;
};

struct std_core_Int {
	struct _pimpl_std_core_Int *_pimpl;
	void (*_demolish)(struct std_core_Int *this);
	void (*_literal)(struct std_core_Int *this, int32_t val);
	int32_t (*_cval)(struct std_core_Int *this);
};

void _impl_demolish_std_core_Int(struct std_core_Int *this) {
	free(this->_pimpl);
	free(this);
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

struct _pimpl_std_core_Char {
	char val;
};

struct std_core_Char {
	struct _pimpl_std_core_Char *_pimpl;
	void (*_demolish)(struct std_core_Char *this);
	void (*_literal)(struct std_core_Char *this, char val);
	char (*_cval)(struct std_core_Char *this);
};

void _impl_demolish_std_core_Char(struct std_core_Char *this) {
	free(this->_pimpl);
	free(this);
}

void _impl_literal_std_core_Char(struct std_core_Char *this, char val) {
	this->_pimpl->val = val;
}

char _impl_cval_std_core_Char(struct std_core_Char *this) {
	return this->_pimpl->val;
}

struct std_core_Char *_init_std_core_Char() {
	struct std_core_Char *this = malloc(sizeof(struct std_core_Char));
	this->_pimpl = malloc(sizeof(struct _pimpl_std_core_Char));
	this->_demolish = &_impl_demolish_std_core_Char;
	this->_literal = &_impl_literal_std_core_Char;
	this->_cval = &_impl_cval_std_core_Char;
	return this;
}

void (*_demolish_std_core_Char(struct std_core_Char *this))(struct std_core_Char *this) {
	return this->_demolish;
}

void (*_literal_std_core_Char(struct std_core_Char *this))(struct std_core_Char *this, char val) {
	return this->_literal;
}

char (*_cval_std_core_Char(struct std_core_Char *this))(struct std_core_Char *this) {
	return this->_cval;
}

struct _pimpl_std_core_String {
	char const *val;
};

struct std_core_String {
	struct _pimpl_std_core_String *_pimpl;
	void (*_demolish)(struct std_core_String *this);
	void (*_literal)(struct std_core_String *this, char const *val);
	char const *(*_cval)(struct std_core_String *this);
};

void _impl_demolish_std_core_String(struct std_core_String *this) {
	free((void *) this->_pimpl->val);
	free(this->_pimpl);
	free(this);
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
