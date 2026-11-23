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

M2C_UNK sub_08003528(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_0801396C(s32);                          /* extern */

void sub_080160F4(void *arg0) {
    sub_080547DC((void *)0x03003420, 0);
    sub_080547DC((void *)0x030034A0, 0);
    sub_08003528(0, 0xE0, 0, 0xFF00, 0);
    *(s16 *)0x03000850 = 0x200;
    *(s8 *)0x03000852 = 1;
    sub_0801396C(0x03002AB0);
    sub_0801396C(0x03002BD4);
    sub_0801396C(0x03002CF8);
    sub_0801396C(0x03002E1C);
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + 2);
}
