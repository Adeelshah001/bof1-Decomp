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

M2C_UNK sub_08037C98(void *, s32);                  /* extern */
M2C_UNK sub_0803828C(void *, void *, u16, u8);      /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */
M2C_UNK sub_0803EE6C(void *);                       /* extern */

void sub_08049DE4(void *arg0) {
    u8 temp_r1;

    temp_r1 = *(u8 *)0x03003F9C;
    if (0x80 & temp_r1) {
        if (0x7F & temp_r1) {
            sub_0803EE6C(arg0);
            return;
        }
        if (M2C_FIELD(arg0, u16 *, 6) != 0x7906) {
            sub_0803828C(arg0, arg0 + 4, M2C_FIELD(arg0, u16 *, 0x38), M2C_FIELD(arg0, u8 *, 0x61));
        }
        goto block_5;
    }
block_5:
    sub_08037C98(arg0, 0);
    sub_0803A8EC(arg0);
}
