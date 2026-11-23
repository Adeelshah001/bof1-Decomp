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

u8 sub_08036890();                                  /* extern */

u8 sub_08036E0C(void *arg0) {
    u8 var_r0;

    var_r0 = sub_08036890();
    if (var_r0 != 0) {
        *(u8 *)0x03001850 = M2C_FIELD(arg0, u8 *, 0x5C);
        var_r0 = 1;
    }
    return var_r0;
}
