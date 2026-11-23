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
inline u8 *inline_fn(u8 *arg0)
{
  return arg0;
}

s32 sub_08030F00(void *arg0)
{
  int new_var4;
  s8 *new_var;
  int new_var3;
  u8 *new_var2;
  new_var4 = 2 | (*inline_fn((u8 *) (((s8 *) arg0) + 0xBA)));
  *((u8 *) (((s8 *) arg0) + 0xBA)) = (u8) new_var4;
  new_var = ((s8 *) arg0) + 0x41;
  new_var2 = (u8 *) new_var;
  new_var3 = 0x30 | (*new_var2);
  *((u8 *) (((s8 *) arg0) + 0x41)) = (u8) new_var3;
  return 0;
}

