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
void sub_0805BE44(s16 *arg1, s16 *arg2)
{
  s16 *new_var2;
  s16 *new_var3;
  s16 *new_var;
  new_var3 = arg1;
  new_var3 = arg2;
  *new_var3 = 0x28C;
  new_var2 = (new_var2 = new_var);
  new_var = new_var3;
  *new_var2 = 0x28B;
}

