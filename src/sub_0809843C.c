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

M2C_UNK sub_080983E4(void *);                       /* extern */
M2C_UNK sub_08098408(s32, void *, u16);             /* extern */

void sub_0809843C(s32 arg0, void *arg1, u16 arg2) {
    u8 temp_r1;

    temp_r1 = M2C_FIELD(arg1, u8 *, 0xF1);
    if (!(0x80 & temp_r1)) {
        M2C_FIELD(arg1, u8 *, 0xF1) = (u8) (temp_r1 & 0x8F);
        sub_080983E4(arg1);
        sub_08098408(arg0, arg1, arg2);
    }
}
