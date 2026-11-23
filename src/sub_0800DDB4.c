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
M2C_UNK sub_0800D1D0();
inline s8 *inline_fn(void *arg0)
{
  return (s8 *) arg0;
}

void sub_0800DDB4(void)
{
  if ((7 & (*((u16 *) (inline_fn((void *) 0x03004830) + 0x10)))) == 7)
  {
    *((u16 *) (inline_fn((void *) 0x03003420) + 2)) = (u16) ((*((u16 *) (inline_fn((void *) 0x03003420) + 2))) + 1);
    sub_0800D1D0();
  }
}

