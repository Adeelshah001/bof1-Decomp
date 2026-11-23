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
M2C_UNK sub_08082F1C(M2C_UNK, s32);
unsigned int sub_08083160(M2C_UNK arg0)
{
  M2C_UNK new_var3;
  M2C_UNK new_var2;
  int new_var;
  new_var = 0x1E;
  new_var3 = arg0;
  new_var2 = new_var3;
  sub_08082F1C(new_var2, new_var);
}

