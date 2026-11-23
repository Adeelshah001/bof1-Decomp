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

s32 sub_0807B2BC();                                 /* extern */
M2C_UNK sub_0807C600(void *, s32);                  /* extern */
M2C_UNK sub_08088F34(void *);                       /* extern */

void sub_08088F80(void *arg0) {
    u16 temp_r0;

    if ((sub_0807B2BC() << 0x10) == 0) {
        M2C_FIELD(arg0, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 0xE4);
        temp_r0 = M2C_FIELD(arg0, u16 *, 0xE6);
        M2C_FIELD(arg0, u16 *, 6) = temp_r0;
        M2C_FIELD(arg0, u16 *, 0x2C) = temp_r0;
        sub_0807C600(arg0, 0);
        sub_08088F34(arg0);
    }
}
