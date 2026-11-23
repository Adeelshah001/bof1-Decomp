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

M2C_UNK sub_080017EC(s32);                          /* extern */
s32 sub_08005024(s32, s32);                         /* extern */
M2C_UNK sub_08037FC4(s32, s32);                     /* extern */

void sub_08023F20(s16 arg0, s16 arg1) {
    *(s16 *)0x03004120 = arg0;
    *(s16 *)0x03004100 = arg1;
    if ((sub_08005024(0x5F8, 0xB45C) << 0x18) == 0) {
        sub_080017EC(3);
        sub_08037FC4(0x03002510, 2);
    }
}
