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
M2C_UNK sub_0805B15C();
M2C_UNK sub_08063704();
M2C_UNK sub_08068850();
M2C_UNK sub_08068938(s32, s32);
inline s8 *inline_fn()
{
  return (s8 *) ((void *) 0x03004620);
}

s32 sub_0806930C(void)
{
  int new_var;
  sub_0805B15C();
  sub_08068850();
  new_var = 0;
  sub_08068938(0, 0x21);
  sub_08063704();
  *((s8 *) (inline_fn() + 3)) = 0xA;
  return new_var;
}

