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

M2C_UNK sub_08020E18();                             /* extern */

void sub_08020214(void) {
    s8 temp_r3;
    u8 temp_r0;
    u8 temp_r0_2;

    temp_r0 = *(u8 *)0x0300485C - 1;
    *(u8 *)0x0300485C = temp_r0;
    if ((temp_r0 << 0x18) != 0) {
        sub_08020E18();
        return;
    }
    *(s8 *)0x03000858 = 1;
    *(u8 *)0x0300485C = 8;
    temp_r0_2 = *(u8 *)0x0300485D - 1;
    *(u8 *)0x0300485D = temp_r0_2;
    temp_r3 = (s8) temp_r0_2;
    if (temp_r3 != 0) {
        M2C_FIELD((void *)0x02020FC0, s8 *, 0) = 0xFF;
        M2C_FIELD((void *)0x02020FC0, s8 *, 1) = 0x7F;
        M2C_FIELD((void *)0x020211C0, s8 *, 0) = -1;
        M2C_FIELD((void *)0x020211C0, s8 *, 1) = 0x7F;
        return;
    }
    *(u8 *)0x0300485B += 1;
    *(s16 *)0x03004114 = (s16) temp_r3;
}
