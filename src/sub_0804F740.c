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
M2C_UNK sub_08037C98(void *, s32);
M2C_UNK sub_0803A8EC(void *);
M2C_UNK sub_0803EE6C(void *);
void sub_0804F740(void *arg0)
{
  char new_var;
  if (2 & (*((u8 *) (((s8 *) arg0) + 0x3A))))
  {
    new_var = 0x20 | (*((u8 *) (((s8 *) arg0) + 0x41)));
    *((u8 *) (((s8 *) arg0) + 0x41)) = (u8) new_var;
    sub_08037C98(arg0, 0);
    sub_0803A8EC(arg0);
    return;
  }
  sub_0803EE6C(arg0);
}

