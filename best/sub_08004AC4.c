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

M2C_UNK sub_08000248(s32);                          /* extern */
M2C_UNK sub_080A0210(s32, s32, s32);                /* extern */

void sub_08004AC4(void) {
    s32 temp_r1;
    s32 temp_r1_2;
    u16 var_r4;
    u16 var_r4_2;
    void *temp_r0;
    void *temp_r0_2;

    *(s16 *)0x030016D0 = 0x87;
    *(s16 *)0x03001670 = 0x404;
    *(s8 *)0x030040E4 = 0;
    M2C_FIELD((void *)0x04000028, s32 *, 0) = 0;
    M2C_FIELD((void *)0x04000028, s32 *, 4) = 0;
    temp_r0 = ((void *)0x04000028 + 4) - 0xC;
    M2C_FIELD(temp_r0, s16 *, 0) = 0x100;
    temp_r0_2 = temp_r0 + 2;
    M2C_FIELD(temp_r0, s16 *, 2) = 0;
    M2C_FIELD(temp_r0_2, s16 *, 2) = 0;
    M2C_FIELD((temp_r0_2 + 2), s16 *, 2) = 0x100;
    sub_08000248(1);
    *(u8 *)0x030041A8 &= 0xFE;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x080B181C;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x02020FC0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000080;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x080B181C;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x020211C0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000080;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x080B191C;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x05000100;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000080;
    var_r4 = 0;
    do {
        temp_r1 = var_r4 * 0xF0;
        sub_080A0210(temp_r1 + 0x080B1A1C, temp_r1 + 0x06000000, 0x3C);
        var_r4 += 1;
    } while ((u32) var_r4 <= 0x9FU);
    var_r4_2 = 0;
    do {
        temp_r1_2 = var_r4_2 * 0xF0;
        sub_080A0210(temp_r1_2 + 0x080B1A1C, temp_r1_2 + 0x0600A000, 0x3C);
        var_r4_2 += 1;
    } while ((u32) var_r4_2 <= 0x9FU);
    *(s32 *)0x03001694 &= ~1;
    sub_08000248(1);
    M2C_FIELD((void *)0x030045B0, s32 *, 0x1C) = 0;
    M2C_FIELD((void *)0x030045B0, s32 *, 0x20) = 0;
    M2C_FIELD((void *)0x030045B0, s16 *, 0x14) = 0;
    M2C_FIELD((void *)0x030045B0, s16 *, 0x16) = 0;
    M2C_FIELD((void *)0x030045B0, s16 *, 0x12) = 0x100;
    M2C_FIELD((void *)0x030045B0, s16 *, 0x18) = 0x100;
}
