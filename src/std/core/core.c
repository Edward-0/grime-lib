#include <stdint.h>
#include <stdlib.h>
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
