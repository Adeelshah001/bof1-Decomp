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

s32 sub_08027980(M2C_UNK, s32, s32 *);              /* extern */
u8 sub_080280FC(s32, s32);                          /* extern */

s16 sub_08026CDC(M2C_UNK arg0) {
    s32 sp0;
    u8 var_r4;

    var_r4 = 0;
    if ((sub_08027980(arg0, 0x080F8820, &sp0) << 0x18) != 0) {
        var_r4 = sub_080280FC(sp0, 0x080F8952);
    }
    *(s16 *)0x03004114 = (s16) var_r4;
    return (s16) var_r4;
}
