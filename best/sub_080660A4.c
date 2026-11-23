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

u8 sub_08056CDC(u8, s32, s8 *, u16);                /* extern */
s32 sub_08064DF4(u8, s8 *, u16 *, void *);          /* extern */
M2C_UNK sub_080987FC(u8, u16 *, s32);               /* extern */

u8 sub_080660A4(s8 *arg0) {
    s32 sp0;
    u16 sp4;
    u8 temp_r6;

    temp_r6 = *(u8 *)0x030046D4 + *(u8 *)0x030046D2;
    if ((sub_08064DF4(temp_r6, arg0, &sp4, &sp0 + 6) << 0x18) == 0) {
        *arg0 = 0xFF;
        return 1U;
    }
    sub_080987FC(temp_r6, &sp4, (*(u8 *)0x030046E4 * 0x124) + 0x03002AB0);
    sp0 = 0;
    return sub_08056CDC(temp_r6, (*(u8 *)0x030046E5 * 0x124) + 0x03002AB0, arg0, sp4);
}
