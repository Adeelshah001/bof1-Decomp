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
void *sub_0805C574(u16);
u32 sub_0805F5B8(u16 arg0)
{
  s32 temp_r1;
  u16 temp_r4;
  u32 var_r5;
  u8 temp_r1_2;
  void *temp_r2;
  temp_r4 = arg0;
  var_r5 = 0xFF;
  temp_r2 = sub_0805C574(temp_r4);
  temp_r1 = 0xF000 & temp_r4;
  if (temp_r1 == 0x1000)
  {
    var_r5 = ((u32) (0 - ((u8) (0x20 & (*((u8 *) (((s8 *) temp_r2) + 8))))))) >> 0x1F;
  }
  else
    if (temp_r1 == 0x2000)
  {
    ;
    if (2 & (*((u8 *) (((s8 *) temp_r2) + 8))))
    {
      var_r5 = 4;
    }
    else
      if (4 & (*((u8 *) (((s8 *) temp_r2) + 8))))
    {
      var_r5 = 3;
    }
    else
      if (8 & (*((u8 *) (((s8 *) temp_r2) + 8))))
    {
      var_r5 = 2;
    }
  }
  return var_r5;
}

