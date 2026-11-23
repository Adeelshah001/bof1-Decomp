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

M2C_UNK sub_0805B15C();                             /* extern */
M2C_UNK sub_0805B568(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_0805D8CC(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_080674B8(s32);                          /* extern */

void sub_08067F30(void) {
    s16 sp4;
    s32 var_r4;

    sub_080674B8(2);
    sp4 = 0x140;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp4;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x0201AB00;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000120;
    *(u8 *)0x0300460A = 0;
    if (*(u8 *)0x030046D4 != 0) {
        *(u8 *)0x0300460A = 1;
    }
    if ((u32) *(u8 *)0x030046D4 <= 0x6FU) {
        *(u8 *)0x0300460A |= 2;
    }
    sub_0805B15C();
    var_r4 = 0;
    do {
        sub_0805D8CC(2, (0xB * (1 & var_r4)) + 2, 1 | var_r4, 0, (s32) (u16) ((*(u8 *)0x030046D4 + var_r4) | 0x100));
        var_r4 += 1;
    } while (var_r4 <= 0xF);
    sub_0805B568(0x8008, 0x4038, 0, 0, 0x1C0);
    sub_0805B568(0x8008, 0x4068, 1, 0, 0x1C4);
    sub_0805B568(0x8008, 0x4078, 1, 0, 0x1C8);
}
