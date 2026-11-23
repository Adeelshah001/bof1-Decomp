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

M2C_UNK sub_08004EA0(s32);                          /* extern */
M2C_UNK sub_0800D2BC();                             /* extern */
s32 sub_08038458(s32);                              /* extern */

void sub_0800EAE8(void *arg0) {
    if ((sub_08038458(1) << 0x18) != 0) {
        sub_08004EA0(0x815B);
        *(s16 *)0x030040F8 = 0xC;
        sub_0800D2BC();
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + 2);
    }
}
