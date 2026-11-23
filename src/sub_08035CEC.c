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
s32 sub_08001770(s32);
M2C_UNK sub_0803549C(s32);
M2C_UNK sub_080358D4();
void sub_08035CEC(s32 arg0)
{
  u8 temp_r1;
  int new_var;
  if ((sub_08001770(0x49) << 0x18) != 0)
  {
    ;
    if (1 & (*((u8 *) 0x030033F0)))
    {
      new_var = 0xFE;
      *((u8 *) 0x030033F0) = new_var & (*((u8 *) 0x030033F0));
      sub_080358D4();
      return;
    }
    sub_0803549C(arg0);
  }
}

