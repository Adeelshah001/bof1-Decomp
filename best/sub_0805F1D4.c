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
M2C_UNK sub_08059978();                             /* extern */
u8 sub_0805B040(s32);                               /* extern */
M2C_UNK sub_0805B308(s32);                          /* extern */
M2C_UNK sub_0805B358(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_0805B404(s32);                          /* extern */
M2C_UNK sub_0805C660();                             /* extern */
M2C_UNK sub_0805C7B8(s32);                          /* extern */
M2C_UNK sub_0806143C();                             /* extern */
M2C_UNK sub_080615F8();                             /* extern */
M2C_UNK sub_080675B8(s32);                          /* extern */
M2C_UNK sub_08068938(s32, s32);                     /* extern */
M2C_UNK sub_08068984(s32, s32, s32, s32, s32);      /* extern */

s32 sub_0805F1D4(void) {
    u16 temp_r1_2;
    u8 temp_r1;

    temp_r1 = sub_0805B040(1);
    if (!(0x80 & temp_r1) && (temp_r1 != *(u8 *)0x030046D2)) {
        *(u8 *)0x030046D2 = temp_r1;
        sub_0806143C();
    }
    temp_r1_2 = M2C_FIELD((void *)0x030016E0, u16 *, 6);
    if (1 & temp_r1_2) {
        M2C_FIELD((void *)0x03004620, s8 *, 3) = 4;
    } else if (2 & temp_r1_2) {
        M2C_FIELD((void *)0x03004620, s8 *, 2) = 0x10;
        M2C_FIELD((void *)0x03004620, s8 *, 3) = 2;
        sub_080379D4(3);
        sub_080675B8(2);
        sub_08068938(2, 8);
        sub_08059978();
        sub_0805B308(0x08100BEE);
        sub_0805C660();
        if (*(u8 *)0x0300169C != 0) {
            sub_080615F8();
        } else {
            sub_0805C7B8(1);
        }
        sub_08068984(2, 1, 1, 0, 0x08100BDB);
        sub_08068984(2, 1, 3, 0, 0x08100BDF);
        sub_08068984(2, 1, 5, 0, 0x08100BE9);
        sub_08068984(2, 1, 7, 0, 0x08100BE4);
        sub_0805B358(0x081007B4, 0, 3, 0, 0);
        sub_0805B404(1);
    }
    return 0;
}
