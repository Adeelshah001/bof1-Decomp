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
M2C_UNK sub_080379D4(s32);
s32 sub_0805CC30(void)
{
  unsigned int new_var2;
  void *new_var;
  new_var = (void *) 0x030016E0;
  new_var2 = 0x1B;
  if (((*((u8 *) (((s8 *) ((void *) 0x03004760)) + new_var2))) != 0) || (!((*((u16 *) (((s8 *) new_var) + 6))) & 2)))
  {
    return 0;
  }
  sub_080379D4(3);
  return 1;
}

