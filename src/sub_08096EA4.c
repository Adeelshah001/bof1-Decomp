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
M2C_UNK sub_08038264();
M2C_UNK sub_0803A8EC(void *);
inline int inline_fn(s32 arg0, void *arg1)
{
  return arg0 + (*((u16 *) (((s8 *) arg1) + 6)));
}

void sub_08096EA4(void *arg0)
{
  s32 var_r2;
  void *new_var;
  sub_08038264();
  var_r2 = 0x50;
  new_var = arg0;
  if ((*((u16 *) (((s8 *) new_var) + 0x2A))) == 0x18E)
  {
    var_r2 = 0x70;
  }
  *((s16 *) (((s8 *) new_var) + 0x2C)) = (s16) inline_fn(var_r2, arg0);
  sub_0803A8EC(new_var);
}

