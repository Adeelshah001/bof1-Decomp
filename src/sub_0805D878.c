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
M2C_UNK sub_0805B414();
M2C_UNK sub_0805D0D4(s32, s32, s32, s32, s32, s32);
inline s32 inline_fn(u16 arg0)
{
  return (s32) arg0;
}

void sub_0805D878(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
  sub_0805D0D4(1, arg0, arg1, arg2, arg3, inline_fn((u16) arg4));
  sub_0805B414();
}

