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
short sub_0803A8EC(void *);
void sub_08096FBC(void *arg0)
{
  s32 var_r3;
  int new_var2;
  void *new_var;
  if (((u32) ((u8) ((*((u8 *) (((s8 *) arg0) + 0x3B))) - 5))) <= 1U)
  {
    *((u16 *) (((s8 *) arg0) + 0x2C)) = (u16) (*((u16 *) (((s8 *) arg0) + 6)));
    sub_0803A8EC(arg0);
    return;
  }
  var_r3 = 0x50;
  if ((*((u16 *) (((s8 *) arg0) + 0x2A))) == 0x18E)
  {
    var_r3 = 0x70;
  }
  new_var2 = var_r3 + (*((u16 *) (((s8 *) arg0) + 6)));
  if (1)
  {
    new_var = arg0;
    *((u16 *) (((s8 *) new_var) + 0x2C)) = (u16) new_var2;
    sub_0803A8EC(arg0);
  }
}

