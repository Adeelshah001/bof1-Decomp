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
u16 sub_080837C8(void *, s32);
M2C_UNK sub_0808390C(void *, u16);
void sub_08083B38(void *arg0, s32 arg1)
{
  s32 temp_r1;
  s32 var_r0;
  void *new_var;
  u16 temp_r0;
  u16 temp_r2;
  temp_r2 = sub_080837C8(arg0, ((s32) (arg1 - 0x10)) >> 3);
  new_var = (void *) 0x03004F18;
  if (0x20 & (*((u8 *) (((s8 *) arg0) + 0xF0))))
  {
    sub_0808390C(arg0, temp_r2);
    return;
  }
  temp_r1 = (*((u16 *) (((s8 *) arg0) + 0xF4))) - (*((u16 *) (((s8 *) arg0) + 0xF6)));
  temp_r0 = *((u16 *) (((s8 *) new_var) + 2));
  *((u16 *) (((s8 *) arg0) + 0xF4)) = temp_r0;
  var_r0 = temp_r0 - temp_r1;
  if (var_r0 <= 0)
  {
    var_r0 = (s32) (*((u16 *) (((s8 *) arg0) + 0xF6)));
    if (var_r0 != 0)
    {
      var_r0 = 1;
    }
  }
  *((u16 *) (((s8 *) arg0) + 0xF6)) = (u16) var_r0;
}

