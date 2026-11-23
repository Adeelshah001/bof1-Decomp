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

s32 sub_0802B954(void *arg0, void *arg1) {
    if ((u32) M2C_FIELD((void *)0x03002AB0, u16 *, 6) <= 0xC1FFU) {
        M2C_FIELD(arg1, u16 *, 6) = 0xC1DEU;
        M2C_FIELD(arg1, s16 *, 2) = (s16) (M2C_FIELD(arg0, u16 *, 2) + 0x1000);
    } else {
        M2C_FIELD(arg1, s16 *, 2) = (s16) (M2C_FIELD(arg0, u16 *, 2) + 0x1000);
        M2C_FIELD(arg1, u16 *, 6) = (u16) M2C_FIELD(arg0, u16 *, 6);
    }
    return 0;
}
