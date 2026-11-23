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

M2C_UNK sub_0809A3EC(void *);                       /* extern */

void sub_0809A3B8(void *arg0) {
    u16 *temp_r1;
    u8 temp_r0;

    temp_r0 = ((u16) M2C_FIELD(arg0, u16 *, 0x44) >> 8) - 1;
    M2C_FIELD(arg0, u16 *, 0x44) = (u16) (temp_r0 << 8);
    M2C_FIELD(arg0, u8 *, 0x61) = temp_r0;
    temp_r1 = (arg0 + 0x61) - 0x19;
    *temp_r1 = (((u16) *temp_r1 >> 8) + 1) << 8;
    sub_0809A3EC(arg0);
}
