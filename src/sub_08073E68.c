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
M2C_UNK sub_08073FC4(void *);
short sub_08080470(void *);
inline s8 *inline_fn(void *arg0)
{
  return ((s8 *) arg0) + 0x55;
}

void sub_08073E68(void *arg0)
{
  u8 new_var;
  new_var = *((u8 *) (((s8 *) arg0) + 5));
  *((u8 *) inline_fn(arg0)) = (u8) new_var;
  sub_08073FC4(arg0);
  sub_08080470(arg0);
}

