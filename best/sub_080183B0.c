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

M2C_UNK sub_0800312C(s32, s32);                     /* extern */
M2C_UNK sub_08019C4C();                             /* extern */
M2C_UNK sub_0802FD60(s32);                          /* extern */
s32 sub_08038458(s32);                              /* extern */

void sub_080183B0(void) {
    if (*(s8 *)0x0300485B != 0) {
        sub_08019C4C();
        return;
    }
    if ((sub_08038458(1) << 0x18) != 0) {
        *(s8 *)0x03002B04 = 1;
        *(s8 *)0x03002C28 = 1;
        *(s8 *)0x03002D4C = 1;
        *(s8 *)0x03002E70 = 1;
        sub_0802FD60(0x90);
        sub_0800312C(0x10, 0x1C);
        *(s8 *)0x0300485C = 0x48;
        *(s8 *)0x0300485B = (u8) *(s8 *)0x0300485B + 1;
    }
}
