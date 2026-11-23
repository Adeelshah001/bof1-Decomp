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
M2C_UNK sub_0808EA78(void *);
M2C_UNK sub_0808EA98(void *);
void sub_0808EA38(void *arg0)
{
  void *new_var2;
  u8 new_var;
  new_var2 = (void *) 0x03004F50;
  *((s8 *) (((s8 *) new_var2) + 0x10)) = 0x7F;
  new_var = *((u8 *) (((s8 *) arg0) + 0x4D));
  new_var = new_var;
  if (new_var == 1)
  {
    sub_0808EA78(arg0);
    return;
  }
  if (new_var == 2)
  {
    sub_0808EA98(arg0);
    return;
  }
  *((u8 *) (((s8 *) arg0) + 0x4D)) = (u8) (new_var + 1);
  sub_0808EA78(arg0);
}

