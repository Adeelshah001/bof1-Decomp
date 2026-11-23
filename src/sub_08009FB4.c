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
M2C_UNK sub_080073D8(s32);
void sub_08009FB4(void *arg0)
{
  char new_var3;
  s32 *new_var;
  s8 *new_var4;
  int new_var2;
  new_var4 = (s8 *) ((void *) 0x03004830);
  if ((*((u16 *) (new_var4 + 0x2A))) == 0x309)
  {
    new_var2 = 0x24;
    sub_080073D8(new_var3 = new_var2);
    new_var = &(*((s32 *) (((s8 *) arg0) + 0x68)));
    *((s32 *) (((s8 *) arg0) + 0x68)) = (s32) ((*new_var) + 2);
  }
}

