#pragma once
struct _pimpl_std_core_Int;

struct std_core_Int {
	struct _pimpl_std_core_Int *_pimpl;
	void (*_demolish)(struct std_core_Int *this);
	void (*_literal)(struct std_core_Int *this, int32_t val);
	int32_t (*_cval)(struct std_core_Int *this);
};

void _init_std_core_Int(struct std_core_Int *this);

struct _pimpl_std_core_String;

struct std_core_String {
	struct _pimpl_std_core_String *_pimpl;
	void (*_demolish)(struct std_core_String *this);
	void (*_literal)(struct std_core_String *this, char const *val);
	char const *(*_cval)(struct std_core_String *this);
};

void _init_std_core_String(struct std_core_String *this);

