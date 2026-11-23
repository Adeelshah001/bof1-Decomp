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
u16 sub_0807B2BC();
M2C_UNK sub_0808D800(void *);
inline s8 *inline_fn()
{
  return (s8 *) ((void *) 0x03004F50);
}

void sub_0808DC50(void *arg0)
{
  u16 temp_r5;
  *((s8 *) (inline_fn() + 0x10)) = 0x7F;
  temp_r5 = sub_0807B2BC();
  if (temp_r5 == 0)
  {
    sub_08037FC4(arg0, 8);
    *((s8 *) (((s8 *) arg0) + 0x55)) = (s8) temp_r5;
    *((s16 *) (((s8 *) arg0) + 0x38)) = 0x40;
    *((s8 *) (inline_fn() + 0x10)) = 0x7F;
    *((u8 *) (((s8 *) arg0) + 0x4D)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x4D))) + 1);
    sub_0808D800(arg0);
  }
}

