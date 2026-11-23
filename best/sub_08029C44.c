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

s32 sub_08029A9C(M2C_UNK *, u16 *, u8 *, void *);   /* extern */
u8 sub_08029B84(u8, void *, u16 *, void *);         /* extern */
M2C_UNK sub_0802A52C(u8, u8, u16, u16);             /* extern */

void sub_08029C44(void) {
    M2C_UNK sp0;
    u16 sp2;
    u8 sp4;
    u16 sp8;
    s32 temp_r0;
    u8 temp_r0_2;
    u8 temp_r6;

    M2C_FIELD(&sp0, u8 *, 5) = 0U;
    sp4 = 0;
    if (*(u8 *)0x03002B75 == 0) {
        temp_r0 = sub_08029A9C(&sp0, &sp2, &sp4, &sp0 + 5) << 0x18;
        temp_r6 = *(u8 *)0x03002B75;
        *(u8 *)0x03002B75 = M2C_FIELD(&sp0, u8 *, 5);
        if (temp_r0 != 0) {
            sub_0802A52C(temp_r6, sp4, M2C_FIELD(&sp0, u16 *, 0), sp2);
        }
    } else {
        temp_r0_2 = sub_08029B84(*(u8 *)0x03002B75, &sp0 + 6, &sp8, &sp0 + 0xA);
        if (temp_r0_2 != 0) {
            sub_0802A52C(0U, M2C_FIELD(&sp0, u8 *, 0xA), M2C_FIELD(&sp0, u16 *, 6), sp8);
            return;
        }
        *(u8 *)0x03002B75 = temp_r0_2;
    }
}
