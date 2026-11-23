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
M2C_UNK sub_080411DC();
u8 sub_0805B040(s32);
M2C_UNK sub_0805B404(s32);
inline s8 *inline_fn()
{
  return (s8 *) ((void *) 0x03004410);
}

s32 sub_08041328(void)
{
  u16 temp_r1;
  void *new_var3;
  u8 temp_r4;
  void *new_var;
  short new_var2;
  new_var3 = (void *) 0x03004620;
  if ((*((u8 *) (((s8 *) new_var3) + 7))) != 0)
  {
    temp_r4 = sub_0805B040(1);
    new_var2 = 6;
    temp_r1 = *((u16 *) (((s8 *) ((void *) 0x030016E0)) + new_var2));
    if (2 & temp_r1)
    {
      sub_080379D4(0x15);
      sub_0805B404(1);
      new_var = (void *) 0x03004410;
      *((s8 *) (((s8 *) new_var) + 0xE)) = 0;
      *((s8 *) (((s8 *) new_var) + 0xC)) = 0;
    }
    else
      if (1 & temp_r1)
    {
      sub_080379D4(2);
      *((u8 *) 0x0300459C) = temp_r4;
      *((s8 *) (inline_fn() + 0xE)) = 6;
    }
  }
  else
  {
    sub_080411DC();
    *((u8 *) (((s8 *) new_var3) + 7)) = 0xFFU;
  }
  return 0;
}

