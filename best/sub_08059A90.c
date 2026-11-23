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

s32 sub_080A07AC(u8, s32);                          /* extern */
s32 sub_080A0844(u8, s32);                          /* extern */

void sub_08059A90(u8 arg0) {
    s32 *temp_r4;
    s32 *var_r1;
    s32 temp_r1;
    s32 temp_r4_2;
    s32 temp_r7;
    s32 var_r3;
    u8 temp_r0;
    u8 temp_r5;

    temp_r0 = arg0;
    temp_r1 = M2C_FIELD((void *)0x03000AE0, s32 *, 0x18);
    temp_r7 = ((((0xE0 & temp_r0) * 2) + (0x1F & temp_r0)) << 5) + 0x08231668;
    temp_r5 = *(u8 *)0x03000B08;
    temp_r4 = (sub_080A0844(temp_r5, temp_r1) * 4) + M2C_FIELD((void *)0x03000AE0, s32 *, 4);
    temp_r4_2 = *temp_r4 + (sub_080A07AC(temp_r5, temp_r1) << 0xB);
    if (M2C_FIELD((void *)0x03004550, u8 *, 0x1C) != 0) {
        M2C_FIELD((void *)0x040000D4, s32 *, 0) = temp_r7;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x030044C0;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
        M2C_FIELD((void *)0x040000D4, s32 *, 0) = (s32) (temp_r7 + 0x400);
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x030044E0;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
        var_r1 = (s32 *)0x030044C0;
        var_r3 = 0xF;
        do {
            *var_r1 += 0x33333333;
            var_r1 += 4;
            var_r3 -= 1;
        } while (var_r3 >= 0);
        M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x030044C0;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = temp_r4_2;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
        M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x030044E0;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (temp_r4_2 + 0x400);
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
    } else {
        M2C_FIELD((void *)0x040000D4, s32 *, 0) = temp_r7;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = temp_r4_2;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
        M2C_FIELD((void *)0x040000D4, s32 *, 0) = (s32) (temp_r7 + 0x400);
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (temp_r4_2 + 0x400);
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
    }
    *(u8 *)0x03000B08 += 1;
}
