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
M2C_UNK sub_080756DC(void *);
M2C_UNK sub_08075738(void *, s32);
M2C_UNK sub_08078E88(void *);
M2C_UNK sub_08078F08(void *);
M2C_UNK sub_08079108(void *);
M2C_UNK sub_0807AC50(void *);
inline u8 *inline_fn(void *arg0)
{
  return (u8 *) (((s8 *) arg0) + 0x51);
}

void sub_080794B8(void *arg0)
{
  u8 temp_r1;
  u8 temp_r5;
  temp_r5 = 0x40 & (*((u8 *) (((s8 *) arg0) + 0xDC)));
  if (temp_r5 != 0)
  {
    temp_r1 = *((u8 *) (((s8 *) arg0) + 0xF1));
    if (0x10 & temp_r1)
    {
      sub_08075738(arg0, 0x2A);
      return;
    }
    if (0x20 & temp_r1)
    {
      sub_08075738(arg0, 0x2E);
      return;
    }
    if (temp_r1 & 0x40)
    {
      sub_08075738(arg0, 0x2C);
      return;
    }
    sub_08078F08(arg0);
    return;
  }
  *((s8 *) (((s8 *) arg0) + 0x54)) = 8;
  sub_080756DC(arg0);
  *inline_fn(arg0) = temp_r5;
  temp_r1 = *((u8 *) (((s8 *) (arg0 + 0x51)) + 0xA0));
  if (0x80 & temp_r1)
  {
    sub_08078E88(arg0);
    return;
  }
  if (temp_r1 & 3)
  {
    sub_08079108(arg0);
    return;
  }
  sub_0807AC50(arg0);
}

