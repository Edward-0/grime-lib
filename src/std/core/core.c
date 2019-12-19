#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "core.h"

struct _pimpl_std_core_Int {
	int val;
};

void _demolish_std_core_Int(struct std_core_Int *this) {
	free(this->_pimpl);
}

void _literal_std_core_Int(struct std_core_Int *this, int32_t val) {
	this->_pimpl->val = val;
}

int32_t _cval_std_core_Int(struct std_core_Int *this) {
	return this->_pimpl->val;
}

void _init_std_core_Int(struct std_core_Int *this) {
	this->_pimpl = malloc(sizeof(struct _pimpl_std_core_Int));
	this->_demolish = &_demolish_std_core_Int;
	this->_literal = &_literal_std_core_Int;
	this->_cval = &_cval_std_core_Int;
}

struct _pimpl_std_core_String {
	char const *val;
};

void _demolish_std_core_String(struct std_core_String *this) {
	free(this->_pimpl);
}

void _literal_std_core_String(struct std_core_String *this, char const *val) {
	this->_pimpl->val = val;
}

char const* _cval_std_core_String(struct std_core_String *this) {
	return this->_pimpl->val;
}

void _init_std_core_String(struct std_core_String *this) {
	this->_pimpl = calloc(1, sizeof(struct _pimpl_std_core_String));
	this->_demolish = &_demolish_std_core_String;
	this->_literal = &_literal_std_core_String;
	this->_cval = &_cval_std_core_String;
	this->_literal(this, "test");
}
