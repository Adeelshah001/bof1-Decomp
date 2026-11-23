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
M2C_UNK sub_080379D4(s32);
M2C_UNK sub_08037C98(void *, s32);
M2C_UNK sub_0803A974(void *);
M2C_UNK sub_0803EE6C();
void sub_0805001C(void *arg0)
{
  u8 temp_r1;
  s8 *new_var;
  new_var = (s8 *) arg0;
  new_var = new_var + 0x54;
  temp_r1 = *((u8 *) new_var);
  if (temp_r1 == 0)
  {
    sub_0803EE6C();
    return;
  }
  if ((0x1F & temp_r1) == 0x10)
  {
    sub_080379D4(0x25);
  }
  sub_08037C98(arg0, 0);
  sub_0803A974(arg0);
  *((u8 *) new_var) = (u8) ((*((u8 *) new_var)) - 1);
}

