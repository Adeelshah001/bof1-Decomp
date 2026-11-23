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

u8 sub_0802CDC4(void *);                            /* extern */
M2C_UNK sub_08037B84(void *, u8);                   /* extern */
M2C_UNK sub_08037FC4(void *, u8);                   /* extern */
M2C_UNK sub_080A0A68(M2C_UNK *, s32, s32);          /* extern */
M2C_UNK sub_080A0AC8(M2C_UNK *, s32, s32);          /* extern */

void sub_0802CD4C(void *arg0, u8 arg1) {
    M2C_UNK sp0;
    M2C_UNK sp4;
    u8 var_r2;

    sub_080A0AC8(&sp0, 0, 4);
    M2C_FIELD(&sp0, s8 *, 1) = 1;
    sub_080A0A68(&sp4, 0x080A638A, 8);
    var_r2 = sub_0802CDC4(arg0);
    M2C_FIELD(arg0, u8 *, 0x40) = (u8) *(&sp0 + var_r2);
    if (9 & M2C_FIELD((arg0 + 0x40), u8 *, 0x7A)) {
        var_r2 += 4;
    }
    if (arg1 == 0) {
        sub_08037FC4(arg0, *(&sp4 + var_r2));
        return;
    }
    sub_08037B84(arg0, *(&sp4 + var_r2));
}
