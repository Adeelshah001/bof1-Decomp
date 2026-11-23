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

M2C_UNK sub_0803EE6C(void *);                       /* extern */

void sub_0804E994(void *arg0) {
    u16 temp_r0;
    u16 temp_r0_3;
    u16 temp_r0_5;
    u32 temp_r0_2;
    u32 temp_r0_4;
    u32 temp_r0_6;

    if (M2C_FIELD(arg0, u8 *, 0x3E) != 2) {
        *(u16 *)0x03001864 |= 4;
        *(u16 *)0x03001780 &= 0xFB;
    }
    *(s8 *)0x0300178C = 0;
    *(s8 *)0x03003410 = 0;
    temp_r0 = M2C_FIELD(arg0, u16 *, 0xAC);
    M2C_FIELD((void *)0x020211C0, s8 *, 2) = (s8) temp_r0;
    M2C_FIELD((void *)0x02020FC0, s8 *, 2) = (s8) temp_r0;
    temp_r0_2 = (u32) (temp_r0 << 0x10) >> 0x18;
    M2C_FIELD((void *)0x020211C0, s8 *, 3) = (s8) temp_r0_2;
    M2C_FIELD((void *)0x02020FC0, s8 *, 3) = (s8) temp_r0_2;
    temp_r0_3 = M2C_FIELD(arg0, u16 *, 0xAE);
    M2C_FIELD((void *)0x020211C0, s8 *, 4) = (s8) temp_r0_3;
    M2C_FIELD((void *)0x02020FC0, s8 *, 4) = (s8) temp_r0_3;
    temp_r0_4 = (u32) (temp_r0_3 << 0x10) >> 0x18;
    M2C_FIELD((void *)0x020211C0, s8 *, 5) = (s8) temp_r0_4;
    M2C_FIELD((void *)0x02020FC0, s8 *, 5) = (s8) temp_r0_4;
    temp_r0_5 = M2C_FIELD(arg0, u16 *, 0xB0);
    M2C_FIELD((void *)0x020211C0, s8 *, 6) = (s8) temp_r0_5;
    M2C_FIELD((void *)0x02020FC0, s8 *, 6) = (s8) temp_r0_5;
    temp_r0_6 = (u32) (temp_r0_5 << 0x10) >> 0x18;
    M2C_FIELD((void *)0x020211C0, s8 *, 7) = (s8) temp_r0_6;
    M2C_FIELD((void *)0x02020FC0, s8 *, 7) = (s8) temp_r0_6;
    if (M2C_FIELD(arg0, u8 *, 0x3E) == 0) {
        *(u8 *)0x0300485B += 1;
    } else {
        *(u8 *)0x0300485C |= 0xFF;
    }
    sub_0803EE6C(arg0);
}
