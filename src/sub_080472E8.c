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
s32 sub_080472E8(void *arg0, s16 *arg1)
{
  int new_var;
  u16 temp_r0;
  u16 temp_r1;
  s8 *new_var2;
  u8 var_r2;
  var_r2 = 0;
  new_var2 = (s8 *) ((void *) 0x03002AB0);
  temp_r1 = *((u16 *) (((s8 *) arg0) + 2));
  new_var = 2;
  temp_r0 = *((u16 *) (new_var2 + new_var));
  if (temp_r1 != temp_r0)
  {
    var_r2 = 1;
    if (((u32) temp_r1) >= ((u32) temp_r0))
    {
      var_r2 = 3;
    }
  }
  *arg1 = *((u8 *) (((s8 *) arg0) + 0x61));
  *arg1 = (*arg1) - var_r2;
  *((u8 *) (((s8 *) arg0) + 0x61)) = var_r2;
  return 0;
}

