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

M2C_UNK sub_0805B568(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_08067CD4(s32, u8, s32);                 /* extern */
M2C_UNK sub_080689B0(u8, u8, s32, u8);              /* extern */

void sub_0805F2E0(s32 arg0) {
    s32 sp4;
    s32 var_r6;
    u8 *var_r7;
    u8 temp_r4;
    void *var_r5;
    void *var_r8;

    if (*(u8 *)0x0300169C == 0) {
        var_r6 = 0;
        if (!(0x40 & *(u8 *)0x03002BA0)) {
            var_r7 = (u8 *)0x03002BA0;
            var_r5 = (void *)0x08100DC4;
            var_r8 = (void *)0x03002AEA;
loop_3:
            if (M2C_FIELD(var_r8, u8 *, 0) != 0) {
                temp_r4 = M2C_FIELD(var_r8, u8 *, 2);
                if (arg0 == 0) {
                    sub_08067CD4(var_r6, temp_r4, 0);
                }
                sp4 = 0;
                M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp4;
                M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) ((var_r6 << 5) + 0x06017E00);
                M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000008;
                sub_0805B568(M2C_FIELD(var_r5, u8 *, 0) + 4, M2C_FIELD(var_r5, u8 *, 1) + 4, 0, 0, var_r6 + 0x3F0);
                sub_080689B0(M2C_FIELD(var_r5, u8 *, 0), M2C_FIELD(var_r5, u8 *, 1), var_r6, temp_r4);
                var_r7 += 0x124;
                var_r5 += 2;
                var_r8 += 0x124;
                var_r6 += 1;
                if ((var_r6 <= 7) && !(0x40 & *var_r7)) {
                    goto loop_3;
                }
            }
        }
    }
}
