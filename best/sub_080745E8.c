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
M2C_UNK sub_0807462C();
M2C_UNK sub_08074638(void *);
M2C_UNK sub_08084BB0();
void sub_080745E8(void *arg0)
{
  void *new_var3;
  int new_var;
  u8 new_var2;
  if (arg0)
  {
    sub_0807462C();
    new_var3 = (void *) 0x03004F30;
    new_var2 = *((u8 *) (((s8 *) new_var3) + 9));
  }
  else
  {
    sub_0807462C();
    new_var3 = (void *) 0x03004F30;
    new_var2 = *((u8 *) (((s8 *) new_var3) + 9));
  }
  if (new_var2 & 0x1E)
  {
    *((s8 *) (((s8 *) arg0) + 2)) = 0x22;
    return;
  }
  if (new_var = 0xF & (*((u8 *) (((s8 *) arg0) + 0x5F))))
  {
    sub_08084BB0();
    *((s8 *) (((s8 *) arg0) + 2)) = 6;
    return;
  }
  sub_08074638(arg0);
}

