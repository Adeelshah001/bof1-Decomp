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
inline int inline_fn(void *arg0)
{
  return 0xFF00 | (*((u16 *) (((s8 *) arg0) + 0x16)));
}

void sub_0804D7A8(void *arg0, u16 arg1, u16 arg2)
{
  s8 *new_var;
  u16 temp_r1;
  temp_r1 = arg1;
  arg1 = arg2;
  new_var = ((s8 *) arg0) + 0x10;
  *((s32 *) new_var) = (s32) (temp_r1 << 8);
  *((s32 *) (0x14 + ((s8 *) arg0))) = (s32) (arg1 << 8);
  if (temp_r1 & 0x8000)
  {
    temp_r1 = (u16) (0xFF00 | (*((u16 *) (((s8 *) arg0) + 0x12))));
    *((u16 *) (((s8 *) arg0) + 0x12)) = temp_r1;
  }
  if (arg2 & 0x8000)
  {
    *((u16 *) (((s8 *) arg0) + 0x16)) = (u16) inline_fn(arg0);
    do
    {
    }
    while (0);
  }
}

