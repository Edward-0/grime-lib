#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "core.h"

struct _pimpl_std_core_Bool {
	bool val;
};

struct std_core_Bool {
	struct _pimpl_std_core_Bool *_pimpl;
	void (*_demolish)(struct std_core_Bool *self);
	void (*_literal)(struct std_core_Bool *self, int8_t val);
	int8_t (*_cval)(struct std_core_Bool *self);
	struct std_core_Bool *(*nott)(struct std_core_Bool *self);
	struct std_core_Bool *(*orr)(struct std_core_Bool *self, struct std_core_Bool *rhs);
	struct std_core_Bool *(*andd)(struct std_core_Bool *self, struct std_core_Bool *rhs);
	struct std_core_Bool *(*xorr)(struct std_core_Bool *self, struct std_core_Bool *rhs);
};

void _impl_demolish_std_core_Bool(struct std_core_Bool *self) {
	free(self->_pimpl);
	free(self);
}

void _impl_literal_std_core_Bool(struct std_core_Bool *self, int8_t val) {
	self->_pimpl->val = val;
}

int8_t _impl_cval_std_core_Bool(struct std_core_Bool *self) {
	return self->_pimpl->val;
}

struct std_core_Bool *_impl_not_std_core_Bool(struct std_core_Bool *self) { 
	int8_t selfCVal = _cval_std_core_Bool(self)(self);
	
	struct std_core_Bool *ret = _init_std_core_Bool();
	_literal_std_core_Bool(ret)(ret, !selfCVal);
	return ret;
}

struct std_core_Bool *_impl_or_std_core_Bool(struct std_core_Bool *self, struct std_core_Bool *rhs) { 
	int8_t selfCVal = _cval_std_core_Bool(self)(self);
	int8_t rhsCVal = _cval_std_core_Bool(rhs)(rhs);

	struct std_core_Bool *ret = _init_std_core_Bool();
	_literal_std_core_Bool(ret)(ret, selfCVal || rhsCVal);
	return ret;
}

struct std_core_Bool *_impl_and_std_core_Bool(struct std_core_Bool *self, struct std_core_Bool *rhs) { 
	int8_t selfCVal = _cval_std_core_Bool(self)(self);
	int8_t rhsCVal = _cval_std_core_Bool(rhs)(rhs);

	struct std_core_Bool *ret = _init_std_core_Bool();
	_literal_std_core_Bool(ret)(ret, selfCVal && rhsCVal);
	return ret;
}

struct std_core_Bool *_impl_xor_std_core_Bool(struct std_core_Bool *self, struct std_core_Bool *rhs) { 
	int8_t selfCVal = _cval_std_core_Bool(self)(self);
	int8_t rhsCVal = _cval_std_core_Bool(rhs)(rhs);

	struct std_core_Bool *ret = _init_std_core_Bool();
	_literal_std_core_Bool(ret)(ret, !selfCVal != !rhsCVal);
	return ret;
}

struct std_core_Bool *_init_std_core_Bool() {
	struct std_core_Bool *ret = (struct std_core_Bool *) malloc(sizeof(struct std_core_Bool));
	ret->_pimpl = (struct _pimpl_std_core_Bool *) malloc(sizeof(struct _pimpl_std_core_Bool));
	ret->_demolish = &_impl_demolish_std_core_Bool;
	ret->nott = &_impl_not_std_core_Bool;
	ret->orr = &_impl_or_std_core_Bool;
	ret->andd = &_impl_and_std_core_Bool;
	ret->xorr = &_impl_xor_std_core_Bool;
	return ret;
}

void (*_demolish_std_core_Bool(struct std_core_Bool *self))(struct std_core_Bool *self) {
	return self->_demolish;
}

void (*_literal_std_core_Bool(struct std_core_Bool *self))(struct std_core_Bool *self, int8_t val) {
	return self->_literal;
}

int8_t (*_cval_std_core_Bool(struct std_core_Bool *self))(struct std_core_Bool *self) {
	return self->_cval;
}

struct std_core_Bool *(*not_std_core_Bool(struct std_core_Bool *self))(struct std_core_Bool *self) {
	return self->nott;
}

struct _pimpl_std_core_Int {
	int val;
};

struct std_core_Int {
	struct _pimpl_std_core_Int *_pimpl;
	void (*_demolish)(struct std_core_Int *self);
	void (*_literal)(struct std_core_Int *self, int32_t val);
	int32_t (*_cval)(struct std_core_Int *self);
};

void _impl_demolish_std_core_Int(struct std_core_Int *self) {
	free(self->_pimpl);
	free(self);
}

void _impl_literal_std_core_Int(struct std_core_Int *self, int32_t val) {
	self->_pimpl->val = val;
}

int32_t _impl_cval_std_core_Int(struct std_core_Int *self) {
	return self->_pimpl->val; 
}

struct std_core_Int *_init_std_core_Int() {
	struct std_core_Int *self = (struct std_core_Int *) malloc(sizeof(struct std_core_Int));
	self->_pimpl = (struct _pimpl_std_core_Int *) malloc(sizeof(struct _pimpl_std_core_Int));
	self->_demolish = &_impl_demolish_std_core_Int;
	self->_literal = &_impl_literal_std_core_Int;
	self->_cval = &_impl_cval_std_core_Int;
	return self;
}

void (*_demolish_std_core_Int(struct std_core_Int *self))(struct std_core_Int *self) {
	return self->_demolish;
}

void (*_literal_std_core_Int(struct std_core_Int *self))(struct std_core_Int *self, int32_t val) {
	return self->_literal;
}

int32_t (*_cval_std_core_Int(struct std_core_Int *self))(struct std_core_Int *self) {
	return self->_cval;
}


struct _pimpl_std_core_Byte {
	int8_t val;
};

struct std_core_Byte {
	struct _pimpl_std_core_Byte *_pimpl;
	void (*_demolish)(struct std_core_Byte *self);
	void (*_literal)(struct std_core_Byte *self, int8_t val);
	int8_t (*_cval)(struct std_core_Byte *self);
};

void _impl_demolish_std_core_Byte(struct std_core_Byte *self) {
	free(self->_pimpl);
	free(self);
}

void _impl_literal_std_core_Byte(struct std_core_Byte *self, int8_t val) {
	self->_pimpl->val = val;
}

int8_t _impl_cval_std_core_Byte(struct std_core_Byte *self) {
	return self->_pimpl->val;
}

struct std_core_Byte *_init_std_core_Byte() {
	struct std_core_Byte *self = (struct std_core_Byte *) malloc(sizeof(struct std_core_Byte));
	self->_pimpl = (struct _pimpl_std_core_Byte *) malloc(sizeof(struct _pimpl_std_core_Byte));
	self->_demolish = &_impl_demolish_std_core_Byte;
	self->_literal = &_impl_literal_std_core_Byte;
	self->_cval = &_impl_cval_std_core_Byte;
	return self;
}

void (*_demolish_std_core_Byte(struct std_core_Byte *self))(struct std_core_Byte *self) {
	return self->_demolish;
}

void (*_literal_std_core_Byte(struct std_core_Byte *self))(struct std_core_Byte *self, int8_t val) {
	return self->_literal;
}

int8_t (*_cval_std_core_Byte(struct std_core_Byte *self))(struct std_core_Byte *self) {
	return self->_cval;
}




struct _pimpl_std_core_Char {
	char val;
};

struct std_core_Char {
	struct _pimpl_std_core_Char *_pimpl;
	void (*_demolish)(struct std_core_Char *self);
	void (*_literal)(struct std_core_Char *self, char val);
	char (*_cval)(struct std_core_Char *self);
};

void _impl_demolish_std_core_Char(struct std_core_Char *self) {
	free(self->_pimpl);
	free(self);
}

void _impl_literal_std_core_Char(struct std_core_Char *self, char val) {
	self->_pimpl->val = val;
}

char _impl_cval_std_core_Char(struct std_core_Char *self) {
	return self->_pimpl->val;
}

struct std_core_Char *_init_std_core_Char() {
	struct std_core_Char *self = (struct std_core_Char *) malloc(sizeof(struct std_core_Char));
	self->_pimpl = (struct _pimpl_std_core_Char *) malloc(sizeof(struct _pimpl_std_core_Char));
	self->_demolish = &_impl_demolish_std_core_Char;
	self->_literal = &_impl_literal_std_core_Char;
	self->_cval = &_impl_cval_std_core_Char;
	return self;
}

void (*_demolish_std_core_Char(struct std_core_Char *self))(struct std_core_Char *self) {
	return self->_demolish;
}

void (*_literal_std_core_Char(struct std_core_Char *self))(struct std_core_Char *self, char val) {
	return self->_literal;
}

char (*_cval_std_core_Char(struct std_core_Char *self))(struct std_core_Char *self) {
	return self->_cval;
}

struct _pimpl_std_core_String {
	char const *val;
};

struct std_core_String {
	struct _pimpl_std_core_String *_pimpl;
	void (*_demolish)(struct std_core_String *self);
	void (*_literal)(struct std_core_String *self, char const *val);
	char const *(*_cval)(struct std_core_String *self);
	struct std_core_Char *(*charAt)(struct std_core_String *self, struct std_core_Int *);
};

void _impl_demolish_std_core_String(struct std_core_String *self) {
	free((void *) self->_pimpl->val);
	free(self->_pimpl);
	free(self);
}

void _impl_literal_std_core_String(struct std_core_String *self, char const *val) {
	self->_pimpl->val = val;
}

char const *_impl_cval_std_core_String(struct std_core_String *self) {
	return self->_pimpl->val;
}

struct std_core_Char *impl_charAt_std_core_String(struct std_core_String *self, struct std_core_Int *index) {
	struct std_core_Char *ret = _init_std_core_Char();
	_literal_std_core_Char(ret)(ret, self->_cval(self)[_cval_std_core_Int(index)(index)]);
	return ret;
}

struct std_core_String *_init_std_core_String() {
	struct std_core_String *self = (struct std_core_String *) malloc(sizeof(struct std_core_String));
	self->_pimpl = (struct _pimpl_std_core_String *) malloc(sizeof(struct _pimpl_std_core_String));
	self->_demolish = &_impl_demolish_std_core_String;
	self->_literal = &_impl_literal_std_core_String;
	self->_cval = &_impl_cval_std_core_String;
	self->charAt = &impl_charAt_std_core_String;
	return self;
}

void (*_demolish_std_core_String(struct std_core_String *self))(struct std_core_String *self) {
	return self->_demolish;
}

void (*_literal_std_core_String(struct std_core_String *self))(struct std_core_String *self, char const *val) {
	return self->_literal;
}

char const *(*_cval_std_core_String(struct std_core_String *self))(struct std_core_String *self) {
	return self->_cval;
}

struct std_core_Char *(*charAt_std_core_String(struct std_core_String *self))(struct std_core_String *self, struct std_core_Int *index) {
	return self->charAt;
}
