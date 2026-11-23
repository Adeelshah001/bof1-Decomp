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

M2C_UNK sub_0807F768();                             /* extern */
s32 sub_080844A8(void *);                           /* extern */

void sub_08073EA0(void *arg0) {
    sub_0807F768();
    M2C_FIELD(arg0, s8 *, 0x41) = 0;
    if ((*(s32 *)0x03000F98 == 0) && (M2C_FIELD(arg0, u8 *, 0) != 0x42) && (sub_080844A8(arg0) == 0)) {
        M2C_FIELD(arg0, s8 *, 0x41) = 1;
    }
}
