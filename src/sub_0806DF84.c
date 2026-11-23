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
M2C_UNK sub_0806DFFC(void *);
M2C_UNK sub_08071F60();
M2C_UNK sub_0807389C(s32);
M2C_UNK sub_08074538(void *, s32);
M2C_UNK sub_08080970(void *);
void sub_0806DF84(void *arg0)
{
  s32 var_r1;
  u8 temp_r0;
  int new_var2;
  void *new_var;
  u8 temp_r1;
  sub_08071F60();
  temp_r1 = *((u8 *) (((s8 *) arg0) + 0x5C));
  if (0x80 & temp_r1)
  {
 if (0) { }
    *((u8 *) (((s8 *) arg0) + 0x5C)) = (u8) (temp_r1 & 0x7F);
    new_var2 = (*((u8 *) (((s8 *) arg0) + 0x58))) != 0;
    var_r1 = 0xA4;
    if (new_var2)
    {
      var_r1 = 0x46;
    }
    sub_0807389C(var_r1);
  }
  if ((*((u16 *) (((s8 *) arg0) + 0x40))) == 0)
  {
    sub_0806DFFC(arg0);
    return;
  }
  new_var = (void *) 0x03004F30;
  temp_r0 = *((u8 *) (((s8 *) new_var) + 5));
  if (temp_r0 != 0)
  {
    *((u8 *) (((s8 *) new_var) + 5)) = (u8) (temp_r0 - 1);
    return;
  }
  sub_08080970(arg0);
  *((u8 *) (((s8 *) arg0) + 0x10)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x10))) - 1);
  if ((*((u8 *) (((s8 *) arg0) + 0x58))) != 0)
  {
    sub_08074538(arg0, *((s32 *) (((s8 *) arg0) + 0x54)));
  }
}
