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
void sub_0805DC2C(void *arg0, u8 arg1, int arg2)
{
  s32 var_r0;
  s32 var_r0_2;
  u16 temp_r2;
  u16 var_r1;
  u8 temp_r4;
  temp_r4 = arg1;
  temp_r2 = arg2;
  var_r1 = *((u16 *) (((s8 *) arg0) + 0x108));
  if ((*((u16 *) (((s8 *) arg0) + 0xEC))) == temp_r2)
  {
    var_r0 = temp_r4 + var_r1;
    if (var_r0 > 0x1FF)
    {
      var_r0 = 0x1FF;
    }
    var_r1 = (u16) var_r0;
  }
  if ((*((u16 *) (((s8 *) arg0) + 0xEE))) == temp_r2)
  {
    var_r0_2 = temp_r4 + var_r1;
    if (var_r0_2 > 0x1FF)
    {
      var_r0_2 = 0x1FF;
    }
    var_r1 = (u16) var_r0_2;
  }
  *((u16 *) (((s8 *) arg0) + 0x108)) = var_r1;
}

