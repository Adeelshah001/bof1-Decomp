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

M2C_UNK sub_0803238C(M2C_UNK *, void *);            /* extern */
s32 sub_08036188(void *, void **, u16, u16);        /* extern */

s32 sub_08030494(void *arg0) {
    M2C_UNK sp0;
    void *sp4;
    u16 temp_r1;

    M2C_FIELD(&sp0, u16 *, 0) = (u16) M2C_FIELD(arg0, u16 *, 2);
    M2C_FIELD(&sp0, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 6);
    sub_0803238C(&sp0, &sp0 + 2);
    if (((sub_08036188(arg0, &sp4, M2C_FIELD(&sp0, u16 *, 0), M2C_FIELD(&sp0, u16 *, 2)) << 0x18) != 0) && (M2C_FIELD(arg0, u8 *, 0x3F) == 0x10) && ((temp_r1 = M2C_FIELD(sp4, u16 *, 0x2A), (temp_r1 == 0xCC)) || ((temp_r1 == 0x126) && (M2C_FIELD(sp4, u8 *, 0x5C) != 0x3F))) && ((0xF & M2C_FIELD(sp4, u8 *, 0x3C)) == 3)) {
        return 1;
    }
    return 0;
}
