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

M2C_UNK sub_08059978();                             /* extern */

void sub_080591F8(void) {
    s32 sp0;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r3;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r5;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;

    M2C_FIELD((void *)0x03000AE0, s16 *, 2) = 0;
    M2C_FIELD((void *)0x03000AE0, s16 *, 0) = 0xFFFF;
    M2C_FIELD((void *)0x03000AE0, s32 *, 4) = 0x080FF990;
    M2C_FIELD((void *)0x03000AE0, s32 *, 0x18) = 0x1C;
    M2C_FIELD((void *)0x03000AE0, s32 *, 0x1C) = 0;
    M2C_FIELD((void *)0x03000AE0, s32 *, 0x20) = 0;
    M2C_FIELD((void *)0x03000AE0, s32 *, 0x24) = 0;
    *(s16 *)0x05000302 = 0x7FFF;
    M2C_FIELD((void *)0x05000304, s16 *, 0) = 0x41CE;
    temp_r1 = (void *)0x05000304 + 2;
    M2C_FIELD((void *)0x05000304, s16 *, 2) = 0x6C02;
    temp_r1_2 = temp_r1 + 2;
    M2C_FIELD(temp_r1, s16 *, 2) = 0x109F;
    temp_r1_3 = temp_r1_2 + 2;
    M2C_FIELD(temp_r1_2, s16 *, 2) = 0x12;
    M2C_FIELD((void *)0x05000314, s16 *, 0) = 0;
    M2C_FIELD((void *)0x05000314, s16 *, 2) = 0x7FFF;
    M2C_FIELD(temp_r1_3, s16 *, 0xE) = 0x6F60;
    M2C_FIELD((temp_r1_3 + 0xE), s16 *, 2) = 0x421;
    M2C_FIELD((void *)0x0500031C, s16 *, 0) = 0;
    M2C_FIELD((void *)0x0500031C, s16 *, 2) = 0x7FFF;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = (s32 *)0x080FFE84;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06010200;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = (s32 *)0x080FFEC4;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06010320;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = (s32 *)0x080FFF24;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06011E00;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = (s32 *)0x080FFF64;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06011F20;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
    var_r4 = 0x06010220;
    var_r2 = 7;
    do {
        M2C_FIELD((void *)0x040000D4, s32 **, 0) = (s32 *)0x080FFEA4;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = var_r4;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
        M2C_FIELD((void *)0x040000D4, s32 **, 0) = (s32 *)0x080FFF44;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (var_r4 + 0x1C00);
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
        var_r4 += 0x20;
        var_r2 -= 1;
    } while (var_r2 >= 0);
    var_r2_2 = 1;
    var_r5 = 0x06010620;
    var_r4_2 = 0x06010720;
    var_r3 = 0x06010600;
    do {
        M2C_FIELD((void *)0x040000D4, s32 **, 0) = (s32 *)0x080FFEE4;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = var_r3;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
        M2C_FIELD((void *)0x040000D4, s32 **, 0) = (s32 *)0x080FFF04;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = var_r4_2;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
        sp0 = 0x33333333;
        M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp0;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = var_r5;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000040;
        var_r5 += 0x400;
        var_r4_2 += 0x400;
        var_r3 += 0x400;
        var_r2_2 += 1;
    } while (var_r2_2 <= 6);
    sub_08059978();
}
