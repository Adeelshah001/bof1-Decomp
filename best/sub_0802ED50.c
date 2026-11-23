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

M2C_UNK sub_0800764C(s32);                          /* extern */
M2C_UNK sub_080379D4(s32);                          /* extern */
s32 sub_08037C98(void *, s32);                      /* extern */
M2C_UNK sub_0805561C(u8);                           /* extern */

void sub_0802ED50(void *arg0) {
    u16 temp_r1;
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    if ((temp_r0 << 0x18) == 0) {
        sub_0800764C(4);
        sub_080379D4(8);
    }
    if (((sub_08037C98(arg0, 1) << 0x10) == 0) && ((M2C_FIELD(arg0, s8 *, 0x50) = 4, temp_r1 = *(u16 *)0x030026EA, (temp_r1 == 0xCC)) || (temp_r1 == 0x126)) && ((0xF & *(u8 *)0x030026FC) == 3)) {
        sub_0805561C(*(u8 *)0x0300271C);
    }
}
