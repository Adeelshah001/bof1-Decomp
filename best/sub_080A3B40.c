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
s32 sub_080A07AC(s32, s32);
void *sub_080A3A38(s32);
void *sub_080A3AA8(s32, void *, s32, s32);
void *sub_080A3B40(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
  s32 temp_r0;
  s32 temp_r3;
  s32 temp_r3_2;
  s32 var_r2;
  s32 var_r5;
  s32 var_r5_2;
  u8 *var_r4;
  u8 *var_r4_2;
  void *var_r1;
  temp_r0 = sub_080A07AC(arg3 + 8, 9);
  var_r2 = 1;
  if (temp_r0 > 1)
  {
    do
    {
      var_r2 *= 2;
    }
    while ((temp_r0 + 1) > (var_r2 + 1));
  }
  var_r1 = sub_080A3A38(arg0);
  *((s32 *) (((s8 *) var_r1) + 0x14)) = arg4;
  *((s32 *) (((s8 *) var_r1) + 0x10)) = 1;
  var_r5 = 9;
  if (arg2 > 9)
  {
    var_r4 = arg1 + 9;
    do
    {
      temp_r3 = (*var_r4) - 0x30;
      var_r4 += 1;
      var_r1 = sub_080A3AA8(arg0, var_r1, 0xA, temp_r3);
      var_r5 += 1;
    }
    while (var_r5 < arg2);
    var_r4_2 = var_r4 + 1;
  }
  else
  {
    var_r4_2 = arg1 + 0xA;
  }
  if (var_r5 < arg3)
  {
    var_r5_2 = arg3 - var_r5;
    do
    {
      temp_r3_2 = (*var_r4_2) - 0x30;
      var_r4_2 += 1;
      var_r1 = sub_080A3AA8(arg0, var_r1, 0xA, temp_r3_2);
      var_r5_2 -= 1;
    }
    while (var_r5_2 != 0);
  }
  return var_r1;
}

