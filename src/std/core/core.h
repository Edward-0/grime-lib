#pragma once

struct std_core_Bool;

struct std_core_Bool *_init_std_core_Bool();

void (*_demolish_std_core_Bool(struct std_core_Bool *self))(struct std_core_Bool *self);
void (*_literal_std_core_Bool(struct std_core_Bool *self))(struct std_core_Bool *self, int8_t val);
int8_t (*_cval_std_core_Bool(struct std_core_Bool *self))(struct std_core_Bool *self);
struct std_core_Bool *(*not_std_core_Bool(struct std_core_Bool *self))(struct std_core_Bool *self);
struct std_core_Bool *(*and_std_core_Bool(struct std_core_Bool *self))(struct std_core_Bool *self, struct std_core_Bool *rhs);
struct std_core_Bool *(*or_std_core_Bool(struct std_core_Bool *self))(struct std_core_Bool *self, struct std_core_Bool *rhs);
struct std_core_Bool *(*xor_std_core_Bool(struct std_core_Bool *self))(struct std_core_Bool *self, struct std_core_Bool *rhs);

struct std_core_Byte;

struct std_core_Byte *_init_std_core_Byte();

void (*_demolish_std_core_Byte(struct std_core_Byte *self))(struct std_core_Byte *self);
void (*_literal_std_core_Byte(struct std_core_Byte *self))(struct std_core_Byte *self, int8_t val);
int8_t (*_cval_std_core_Byte(struct std_core_Byte *self))(struct std_core_Byte *self);



struct std_core_UByte;

struct std_core_UByte *_init_std_core_UByte();

void (*_demolish_std_core_UByte(struct std_core_UByte *self))(struct std_core_UByte *self);
void (*_literal_std_core_UByte(struct std_core_UByte *self))(struct std_core_UByte *self, uint8_t val);
uint8_t (*_cval_std_core_UByte(struct std_core_UByte *self))(struct std_core_UByte *self);



struct std_core_Short;

struct std_core_Short *_init_std_core_Short();

void (*_demolish_std_core_Short(struct std_core_Short *self))(struct std_core_Short *self);
void (*_literal_std_core_Short(struct std_core_Short *self))(struct std_core_Short *self, int16_t val);
int16_t (*_cval_std_core_Short(struct std_core_Short *self))(struct std_core_Short *self);



struct std_core_UShort;

struct std_core_UShort *_init_std_core_UShort();

void (*_demolish_std_core_UShort(struct std_core_UShort *self))(struct std_core_UShort *self);
void (*_literal_std_core_UShort(struct std_core_UShort *self))(struct std_core_UShort *self, uint16_t val);
uint16_t (*_cval_std_core_UShort(struct std_core_UShort *self))(struct std_core_UShort *self);



struct std_core_Int;

struct std_core_Int *_init_std_core_Int();

void (*_demolish_std_core_Int(struct std_core_Int *self))(struct std_core_Int *self);
void (*_literal_std_core_Int(struct std_core_Int *self))(struct std_core_Int *self, int32_t val);
int32_t (*_cval_std_core_Int(struct std_core_Int *self))(struct std_core_Int *self);



struct std_core_UInt;

struct std_core_UInt *_init_std_core_UInt();

void (*_demolish_std_core_UInt(struct std_core_UInt *self))(struct std_core_UInt *self);
void (*_literal_std_core_UInt(struct std_core_UInt *self))(struct std_core_UInt *self, uint32_t val);
uint32_t (*_cval_std_core_UInt(struct std_core_UInt *self))(struct std_core_UInt *self);



struct std_core_Long;

struct std_core_Long *_init_std_core_Long();

void (*_demolish_std_core_Long(struct std_core_Long *self))(struct std_core_Long *self);
void (*_literal_std_core_Long(struct std_core_Long *self))(struct std_core_Long *self, int64_t val);
int64_t (*_cval_std_core_Long(struct std_core_Long *self))(struct std_core_Long *self);



struct std_core_ULong;

struct std_core_ULong *_init_std_core_ULong();

void (*_demolish_std_core_ULong(struct std_core_ULong *self))(struct std_core_ULong *self);
void (*_literal_std_core_ULong(struct std_core_ULong *self))(struct std_core_ULong *self, uint64_t val);
uint64_t (*_cval_std_core_ULong(struct std_core_ULong *self))(struct std_core_ULong *self);



struct std_core_Char;

struct std_core_Char *_init_std_core_Char();

void (*_demolish_std_core_Char(struct std_core_Char *self))(struct std_core_Char *self);
void (*_literal_std_core_Char(struct std_core_Char *self))(struct std_core_Char *self, char val);
char (*_cval_std_core_Char(struct std_core_Char *self))(struct std_core_Char *self);

// Possible U Types

struct std_core_String;

struct std_core_String *_init_std_core_String();

void (*_demolish_std_core_String(struct std_core_String *self))(struct std_core_String *self);
void (*_literal_std_core_String(struct std_core_String *self))(struct std_core_String *self, char const *val);
char const *(*_cval_std_core_String(struct std_core_String *self))(struct std_core_String *self);
struct std_core_Char *(*charAt_std_core_String(struct std_core_String *self))(struct std_core_String *self, struct std_core_Int *);



struct _pimpl_std_core_Any;

struct std_core_Any;

struct std_core_Any *_init_std_core_Any(void (*_demolish)(struct std_core_Any *self));
void _override_demolish_std_core_Any(struct std_core_Any *self, void (*_demolish)(struct std_core_Any));
void (*_demolish_std_core_Any(struct std_core_Any *self))(struct std_core_Any *self);

void (*_demolish_std_core_Any(struct std_core_Any *self))(struct std_core_Any *self);

struct CArray {
	unsigned int elementCount;
	struct std_core_Any **elements;
};

struct std_core_ArrayList;

struct std_core_ArrayList *_init_std_core_ArrayList;

void (*_demolish_std_core_ArrayList(struct std_core_String *self))(struct std_core_String *self);
void (*_literal_std_core_ArrayList(struct std_core_ArrayList *self))(struct std_core_ArrayList *self, struct CArray *val);
struct CArray *(*_cval_std_core_ArrayList(struct std_core_ArrayList *self))(struct std_core_ArrayList *self);
struct std_core_Any *(*elementAt_std_core_ArrayList(struct std_core_ArrayList *self))(struct std_core_ArrayList *self, struct std_core_Int *index);
