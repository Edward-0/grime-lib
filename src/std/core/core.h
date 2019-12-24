#pragma once

struct std_core_Byte;

struct std_core_Byte *_init_std_core_Byte();

void (*_demolish_std_core_Byte(struct std_core_Byte *this))(struct std_core_Byte *this);
void (*_literal_std_core_Byte(struct std_core_Byte *this))(struct std_core_Byte *this, int8_t val);
int8_t (*_cval_std_core_Byte(struct std_core_Byte *this))(struct std_core_Byte *this);



struct std_core_UByte;

struct std_core_UByte *_init_std_core_UByte();

void (*_demolish_std_core_UByte(struct std_core_UByte *this))(struct std_core_UByte *this);
void (*_literal_std_core_UByte(struct std_core_UByte *this))(struct std_core_UByte *this, uint8_t val);
uint8_t (*_cval_std_core_UByte(struct std_core_UByte *this))(struct std_core_UByte *this);



struct std_core_Short;

struct std_core_Short *_init_std_core_Short();

void (*_demolish_std_core_Short(struct std_core_Short *this))(struct std_core_Short *this);
void (*_literal_std_core_Short(struct std_core_Short *this))(struct std_core_Short *this, int16_t val);
int16_t (*_cval_std_core_Short(struct std_core_Short *this))(struct std_core_Short *this);



struct std_core_UShort;

struct std_core_UShort *_init_std_core_UShort();

void (*_demolish_std_core_UShort(struct std_core_UShort *this))(struct std_core_UShort *this);
void (*_literal_std_core_UShort(struct std_core_UShort *this))(struct std_core_UShort *this, uint16_t val);
uint16_t (*_cval_std_core_UShort(struct std_core_UShort *this))(struct std_core_UShort *this);



struct std_core_Int;

struct std_core_Int *_init_std_core_Int();

void (*_demolish_std_core_Int(struct std_core_Int *this))(struct std_core_Int *this);
void (*_literal_std_core_Int(struct std_core_Int *this))(struct std_core_Int *this, int32_t val);
int32_t (*_cval_std_core_Int(struct std_core_Int *this))(struct std_core_Int *this);



struct std_core_UInt;

struct std_core_UInt *_init_std_core_UInt();

void (*_demolish_std_core_UInt(struct std_core_UInt *this))(struct std_core_UInt *this);
void (*_literal_std_core_UInt(struct std_core_UInt *this))(struct std_core_UInt *this, uint32_t val);
uint32_t (*_cval_std_core_UInt(struct std_core_UInt *this))(struct std_core_UInt *this);



struct std_core_Long;

struct std_core_Long *_init_std_core_Long();

void (*_demolish_std_core_Long(struct std_core_Long *this))(struct std_core_Long *this);
void (*_literal_std_core_Long(struct std_core_Long *this))(struct std_core_Long *this, int64_t val);
int64_t (*_cval_std_core_Long(struct std_core_Long *this))(struct std_core_Long *this);



struct std_core_ULong;

struct std_core_ULong *_init_std_core_ULong();

void (*_demolish_std_core_ULong(struct std_core_ULong *this))(struct std_core_ULong *this);
void (*_literal_std_core_ULong(struct std_core_ULong *this))(struct std_core_ULong *this, uint64_t val);
uint64_t (*_cval_std_core_ULong(struct std_core_ULong *this))(struct std_core_ULong *this);



struct std_core_Char;

struct std_core_Char *_init_std_core_Char();

void (*_demolish_std_core_Char(struct std_core_Char *this))(struct std_core_Char *this);
void (*_literal_std_core_Char(struct std_core_Char *this))(struct std_core_Char *this, char val);
char (*_cval_std_core_Char(struct std_core_Char *this))(struct std_core_Char *this);



struct std_core_String;

struct std_core_String *_init_std_core_String();

void (*_demolish_std_core_String(struct std_core_String *this))(struct std_core_String *this);
void (*_literal_std_core_String(struct std_core_String *this))(struct std_core_String *this, char const *val);
char const *(*_cval_std_core_String(struct std_core_String *this))(struct std_core_String *this);
