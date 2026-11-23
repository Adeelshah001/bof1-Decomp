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
s32 sub_08005090(s32, s32);
M2C_UNK sub_08005218(s32, s32, s32);
M2C_UNK sub_0800CB80();
void sub_0800CB48(void)
{
  int new_var;
  int new_var2;
  new_var2 = 0x1B98;
  new_var = 0x521C;
  if ((sub_08005090(0x1DA8, 0x51BC) << 0x18) != 0)
  {
    sub_0800CB80();
    return;
  }
  sub_08005218(0xAD, new_var2, new_var);
}

