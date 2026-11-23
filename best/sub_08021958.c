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
M2C_UNK sub_080208C0();
M2C_UNK sub_0802198C();
M2C_UNK sub_080219B8();
void sub_08021958(void)
{
  u16 temp_r1;
  void *new_var;
  new_var = (void *) 0x030016E0;
  temp_r1 = *((u16 *) (((s8 *) new_var) + 6));
  if (0x200 & temp_r1)
  {
    sub_080219B8();
    return;
  }
  if (0x100 & temp_r1)
  {
    sub_0802198C();
    return;
  }
  sub_080208C0();
}

