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

M2C_UNK sub_080379D4(s32);                          /* extern */
s32 sub_08037C98(void *, s32);                      /* extern */
M2C_UNK sub_08037FC4(void *, s32);                  /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */
M2C_UNK sub_0803A974(void *);                       /* extern */
M2C_UNK sub_0803EE6C(void *);                       /* extern */

void sub_0804F588(void *arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 0x54);
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, u16 *, 0x54) = (u16) (temp_r0 - 1);
        sub_08037C98(arg0, 0);
        sub_0803A8EC(arg0);
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0xC9) != 0) {
        M2C_FIELD(arg0, u8 *, 0x41) = 8U;
        M2C_FIELD(arg0, s8 *, 0x3D) = 2;
        M2C_FIELD(arg0, s16 *, 0x1C) = 0x170;
        M2C_FIELD(arg0, s16 *, 0x2A) = 0xA2;
        sub_08037FC4(arg0, 0);
        sub_080379D4(0x1F);
        M2C_FIELD(arg0, u8 *, 0xC9) = 0U;
    }
    M2C_FIELD(arg0, u8 *, 0x41) = (u8) (0x30 | M2C_FIELD(arg0, u8 *, 0x41));
    if ((sub_08037C98(arg0, 1) << 0x10) != 0) {
        sub_0803A974(arg0);
        return;
    }
    sub_0803EE6C(arg0);
}
