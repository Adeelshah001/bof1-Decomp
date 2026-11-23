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
M2C_UNK sub_08073CCC(void *, s32);
void sub_08073500(void)
{
  s32 *new_var;
  s32 var_r3;
  void *var_r2;
  var_r2 = (void *) 0x030032AC;
  var_r3 = 7;
  loop_1:
  if (((*((u8 *) (((s8 *) var_r2) + 0x3A))) != 0) && (!(0x40 & (*((u8 *) (((s8 *) var_r2) + 0xF0))))))
  {
    if ((*(new_var = &var_r3)) != 0)
    {
      if (1)
      {
        sub_08073CCC(var_r2, var_r3);
      }
    }
  }
  else
  {
    var_r2 += 0xFFFFFEDC;
    var_r3 -= 1;
    if (var_r3 < 0)
    {
      return;
    }
    goto loop_1;
  }

}

