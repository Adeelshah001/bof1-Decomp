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
M2C_UNK sub_08038864(void *, void *);
void sub_08073CFC(s32 *arg0, s32 *arg1, u8 arg2)
{
  s32 var_r3;
  s32 var_r5;
  void *temp_r4;
  void *var_r2;
  var_r3 = *arg1;
  var_r2 = (void *) 0x03002AB0;
  if (var_r3 >= 0)
  {
    loop_1:
    if ((((*((u8 *) (((s8 *) var_r2) + 0x3A))) != 0) && ((*((u8 *) (((s8 *) var_r2) + 0x3C))) == arg2)) && (0x10 & (*((u8 *) (((s8 *) var_r2) + 0xF0)))))
    {
      if (var_r2 != (*arg0))
      {
        var_r5 = var_r3 - 1;
        var_r3 = var_r5;
        if (var_r3 >= 0)
        {
          do
          {
            temp_r4 = var_r2 + 0x124;
            sub_08038864(var_r2, temp_r4);
            var_r2 = temp_r4;
            var_r5 -= 1;
          }
          while (var_r5 >= 0);
        }
      }
      *arg1 -= 1;
      *arg0 += 0xFFFFFEDC;
      return;
    }

    var_r2 += 0x124;
    var_r3 -= 1;
    if (var_r3 < 0)
    {
    }
    else
    {
      goto loop_1;
    }
  }
}

