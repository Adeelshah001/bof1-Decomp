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

s32 sub_08005090(s32, s32);                         /* extern */

s32 sub_08023A94(void *arg0) {
    s8 *var_r2;
    s8 var_r1;

    if (M2C_FIELD(arg0, u8 *, 0x3E) == 0xB) {
        if (((sub_08005090(0x1CB8, 0x44BC) << 0x18) == 0) || ((sub_08005090(0x1CB8, 0x455C) << 0x18) == 0) || ((sub_08005090(0x1C98, 0x431C) << 0x18) == 0)) {
            var_r2 = arg0 + 0x4D;
            var_r1 = 0xE;
            goto block_11;
        }
        if (((sub_08005090(0x1CC8, 0x459C) << 0x18) == 0) || ((sub_08005090(0x1D68, 0x432C) << 0x18) == 0) || ((sub_08005090(0x1BA8, 0x442C) << 0x18) == 0) || ((sub_08005090(0x1AA8, 0x432C) << 0x18) == 0) || ((sub_08005090(0x1C68, 0x422C) << 0x18) == 0)) {
            var_r2 = arg0 + 0x4D;
            var_r1 = 0x10;
block_11:
            *var_r2 = var_r1;
            M2C_FIELD(arg0, s8 *, 0x50) = 0;
            return 1;
        }
        goto block_12;
    }
block_12:
    return 0;
}
