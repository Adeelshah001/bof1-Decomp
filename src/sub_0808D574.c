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
M2C_UNK sub_0807B27C(s32);
void sub_0808D574(s32 arg0)
{
  void *new_var;
  u8 new_var2;
  new_var = (void *) 0x03004F30;
  new_var2 = *((u8 *) (((s8 *) new_var) + 9));
  if (!(new_var2 & 0xA0))
  {
    arg0 = arg0;
    sub_0807B27C(arg0);
  }
}

