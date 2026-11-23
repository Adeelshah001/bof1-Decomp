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
M2C_UNK sub_0803828C(void *, s32, u16, u8);
M2C_UNK sub_0803A8EC(void *);
M2C_UNK sub_0803A974(void *);
extern M2C_UNK sub_08049210;
void sub_0804926C(void *arg0)
{
  u8 *var_r2;
  long long temp_r0;
  u8 temp_r0_2;
  sub_0803828C(arg0, arg0 + 4, *((u16 *) (((s8 *) arg0) + 0x38)), *((u8 *) (((s8 *) arg0) + 0x61)));
  temp_r0 = (*((u8 *) (((s8 *) arg0) + 0x54))) - 1;
  *((u8 *) (((s8 *) arg0) + 0x54)) = temp_r0;
  temp_r0_2 = temp_r0;
  if (temp_r0_2 != 0)
  {
    var_r2 = arg0 + 0x80;
    if (temp_r0_2 == 7)
    {
      *((u16 *) (((s8 *) arg0) + 0x38)) = 0U;
    }
  }
  else
  {
    var_r2 = arg0 + 0x80;
    *((u8 *) (((s8 *) arg0) + 0x80)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x80))) ^ 1);
    *((u8 *) (((s8 *) arg0) + 0x54)) = (u8) (*((u8 *) (((s8 *) arg0) + 0x55)));
    *((u8 *) (((s8 *) arg0) + 0x61)) = (temp_r0_2 = (u8) ((*((u8 *) (((s8 *) arg0) + 0x61))) ^ 0x10));
    *((M2C_UNK **) (((s8 *) arg0) + 0x64)) = &sub_08049210;
  }
  if ((*var_r2) != 0)
  {
    sub_0803A8EC(arg0);
    return;
  }
  sub_0803A974(arg0);
}

