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
M2C_UNK sub_0803A8EC(void *);
extern M2C_UNK sub_0804A150;
inline int inline_fn(void *arg0)
{
  return (*((u8 *) arg0)) & 0xCF;
}

void sub_0804A118(void *arg0)
{
  void *new_var;
  if (0x80 & (*((u8 *) 0x03003F98)))
  {
    *((M2C_UNK **) (((s8 *) arg0) - -0x64)) = &sub_0804A150;
    new_var = ((s8 *) arg0) + 0x41;
    *((u8 *) new_var) = (u8) (inline_fn(new_var) | 0x10);
    new_var = arg0;
    sub_0803A8EC(new_var);
  }
}

