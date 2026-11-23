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

s32 sub_08098524(void *);                           /* extern */
s32 sub_08098630(void *);                           /* extern */

void sub_08097564(void *arg1) {
    s16 *var_r1;
    s16 var_r0;
    u8 temp_r2;

    if ((sub_08098524(arg1) == 0) && (sub_08098630(arg1) == 0) && !(M2C_FIELD(arg1, u8 *, 0xF1) & 0x40)) {
        if ((u32) (u8) (*(u8 *)0x0202DE82 - 2) <= 2U) {
            M2C_FIELD(arg1, u16 *, 0x106) = 5U;
            var_r1 = arg1 + 0x108;
            var_r0 = 1;
        } else {
            M2C_FIELD(arg1, u16 *, 0x106) = (u16) (M2C_FIELD(arg1, u16 *, 0x106) * 2);
            var_r1 = arg1 + 0x108;
            var_r0 = 0xA;
        }
        *var_r1 = var_r0;
        temp_r2 = M2C_FIELD(arg1, u8 *, 0xF1) | 0x40;
        M2C_FIELD(arg1, u8 *, 0xF1) = temp_r2;
        if (0x20 & temp_r2) {
            M2C_FIELD(arg1, u8 *, 0xF1) = (u8) (temp_r2 & 0xEF);
        }
    }
}
