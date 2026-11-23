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

M2C_UNK sub_0800312C(s32, s32);                     /* extern */
M2C_UNK sub_08020EE0(s16);                          /* extern */

void sub_08020E84(void) {
    s16 temp_r0;

    temp_r0 = (M2C_FIELD((void *)0x02020FC0, u8 *, 0) | (M2C_FIELD((void *)0x02020FC0, u8 *, 1) << 8)) + 0x14A5;
    *(s16 *)0x0300413C = temp_r0;
    if ((u32) (temp_r0 << 0x10) <= 0x7FFE0000U) {
        sub_08020EE0(*(s16 *)0x0300413C);
        return;
    }
    *(u8 *)0x0300485B += 1;
    sub_0800312C(0x10, 6);
    sub_08020EE0(0x7FFF);
}
