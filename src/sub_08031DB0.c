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
M2C_UNK sub_08032A78(void *, s32);
s32 sub_08038458(s32);
inline u16 inline_fn(void *arg0)
{
  return *((u16 *) (((s8 *) arg0) + 6));
}

void sub_08031DB0(void *arg0)
{
  u16 new_var;
  new_var = (u16) (*((u16 *) (((s8 *) arg0) + 2)));
  *((u16 *) (((s8 *) arg0) + 0x82)) = new_var;
  *((u16 *) (((s8 *) (arg0 + 0x82)) + 4)) = (u16) inline_fn(arg0);
  if ((sub_08038458(1) << 0x18) != 0)
  {
    sub_08032A78(arg0, 0x877E);
    *((s8 *) (((s8 *) arg0) + 0x50)) = 2;
  }
}

