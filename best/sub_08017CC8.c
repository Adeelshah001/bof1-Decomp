/* machine draft (m2c) for agbcc -O2 -mthumb-interwork, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 sub_08033420();                                 /* extern */

void sub_08017CC8(void) {
    if ((sub_08033420() << 0x18) != 0) {
        *(u8 *)0x03002B68 &= 0xBF;
        *(s8 *)0x03002B11 = 0;
        *(s8 *)0x03002C35 = 0;
        *(s8 *)0x03002D59 = 0;
        *(s8 *)0x03002E7D = 0;
        *(u8 *)0x0300485D += 1;
        *(s8 *)0x0300485C = 0x20;
        *(u8 *)0x0300485B += 1;
    }
}
