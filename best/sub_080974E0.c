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

s32 sub_08037980(u16, s32);                         /* extern */
s32 sub_080984C8(void *);                           /* extern */
s32 sub_080985A4(void *);                           /* extern */
M2C_UNK sub_08098688(u16);                          /* extern */

void sub_080974E0(void *arg1) {
    u16 temp_r2;
    u16 var_r2;
    u32 var_r1;
    u32 var_r2_2;

    if ((sub_080984C8(arg1) == 0) && (sub_080985A4(arg1) == 0)) {
        var_r1 = 0;
        var_r2 = M2C_FIELD(arg1, u16 *, 0xFA);
        if (var_r2 != 0) {
            if ((u32) var_r2 > 0x12CU) {
                var_r2 = 0x12C;
            }
            var_r2_2 = (u32) (sub_08037980(var_r2, 0x1A) << 8) >> 0x10;
            if (var_r2_2 == 0) {
                var_r2_2 = 1;
            }
            if (var_r2_2 > 0x1DU) {
                var_r2_2 = 0x1E;
            }
            var_r1 = var_r2_2;
            temp_r2 = M2C_FIELD(arg1, u16 *, 0xFA);
            if (temp_r2 == 0xFFFF) {
                sub_08098688((u16) var_r1);
                return;
            }
            var_r2 = temp_r2 - var_r1;
            if (0x8000 & var_r2) {
                var_r2 = 0;
            }
            goto block_13;
        }
block_13:
        M2C_FIELD(arg1, u16 *, 0xFA) = var_r2;
        sub_08098688((u16) var_r1);
    }
}
