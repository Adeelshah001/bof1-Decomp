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

s32 sub_08052BE0(void *, u16 *);                    /* extern */

s32 sub_08052B2C(void *arg0) {
    u16 sp0;
    s32 sp4;
    s32 temp_r1_2;
    s32 var_r0;
    u8 temp_r0;
    u8 temp_r0_2;
    void *temp_r1;

    temp_r1 = arg0 + 0x54;
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    var_r0 = temp_r0 << 0x18;
    if (var_r0 == 0) {
        M2C_FIELD(arg0, u8 *, 0x54) = 2U;
        temp_r0_2 = M2C_FIELD(temp_r1, u8 *, 1) - 1;
        M2C_FIELD(temp_r1, u8 *, 1) = temp_r0_2;
        if ((temp_r0_2 << 0x18) == 0) {
            M2C_FIELD(temp_r1, u8 *, 1) = 0x20U;
            if (((sub_08052BE0(arg0, &sp0) << 0x10) == 0) || (M2C_FIELD(arg0, u16 *, 6) == 0)) {
                M2C_FIELD(arg0, s16 *, 0x12) = (s16) (sp0 + 1);
            }
            M2C_FIELD(arg0, u16 *, 6) = (u16) ((M2C_FIELD(arg0, u16 *, 6) + M2C_FIELD(arg0, u16 *, 0x16)) & 0x1F);
        }
        *(u16 *)0x030016C0 += 1;
        temp_r1_2 = (((u32) (0x1FF & *(u16 *)0x030016C0) >> 3) << 6) & 0x7FF;
        sp4 = 0;
        M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp4;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (temp_r1_2 + 0x06000000);
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000010;
        sp4 = 0;
        M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp4;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (temp_r1_2 + 0x02019FC0);
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000010;
        var_r0 = M2C_FIELD((void *)0x040000D4, s32 *, 8);
    }
    return var_r0;
}
