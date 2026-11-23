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

M2C_UNK sub_080240BC(u8);                           /* extern */
s32 sub_0802BDC0(void *);                           /* extern */
u8 sub_0802C3B0(void *, u8, M2C_UNK *);             /* extern */
M2C_UNK sub_08032644(void *);                       /* extern */
M2C_UNK sub_08037C98(void *, s32);                  /* extern */

void sub_0802D99C(void *arg0) {
    M2C_UNK sp0;
    u16 temp_r0;
    u8 temp_r0_2;

    sub_08037C98(arg0, 0);
    if ((sub_0802BDC0(arg0) << 0x18) != 0) {
        temp_r0 = *(u16 *)0x03002484;
        if (temp_r0 == 0) {
            sub_080240BC((u8) temp_r0);
        }
        temp_r0_2 = sub_0802C3B0(arg0, *(u8 *)0x030040E8, &sp0);
        if ((temp_r0_2 == 0) || (temp_r0_2 == 0xFF)) {
            M2C_FIELD(arg0, s8 *, 0x50) = 6;
        } else if (M2C_FIELD(arg0, u8 *, 0x61) != M2C_FIELD(arg0, u8 *, 0x62)) {
            sub_08032644(arg0);
        }
    }
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (M2C_FIELD(arg0, u16 *, 6) + 0x18);
}
