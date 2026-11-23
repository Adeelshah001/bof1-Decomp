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
M2C_UNK sub_0803A8EC(void *);
M2C_UNK sub_0804BCE0(void *);
M2C_UNK sub_0804D5E0(void *);
inline s8 *inline_fn(void *arg0)
{
  return ((s8 *) arg0) + 0xAA;
}

u16 sub_0804D670(void *arg0)
{
  int new_var;
  u16 *var_r5;
  u8 temp_r0;
  temp_r0 = *((u8 *) (((s8 *) arg0) + 0x54));
  new_var = 0;
  if (temp_r0 != new_var)
  {
    *((u8 *) (((s8 *) arg0) + 0x54)) = (u8) (temp_r0 - 1);
    var_r5 = arg0 + 0xAA;
  }
  else
    if ((*((u16 *) inline_fn(arg0))) != new_var)
  {
    sub_0804BCE0(arg0);
  }
  sub_0804D5E0(arg0);
  sub_0803A8EC(arg0);
  var_r5 = arg0 + 0xAA;
  return *var_r5;
}

