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
M2C_UNK sub_0805D8CC(s32, u32, u32, s32, s32);
inline s8 *inline_fn(s8 *arg0)
{
  return arg0 + 0xEC;
}

void sub_0806AF70(void *arg0, u16 arg1)
{
  u16 temp_r3;
  s8 *new_var;
  temp_r3 = arg1;
  new_var = (s8 *) arg0;
  sub_0805D8CC(0, ((u32) (0x3E & temp_r3)) >> 1, ((u32) (0x7C0 & temp_r3)) >> 6, 0, (s32) (*((u16 *) inline_fn(new_var))));
}

