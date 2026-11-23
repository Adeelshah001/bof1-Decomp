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
M2C_UNK sub_0803815C(void *, s32);
M2C_UNK sub_0807B248(void *);
M2C_UNK sub_080871D0(void *);
M2C_UNK sub_080875EC(void *);
void sub_080875A0(void *arg0)
{
  int new_var2;
  s32 new_var;
  u8 temp_r0;
  temp_r0 = *((u8 *) (((s8 *) arg0) + 0x50));
  new_var2 = 0x160;
  if (temp_r0 == 1)
  {
    sub_080871D0(arg0);
    return;
  }
  if (temp_r0 == 2)
  {
    sub_080875EC(arg0);
    return;
  }
  *((s16 *) (((s8 *) arg0) + 0x38)) = (int) new_var2;
  new_var = *((s32 *) (((s8 *) arg0) + 0x78));
  sub_0803815C(arg0, new_var);
  *((s8 *) (((s8 *) arg0) + 0x54)) = 8;
  *((u8 *) (((s8 *) arg0) + 0x50)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x50))) + 1);
  sub_0807B248(arg0);
}

