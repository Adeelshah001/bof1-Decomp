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
M2C_UNK sub_08037FC4(void *, s32);
M2C_UNK sub_0808DC50(void *);
inline int inline_fn(u8 *arg0)
{
  return 1 | (*arg0);
}

void sub_0808DC20(void *arg0)
{
  int new_var2;
  u8 *new_var;
  new_var2 = 0xC;
  new_var = &(*((u8 *) (((s8 *) ((void *) 0x03004F30)) + new_var2)));
  *((u8 *) (((s8 *) ((void *) 0x03004F30)) + 0xC)) = (u8) inline_fn(new_var);
  sub_08037FC4(arg0, 6);
  *((s8 *) (((s8 *) arg0) + 0x4D)) = 4;
  sub_0808DC50(arg0);
}

