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

s32 sub_08001770(s32);                              /* extern */
M2C_UNK sub_080017EC(s32);                          /* extern */
s32 sub_08005024(s32, s32);                         /* extern */
M2C_UNK sub_080379D4(s32);                          /* extern */
M2C_UNK sub_0803ADA8(s32);                          /* extern */
s32 sub_0805CF40(s32, M2C_UNK *);                   /* extern */

s32 sub_08023CD8(void *arg0, s16 arg1, s16 arg2) {
    M2C_UNK sp0;
    s32 *var_r1;
    s32 var_r0;

    *(s16 *)0x03004120 = arg1;
    *(s16 *)0x03004100 = arg2;
    if (((sub_08005024(0x1D38, 0xE77C) << 0x18) == 0) || ((sub_08005024(0x1D48, 0xE77C) << 0x18) == 0)) {
        *(s8 *)0x0300486F = 0x23;
        *(s8 *)0x03004870 = 0;
        if (((sub_0805CF40(0x16C, &sp0) << 0x18) != 0) || ((sub_08001770(0xB2) << 0x18) != 0)) {
            var_r1 = arg0 + 0x94;
            var_r0 = 0x80D2;
        } else {
            sub_0803ADA8(0x18);
            M2C_FIELD(arg0, u8 *, 0xB8) = (u8) (M2C_FIELD(arg0, u8 *, 0xB8) | 4);
            sub_080017EC(0xB2);
            sub_080379D4(0x17);
            var_r1 = arg0 + 0x94;
            var_r0 = 0x81BA;
        }
        *var_r1 = var_r0;
    }
    return 0;
}
