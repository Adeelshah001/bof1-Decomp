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

M2C_UNK sub_080379D4(s32);                          /* extern */
M2C_UNK sub_08091DB8();                             /* extern */

void sub_08095D80(void *arg0) {
    sub_08091DB8();
    if ((u32) M2C_FIELD(arg0, u8 *, 2) < (u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), u8 *, 2)) {
        M2C_FIELD(arg0, u8 *, 0x4D) = (u8) (M2C_FIELD(arg0, u8 *, 0x4D) + 1);
        M2C_FIELD((arg0 + 0x4D), s8 *, 7) = 0x3C;
        sub_080379D4(0x28);
    }
}
