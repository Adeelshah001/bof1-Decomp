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

M2C_UNK sub_0809DD88(M2C_UNK);                      /* extern */
M2C_UNK sub_0809DDFC(M2C_UNK);                      /* extern */

s32 sub_0809DC90(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r2_2;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r1;
    s32 var_r2;
    u8 temp_r0;
    u8 temp_r2;
    u8 temp_r3;
    u8 temp_r4;

    temp_r5 = M2C_FIELD((void *)0x04000128, s32 *, 0);
    temp_r0 = M2C_FIELD((void *)0x030050A0, u8 *, 1);
    switch (temp_r0) {                              /* irregular */
    case 0:
        if (!(temp_r5 & 0x30)) {
            temp_r4 = temp_r5 & 0x88;
            if (temp_r4 == 8) {
                temp_r2 = temp_r5 & 4;
                if ((temp_r2 == 0) && (M2C_FIELD((void *)0x030050A0, s32 *, 0x14) == -1)) {
                    *(s16 *)0x04000208 = (s16) temp_r2;
                    *(u16 *)0x04000200 &= 0xFF7F;
                    *(u16 *)0x04000200 |= 0x40;
                    *(s16 *)0x04000208 = 1;
                    M2C_FIELD((void *)0x04000128, u8 *, 1) = (u8) (-0x41 & M2C_FIELD((void *)0x04000128, u8 *, 1));
                    *(s16 *)0x04000202 = 0xC0;
                    *(s32 *)0x0400010C = 0xB1FC;
                    M2C_FIELD((void *)0x030050A0, u8 *, 0) = temp_r4;
                }
                goto block_8;
            }
        } else {
block_8:
            M2C_FIELD((void *)0x030050A0, u8 *, 1) = 1U;
        case 1:
            sub_0809DDFC(arg1);
            sub_0809DD88(arg0);
        }
        break;
    }
    M2C_FIELD((void *)0x030050A0, u8 *, 0xB) = (u8) (M2C_FIELD((void *)0x030050A0, u8 *, 0xB) + 1);
    temp_r3 = M2C_FIELD((void *)0x030050A0, u8 *, 3);
    temp_r2_2 = M2C_FIELD((void *)0x030050A0, u8 *, 2) << 8;
    if (M2C_FIELD((void *)0x030050A0, u8 *, 0) == 8) {
        var_r0 = 0x80 | temp_r2_2 | temp_r3;
    } else {
        var_r0 = temp_r3 | temp_r2_2;
    }
    var_r2 = var_r0;
    if (M2C_FIELD((void *)0x030050A0, u8 *, 9) != 0) {
        var_r2 |= 0x1000;
    }
    var_r1 = var_r2;
    if ((u32) ((u32) (temp_r5 << 0x1A) >> 0x1E) > 1U) {
        var_r1 |= 0x2000;
    }
    return var_r1;
}
