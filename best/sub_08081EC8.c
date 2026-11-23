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

M2C_UNK sub_08080A04(void *);                       /* extern */
M2C_UNK sub_08080DB0(void *);                       /* extern */

void sub_08081EC8(void *arg0, void *arg1) {
    if (((u16) M2C_FIELD(arg1, u16 *, 0xF4) >> 8) == 0xFF) {
        M2C_FIELD(arg0, s16 *, 0x40) = 0;
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x48) == 0) {
        sub_08080A04(arg0);
        return;
    }
    sub_08080DB0(arg0);
}
