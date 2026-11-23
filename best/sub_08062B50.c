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
M2C_UNK sub_08059D68(s32);                          /* extern */
M2C_UNK sub_0805B15C();                             /* extern */
M2C_UNK sub_0805B284();                             /* extern */
M2C_UNK sub_0805B3F4(s32);                          /* extern */
M2C_UNK sub_0805B428(s32, s32, s32, s32);           /* extern */
M2C_UNK sub_0805B568(s32, s32, s32, s32);           /* extern */
s32 sub_0805D910(u8, void *);                       /* extern */
M2C_UNK sub_08066EC8();                             /* extern */
M2C_UNK sub_08068938(s32, s32);                     /* extern */
s32 sub_08068ECC(s32);                              /* extern */
M2C_UNK sub_0806B028(s32, u16);                     /* extern */
M2C_UNK sub_080A0A68(u16 *, s32, s32);              /* extern */

s32 sub_08062B50(s32 arg0) {
    s32 sp0;
    u16 sp4;
    s16 sp14;
    s32 temp_r0;
    s32 var_r5;
    s32 var_r6;
    u16 *var_r4;

    sub_080A0A68(&sp4, 0x080A67E4, 0x10);
    M2C_FIELD((void *)0x03004760, u8 *, 0x17) = (u8) M2C_FIELD((void *)0x03004620, u8 *, 3);
    temp_r0 = sub_08068ECC(arg0);
    if (temp_r0 < 0) {
        sub_080379D4(3);
    } else {
        sub_080379D4(2);
    }
    sub_08066EC8();
    if ((0xFF & temp_r0) != 0xFF) {
        sub_08068938(4, 0x12);
        sp14 = 0x140;
        M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp14;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x0201AB00;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000120;
        sub_0805B428(0x30, 0x58, 0xF0, 0x98);
        sub_0805B15C();
        *(s8 *)0x0300457C = 0;
        var_r5 = 0;
        var_r4 = &sp4;
        var_r6 = 0;
        do {
            if (!(2 & var_r5)) {
                sub_0806B028(var_r6 + 0x03002AB0, *var_r4);
            }
            var_r4 += 2;
            var_r6 += 0x124;
            var_r5 += 1;
        } while (var_r5 <= 7);
        sp0 = 0x1CC;
        sub_0805B568(0x8008, 0x4078, 1, 0);
        sub_0805B284();
        sub_08059978();
        sub_08059D68((0xFF & temp_r0) + 0x700);
        M2C_FIELD((void *)0x03004620, s8 *, 7) = 0;
        M2C_FIELD((void *)0x03004620, u8 *, 3) = 0xEU;
    } else if ((sub_0805D910(*(u8 *)0x030046D6, &sp0 + 0x16) << 0x18) != 0) {
        M2C_FIELD((void *)0x03004620, s8 *, 2) = 8;
        M2C_FIELD((void *)0x03004620, u8 *, 3) = 0U;
        M2C_FIELD((void *)0x03004620, s8 *, 7) = 0;
    } else {
        sub_0805B3F4(2);
    }
    return 0;
}
