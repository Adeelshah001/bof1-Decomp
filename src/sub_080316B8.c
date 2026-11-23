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

M2C_UNK sub_0802F21C(void *);                       /* extern */
s32 sub_0802F998(void *);                           /* extern */
s32 sub_08036B2C(s32, s32);                         /* extern */

void sub_080316B8(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x4D) = 0;
    M2C_FIELD((arg0 + 0x4D), s8 *, 3) = 0;
    if (((sub_0802F998(arg0) << 0x18) == 0) && ((sub_08036B2C(*(s32 *)0x03004880, *(s32 *)0x0300458C) << 0x18) == 0)) {
        sub_0802F21C(arg0);
    }
}
