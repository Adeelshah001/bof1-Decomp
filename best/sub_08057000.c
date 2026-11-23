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
s32 sub_0805600C(s32);
M2C_UNK sub_08056A64(void *, s32);
s32 sub_08057000(s32 arg0, void *arg1)
{
  int new_var;
  s32 temp_r1;
  u32 var_r1;
  void *new_var2;
  new_var2 = arg1;
  var_r1 = 0;
  if ((*((u8 *) (((s8 *) new_var2) + 0x3A))) != 0)
  {
    temp_r1 = (*((u16 *) (((s8 *) arg1) + 0xF6))) ^ (*((u16 *) (((s8 *) arg1) + 0xF4)));
    new_var = (0 - temp_r1) | temp_r1;
    var_r1 = ((u32) new_var) >> 0x1F;
  }
  if (var_r1 != 0)
  {
    if (0x80 & (*((u8 *) (((s8 *) arg1) + 0xF1))))
    {
      if (new_var || arg1)
      {
        return 0x80000044;
      }
      else
      {
        return 0x80000044;
      }
    }
    sub_08056A64(arg1, 0x64);
    return sub_0805600C(arg0);
  }
  return 0x8000000D;
}

