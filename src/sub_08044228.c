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
M2C_UNK sub_080674B8(s32);
M2C_UNK sub_08068984(s32, s32, s32, s32, s32);
M2C_UNK sub_0809ED9C(s32);
inline s8 *inline_fn(void *arg0)
{
  return (s8 *) arg0;
}

s32 sub_08044228(void)
{
  void *new_var;
  void **new_var3;
  int new_var2;
  new_var = (void *) 0x030016E0;
  new_var3 = &new_var;
  if (1 & (*((u16 *) (inline_fn(*new_var3) + 6))))
  {
    sub_0809ED9C(1);
    sub_080674B8(0);
    sub_08068984(0, 2, 1, 0, 0x080FBBCF);
    sub_08068984(0, 2, 3, 0, 0x080FBBE5);
    sub_08068984(0, 2, 5, 0, 0x080FBBFE);
 do { new_var2 = 0; sub_08068984(new_var2, 2, 7, 0, 0x080FBC14); } while (0);
    *inline_fn(inline_fn((void *) 0x03004410) + 0xA) = 0xA;
  }
  return 0;
}
