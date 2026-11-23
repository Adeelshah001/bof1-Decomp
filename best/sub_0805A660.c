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

u8 sub_080A07AC(u8, s32);                           /* extern */
s32 sub_080A0844(u8, s32);                          /* extern */

s32 sub_0805A660(void) {
    s32 sp0;
    s32 *temp_r4_2;
    s32 temp_r1;
    s32 temp_r4;
    s32 temp_r6;
    u8 temp_r2;
    u8 temp_r2_2;
    u8 var_r0;

    temp_r4 = M2C_FIELD((void *)0x03000AE0, s32 *, 0x18);
    temp_r2 = sub_080A07AC(*(u8 *)0x03000B08, temp_r4) * temp_r4;
    if (0x80 & *(u8 *)0x03004573) {
        var_r0 = temp_r2 + 0xF;
    } else {
        var_r0 = temp_r2 + 8;
    }
    temp_r2_2 = var_r0;
    temp_r6 = M2C_FIELD((void *)0x03000AE0, s32 *, 0x18);
    temp_r4_2 = (sub_080A0844(temp_r2_2, temp_r6) * 4) + M2C_FIELD((void *)0x03000AE0, s32 *, 4);
    temp_r1 = *temp_r4_2 + (sub_080A07AC(temp_r2_2, temp_r6) << 0xB);
    sp0 = 0;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = temp_r1;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000008;
    sp0 = 0;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (temp_r1 + 0x400);
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000008;
    return M2C_FIELD((void *)0x040000D4, s32 *, 8);
}
