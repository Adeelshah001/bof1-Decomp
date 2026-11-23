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
void sub_08095EFC(void *arg0)
{
  int new_var;
  s32 var_r3;
  var_r3 = 0x50;
  if ((*((u16 *) (((s8 *) arg0) + 0x2A))) == 0x18E)
  {
    var_r3 = 0x70;
  }
  new_var = var_r3 + (*((u16 *) (((s8 *) arg0) + 6)));
  *((s16 *) (((s8 *) arg0) + 0x2C)) = (s16) new_var;
  sub_0803A8EC(arg0);
}

