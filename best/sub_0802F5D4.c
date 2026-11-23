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
u8 sub_0802F640(void *);                            /* extern */
M2C_UNK sub_080327A4(void *, M2C_UNK *, void *);    /* extern */

u8 sub_0802F5D4(void *arg0) {
    M2C_UNK sp0;
    u16 sp4;

    sub_080327A4(arg0, &sp0, &sp0 + 2);
    if (((*(u16 *)0x03002484 == 0x154) && ((sub_08001770(0x97) << 0x18) == 0)) || (sub_08038AB4(M2C_FIELD(&sp0, u16 *, 0), M2C_FIELD(&sp0, u16 *, 2), &sp4), ((M2C_ERROR(/* Read from unset register $r0 */) << 0x18) == 0))) {
        return sub_0802F640(arg0);
    }
    M2C_FIELD(arg0, s8 *, 0x4D) = 0x16;
    M2C_FIELD(arg0, s16 *, 0x50) = 0;
    return 1U;
}
