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
M2C_UNK sub_0806DC20(void *);
M2C_UNK sub_080745A4(void *);
M2C_UNK sub_080745E8(void *);
void sub_0807456C(void *arg0)
{
  u8 new_var3;
  void *new_var;
  void *new_var2;
  new_var2 = (void *) 0x03004F30;
  new_var3 = *((u8 *) (new_var = ((s8 *) (new_var = new_var2)) + 9));
  if (new_var3 & 1)
  {
    sub_0806DC20(arg0);
    return;
    do
    {
    }
    while (0);
  }
  if ((*((u8 *) (((s8 *) arg0) + 0x58))) == 0)
  {
    sub_080745E8(arg0);
    return;
  }
  if (1)
  {
    sub_080745A4(arg0);
  }
}

