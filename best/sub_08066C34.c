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
u8 sub_0805B040(s32);                               /* extern */
M2C_UNK sub_0805B404(s32);                          /* extern */
M2C_UNK sub_080674B8(s32);                          /* extern */
M2C_UNK sub_08068984(s32, s32, s32, s32, s32);      /* extern */
s32 sub_08068B00();                                 /* extern */

s32 sub_08066C34(void) {
    s8 temp_r4;
    u16 temp_r1_2;
    u8 temp_r1;

    temp_r1 = sub_0805B040(1);
    if (!(0x80 & temp_r1) && (*(u8 *)0x030046D2 != temp_r1)) {
        *(u8 *)0x030046D2 = temp_r1;
        sub_080674B8(0);
        if ((u32) *(u8 *)0x030046D2 < (u32) *(u16 *)0x0202E06A) {
            sub_08068984(0, 1, 0, 0, 0x0814BE71);
        }
    }
    temp_r1_2 = M2C_FIELD((void *)0x030016E0, u16 *, 6);
    temp_r4 = 1 & temp_r1_2;
    if (temp_r4 != 0) {
        M2C_FIELD((void *)0x03004620, s8 *, 7) = 0;
        M2C_FIELD((void *)0x03004620, s8 *, 2) = 0x2C;
        M2C_FIELD((void *)0x03004620, s8 *, 3) = 0;
        goto block_10;
    }
    if (!(2 & temp_r1_2)) {
        if (4 & temp_r1_2) {
            sub_080379D4(0x15);
            return sub_08068B00();
        }
        goto block_10;
    }
    sub_080379D4(3);
    M2C_FIELD((void *)0x03004620, s8 *, 7) = temp_r4;
    M2C_FIELD((void *)0x03004620, s8 *, 2) = 6;
    sub_0805B404(1);
block_10:
    return 0;
}
