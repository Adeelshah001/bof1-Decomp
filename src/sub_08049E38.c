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
M2C_UNK sub_08037C98(void *, s32);
M2C_UNK sub_0803828C(void *, void *, u16, u8);
M2C_UNK sub_0803A8EC(void *);
void sub_08049E38(void *arg0)
{
  unsigned int temp_r0;
  u8 temp_r0_2;
  if (0x80 & (*((u8 *) (((s8 *) arg0) + 0x80))))
  {
    temp_r0 = (*((u8 *) (((s8 *) arg0) + 0x54))) - 1;
    *((u8 *) (((s8 *) arg0) + 0x54)) = temp_r0;
    temp_r0_2 = temp_r0;
    if (temp_r0_2 == 0)
    {
      *((u8 *) (((s8 *) arg0) + 0x54)) = 0x80U;
      *((u8 *) (((s8 *) arg0) + 0x80)) = temp_r0_2;
    }
    sub_0803828C(arg0, arg0 + 4, *((u16 *) (((s8 *) arg0) + 0x38)), *((u8 *) (((s8 *) arg0) + 0x61)));
  }
  sub_08037C98(arg0, 0);
  sub_0803A8EC(arg0);
}

