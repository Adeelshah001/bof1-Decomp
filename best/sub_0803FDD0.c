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

s32 sub_08001770(s32);                              /* extern */
M2C_UNK sub_0803FC58(void *);                       /* extern */

void sub_0803FDD0(void *arg0) {
    u8 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u8 *, 0x27);
    if ((temp_r1 == 1) && (temp_r1 & *(u8 *)0x030033F0) && (*(u16 *)0x03002484 == 0) && ((sub_08001770(0x2A) << 0x18) != 0) && (((sub_08001770(0x2B) << 0x18) == 0) || (((sub_08001770(0x5C) << 0x18) != 0) && ((sub_08001770(0x59) << 0x18) == 0)))) {
        M2C_FIELD(arg0, u16 *, 0x10) = (u16) (M2C_FIELD(arg0, u16 *, 0x10) + 2);
        *(u8 *)0x030033F0 &= 0xFE;
    }
    sub_0803FC58(arg0);
}
