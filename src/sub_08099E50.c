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

M2C_UNK sub_0809A0E4(void *);                       /* extern */

void sub_08099E50(void *arg0) {
    u8 var_r0;

    M2C_FIELD(arg0, s8 *, 0x4C) = 4;
    var_r0 = M2C_FIELD(arg0, u8 *, 0x7D);
    if (var_r0 != 0) {
        var_r0 = (u8) ((u32) ((var_r0 << 0x19) + 0xFF000000) >> 0x18);
    }
    M2C_FIELD(arg0, s16 *, 0x38) = (s16) (var_r0 << 5);
    sub_0809A0E4(arg0);
}
