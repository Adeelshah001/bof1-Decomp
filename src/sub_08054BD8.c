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
M2C_UNK sub_0803A8EC(void *);
extern M2C_UNK sub_08054D40;
inline u8 inline_fn(u8 *arg0)
{
  return (u8) (0x30 | (*arg0));
}

void sub_08054BD8(void *arg0)
{
  void *temp_r2;
  temp_r2 = arg0 + 0x41;
  *((u8 *) (((s8 *) arg0) + 0x41)) = inline_fn((u8 *) (((s8 *) arg0) + 0x41));
  *((u8 *) (((s8 *) temp_r2) + 0x2C)) = (u8) (0xDF & (*((u8 *) (((s8 *) temp_r2) + 0x2C))));
  sub_08037FC4(arg0, 6);
  *((M2C_UNK **) (((s8 *) arg0) + 0x78)) = &sub_08054D40;
  *((s8 *) (((s8 *) arg0) + 0x54)) = 0x10;
  sub_0803A8EC(arg0);
}

