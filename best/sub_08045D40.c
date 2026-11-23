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
M2C_UNK sub_0803A8EC(void *);                       /* extern */
extern M2C_UNK sub_08045D80;

void sub_08045D40(void *arg0) {
    if ((sub_08037C98(arg0, 1) << 0x10) == 0) {
        sub_080379D4(0x21);
        M2C_FIELD(arg0, u16 *, 0x46) = (u16) (M2C_FIELD(arg0, u16 *, 0x46) - 1);
        *(s8 *)0x03001850 = 0;
        M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_08045D80;
        return;
    }
    sub_0803A8EC(arg0);
}
