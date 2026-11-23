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
M2C_UNK sub_08050228(void *);
extern M2C_UNK sub_08050208;
inline int inline_fn(int arg0)
{
  return arg0;
}

void sub_0804FFE4(void *arg0)
{
  s8 *new_var;
  *((u8 *) (((s8 *) arg0) + 0x41)) = (u8) inline_fn(0x30 | (*((u8 *) (((s8 *) arg0) + 0x41))));
  *((s8 *) (((s8 *) arg0) + 0x3D)) = 2;
  *((s16 *) (((s8 *) arg0) + 0x2A)) = 0xA2;
  sub_08037FC4(arg0, 0);
  new_var = (s8 *) arg0;
  *((M2C_UNK **) (new_var + 0x64)) = &sub_08050208;
  sub_08050228(arg0);
}

