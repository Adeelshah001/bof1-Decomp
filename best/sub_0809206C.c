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
M2C_UNK sub_0803A8EC(void *);
inline int inline_fn(unsigned short arg0, void *arg1)
{
  return arg0 + (*((u16 *) (((s8 *) arg1) + 6)));
}

void sub_0809206C(void *arg0)
{
  unsigned short var_r2;
  s32 var_r2_2;
  if ((*((u8 *) (((s8 *) arg0) + 0x61))) == 0x17)
  {
    if (((u32) (*((u16 *) (((s8 *) arg0) + 2)))) <= 0xEE8U)
    {
      *((s8 *) (((s8 *) arg0) + 0x40)) = 1;
 do { *((u8 *) (((s8 *) arg0) + 0x61)) = 9U; } while (0);
      sub_080379D4(0x24);
    }
    var_r2 = 0x50;
    if ((*((u16 *) (((s8 *) arg0) + 0x2A))) == 0x18E)
    {
      var_r2 = 0x70;
    }
    *((s16 *) (((s8 *) arg0) + 0x2C)) = (s16) inline_fn(var_r2, arg0);
    sub_0803A8EC(arg0);
    return;
  }
  if (((u32) (*((u16 *) (((s8 *) arg0) + 2)))) > 0x1018U)
  {
    *((s8 *) (((s8 *) arg0) + 0x40)) = 0;
    *((u8 *) (((s8 *) arg0) + 0x61)) = 0x17U;
    sub_080379D4(0x24);
  }
  var_r2_2 = 0x50;
  if ((*((u16 *) (((s8 *) arg0) + 0x2A))) == 0x18E)
  {
    var_r2_2 = 0x70;
  }
  *((s16 *) (((s8 *) arg0) + 0x2C)) = (s16) inline_fn(var_r2_2, arg0);
  sub_0803A8EC(arg0);
}
