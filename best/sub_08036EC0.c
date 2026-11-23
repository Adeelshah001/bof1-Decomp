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

M2C_UNK sub_08001F80(s32, M2C_UNK *, s32);          /* extern */
M2C_UNK sub_0800312C(s32, s32);                     /* extern */
s32 sub_0802C0D0(s32, u16);                         /* extern */
extern M2C_UNK sub_08028400;

s32 sub_08036EC0(void) {
    s32 var_r0;
    u16 temp_r1;

    if (!(2 & *(u8 *)0x0202DE88)) {
        if (*(u8 *)0x03002AEC == 1) {
            temp_r1 = M2C_FIELD((void *)0x03002AB0, u16 *, 6);
            if (temp_r1 == 0x54C) {
                if (M2C_FIELD((void *)0x03002AB0, u16 *, 2) != 0xAE8) {
                    var_r0 = 0xA88;
                    goto block_5;
                }
                goto block_11;
            }
            if (temp_r1 == 0x62C) {
                var_r0 = 0xEF8;
block_5:
                if (M2C_FIELD((void *)0x03002AB0, u16 *, 2) == var_r0) {
                    goto block_11;
                }
                goto block_9;
            }
            goto block_9;
        }
block_9:
        if ((sub_0802C0D0(*(s32 *)0x0300458C, *(u16 *)0x03002484) << 0x18) != 0) {
            *(s8 *)0x030033D8 = 0;
            sub_0800312C(0x10, 0);
            sub_08001F80(1, &sub_08028400, 0x030023E0);
            return 1;
        }
        goto block_11;
    }
block_11:
    return 0;
}
