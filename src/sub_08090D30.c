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

M2C_UNK sub_08038278();                             /* extern */
M2C_UNK sub_0803EE6C(s32);                          /* extern */
M2C_UNK sub_08090D24(void *);                       /* extern */

void sub_08090D30(void *arg0) {
    sub_08038278();
    if ((u32) M2C_FIELD(arg0, u16 *, 6) <= 0x2EEFU) {
        sub_0803EE6C(M2C_FIELD(arg0, s32 *, 0x74));
        M2C_FIELD(arg0, s8 *, 0x4D) = 6;
    }
    sub_08090D24(arg0);
}
