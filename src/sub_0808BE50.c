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
s32 sub_0807B2BC();
M2C_UNK sub_0808BE80(void *);
inline u8 inline_fn(void *arg0)
{
  return (u8) (*((u8 *) (((s8 *) arg0) + 0x55)));
}

void sub_0808BE50(void *arg0)
{
  if ((sub_0807B2BC() << 0x10) == 0)
  {
    sub_08037FC4(arg0, 2);
    *((u8 *) (((s8 *) arg0) + 0x4D)) = inline_fn(arg0);
    sub_0808BE80(arg0);
  }
}

