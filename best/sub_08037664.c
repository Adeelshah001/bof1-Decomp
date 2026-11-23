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

M2C_UNK sub_08029730(u16, s8 *, void *, void *);    /* extern */

void sub_08037664(u16 arg0, void *arg1) {
    s32 sp0;
    s8 sp4;
    u16 temp_r0;
    u16 temp_r1;
    u16 var_r5;
    u8 var_r6;

    var_r5 = arg0;
    M2C_FIELD(arg1, u16 *, 0x34) = 0U;
    M2C_FIELD(arg1, u16 *, 0x36) = 0U;
    *(s16 *)0x03004194 = 0;
    var_r6 = 0;
    do {
        sp4 = 0x1F;
        M2C_FIELD(&sp0, s8 *, 5) = 0x1F;
        sp0 = 0;
        sub_08029730(var_r5, &sp4, &sp0 + 5, arg1);
        temp_r1 = M2C_FIELD(arg1, u16 *, 0x34) ^ 4;
        M2C_FIELD(arg1, u16 *, 0x34) = temp_r1;
        if (!(temp_r1 & 4)) {
            temp_r0 = M2C_FIELD(arg1, u16 *, 0x36) ^ 2;
            M2C_FIELD(arg1, u16 *, 0x36) = temp_r0;
            if (!(temp_r0 & 2)) {
                var_r5 += 8;
            }
        }
        var_r6 += 1;
    } while ((u32) var_r6 <= 0x1FU);
}
