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

M2C_UNK sub_0805DBD8(void *, u16);                  /* extern */
M2C_UNK sub_0805DC2C(void *, s32, s32);             /* extern */

void sub_0805DC84(void *arg0) {
    sub_0805DBD8(arg0, M2C_FIELD(arg0, u16 *, 0x114));
    sub_0805DBD8(arg0, M2C_FIELD(arg0, u16 *, 0x116));
    sub_0805DBD8(arg0, M2C_FIELD(arg0, u16 *, 0x118));
    sub_0805DC2C(arg0, 0xA, 0x2186);
}
