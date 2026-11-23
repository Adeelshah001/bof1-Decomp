/* machine draft (m2c) for agbcc -mthumb-interwork -O2, tried by autopilot */
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

M2C_UNK sub_08004EA0(s32);                          /* extern */

void sub_08025D60(void *arg0) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 0x68);
    sub_08004EA0(M2C_FIELD(temp_r1, u8 *, 2) | (M2C_FIELD(temp_r1, u8 *, 3) << 8));
    M2C_FIELD(arg0, void **, 0x68) = (void *) (M2C_FIELD(arg0, void **, 0x68) + 4);
}
