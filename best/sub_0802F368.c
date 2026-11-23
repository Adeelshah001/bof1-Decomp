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

s32 sub_08004F38(u16, u16, void *);                 /* extern */
s32 sub_08023ED4(void *, u16, u16);                 /* extern */
u8 sub_0802F414(void *);                            /* extern */
u8 sub_0802F498(void *);                            /* extern */
M2C_UNK sub_080327A4(void *, M2C_UNK *, void *);    /* extern */
s32 sub_0803284C(void *);                           /* extern */

u8 sub_0802F368(void *arg0) {
    M2C_UNK sp0;
    u8 var_r0;
    u8 var_r2;
    void *temp_r4;

    var_r2 = 0;
    if ((*(u8 *)0x030023D0 == 0) && !(4 & M2C_FIELD(arg0, u8 *, 0xB8))) {
        if (!(1 & M2C_FIELD((void *)0x030016E0, u16 *, 4))) {
            var_r0 = sub_0802F414(arg0);
            goto block_10;
        }
        temp_r4 = &sp0 + 2;
        sub_080327A4(arg0, &sp0, temp_r4);
        if ((sub_08004F38(M2C_FIELD(&sp0, u16 *, 0), M2C_FIELD(&sp0, u16 *, 2), arg0) << 0x18) == 0) {
            sub_080327A4(arg0, &sp0, temp_r4);
            if ((sub_08023ED4(arg0, M2C_FIELD(&sp0, u16 *, 0), M2C_FIELD(&sp0, u16 *, 2)) << 0x18) == 0) {
                if ((1 & M2C_FIELD((void *)0x030016E0, u16 *, 6)) && ((sub_0803284C(arg0) << 0x18) != 0)) {
                    return 1U;
                }
                var_r0 = sub_0802F498(arg0);
block_10:
                return var_r0;
            }
        }
        var_r2 = 1;
        goto block_12;
    }
block_12:
    return var_r2;
}
