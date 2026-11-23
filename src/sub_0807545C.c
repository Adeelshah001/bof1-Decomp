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
s32 sub_080754B4();
u32 sub_0807545C(int arg0)
{
  u8 var_r4;
  var_r4 = arg0;
  if (sub_080754B4() == 0)
  {
    var_r4 = (u8) (((u32) (arg0 << 0x18)) >> 0x19);
  }
  return (u32) var_r4;
}

