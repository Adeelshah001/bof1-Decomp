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

void sub_0802A25C(u16 *arg0, u16 arg1) {
    s32 sp0;
    u16 *sp4;
    u32 sp8;
    s32 spC;
    void *sp10;
    u8 *sp14;
    u16 *temp_r3;
    u16 *temp_r4;
    u16 *temp_r5;
    u16 *var_r5;
    u16 temp_r0;
    u16 temp_r1;
    u16 temp_r2;
    u16 temp_r2_2;
    u16 temp_r6;
    u16 var_r12;
    u16 var_r1;
    u32 var_r9;

    sp0 = (s32) arg1;
    var_r1 = 0;
    sp4 = arg0;
    temp_r0 = *arg0;
    sp8 = (u32) temp_r0;
    *arg0 = 0;
    var_r5 = arg0 + 2;
    var_r9 = 1;
    if ((u32) temp_r0 > 0U) {
        do {
            temp_r6 = M2C_FIELD(var_r5, u16 *, 2);
            temp_r5 = var_r5 + 2 + 4;
            var_r9 = (u32) (((var_r9 + 1) << 0x10) + 0x20000) >> 0x10;
            var_r12 = 0;
            spC = var_r1 + 1;
            if ((u32) (temp_r6 >> 1) > 0U) {
                sp10 = (void *)0x03002430;
                sp14 = (u8 *)0x030040EC;
                do {
                    if ((M2C_FIELD(sp10, u16 *, 2) != 0xE08) && (*sp14 == 0) && (var_r9 < (u32) *(u16 *)0x03004180)) {
                        temp_r3 = &temp_r5[var_r12];
                        if (!(0x2000 & *temp_r3)) {
                            temp_r2 = temp_r3[*(u16 *)0x03004180];
                            if (0x2000 & temp_r2) {
                                temp_r1 = *temp_r3;
                                *temp_r3 = temp_r2;
                                temp_r3[*(u16 *)0x03004180] = temp_r1;
                            }
                        }
                    }
                    temp_r4 = &temp_r5[var_r12];
                    temp_r2_2 = *temp_r4;
                    *temp_r4 = (temp_r2_2 & 0x3FF) | ((u32) ((((u32) (temp_r2_2 & 0x1C00) >> 0xA) + *(u8 *)0x0300418C) << 0x18) >> 0xC) | ((temp_r2_2 >> 0xE) << 0xA);
                    var_r12 += 1;
                    var_r9 = (u32) (u16) (var_r9 + 1);
                } while ((u32) var_r12 < (u32) (temp_r6 >> 1));
            }
            var_r5 = &temp_r5[temp_r6 >> 1];
            var_r1 = (u16) spC;
        } while ((u32) var_r1 < sp8);
    }
    *sp4 = sp0;
}
