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

s32 sub_08032BF4(void *, M2C_UNK *, void *, M2C_UNK *); /* extern */
M2C_UNK sub_080379D4(s32);                          /* extern */
u16 sub_08037C98(void *, s32);                      /* extern */
M2C_UNK sub_08037FC4(void *, s32);                  /* extern */

void sub_0802DE78(void *arg0) {
    M2C_UNK sp0;
    M2C_UNK sp4;
    u16 temp_r5;

    temp_r5 = sub_08037C98(arg0, 1);
    if (temp_r5 != 0) {
        if (((u32) ((u32) ((M2C_FIELD(arg0, u16 *, 0x1E) - M2C_FIELD(arg0, u16 *, 0x22)) << 0x10) >> 0x11) <= 3U) && (M2C_FIELD(arg0, u16 *, 0x28) != 0)) {
            sub_080379D4(0xB);
        }
    } else {
        if ((sub_08032BF4(arg0, &sp0, &sp0 + 2, &sp4) << 0x18) == 0) {
            sub_08037FC4(arg0, 0x1C);
            M2C_FIELD(arg0, s8 *, 0x50) = 4;
            return;
        }
        M2C_FIELD(arg0, s16 *, 0x4C) = 8;
        M2C_FIELD((arg0 + 0x4C), u16 *, 4) = temp_r5;
    }
}
