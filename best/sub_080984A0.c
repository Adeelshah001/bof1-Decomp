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

s32 sub_08003104();                                 /* extern */

void sub_080984A0(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0xDE) = (u8) (((u32) ((0x03000000 & (sub_08003104() << 0x18)) + 0x01000000) >> 0x18) | M2C_FIELD(arg0, u8 *, 0xDE));
}
