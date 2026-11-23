#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
M2C_UNK sub_0806BDE0(u16, M2C_UNK, M2C_UNK, s32, s32);
volatile int sub_0805D82C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, u16 arg3)
{
  sub_0806BDE0(arg3, arg1, arg2, arg0 + 0xE8, 8);
}

