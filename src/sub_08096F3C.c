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
inline int inline_fn(u8 arg0, int arg1)
{
  return arg0 + arg1;
}

void sub_08096F3C(void *arg0)
{
  u8 temp_r1;
  void *temp_r2;
  temp_r2 = *((void **) (((s8 *) arg0) + 0x78));
  *((u8 *) (((s8 *) arg0) + 2)) = (u8) (*((u8 *) (((s8 *) temp_r2) + 2)));
  temp_r1 = *((u8 *) (((s8 *) temp_r2) + 6));
  *((u8 *) (((s8 *) arg0) + 6)) = temp_r1;
  *((s8 *) (((s8 *) arg0) + 0x2C)) = (s8) inline_fn(temp_r1, 0x10);
}

