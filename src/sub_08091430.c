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
void sub_080380F4(void *, s32, s32, s32);
s32 sub_0807B2BC();
M2C_UNK sub_0807C484(void *);
M2C_UNK sub_08091480(void *);
inline s32 inline_fn(s8 *arg0)
{
  return *((s32 *) arg0);
}

void sub_08091430(void *arg0)
{
  s8 *new_var;
  u8 new_var2;
  if ((sub_0807B2BC() << 0x10) == 0)
  {
    sub_080380F4(arg0, inline_fn(((s8 *) arg0) + 0x78), 8, 0xC);
    new_var2 = *((u8 *) (((s8 *) arg0) + 0x61));
    *((s32 *) (((s8 *) arg0) + 0x44)) = (s32) ((0xF0 & new_var2) << 8);
    new_var = ((s8 *) arg0) + 0x38;
    *((s16 *) new_var) = 0xA0;
    sub_08037FC4(arg0, 2);
    sub_0807C484(arg0);
    *((s8 *) (((s8 *) arg0) + 0x4D)) = 4;
    sub_08091480(arg0);
  }
}

