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
M2C_UNK sub_0804BDE4();
void sub_0804D274(void *arg0)
{
  unsigned int temp_r0;
  unsigned char new_var;
  u8 temp_r0_2;
  sub_0804BDE4();
  temp_r0 = (*((u8 *) (((s8 *) arg0) + (new_var = 0x54)))) - 1;
  *((u8 *) (((s8 *) arg0) + 0x54)) = temp_r0;
  temp_r0_2 = temp_r0;
  if (temp_r0_2 == 0)
  {
    *((s32 *) (((s8 *) arg0) + 0x10)) = (s32) temp_r0_2;
    *((s32 *) (((s8 *) arg0) + 0x14)) = (s32) temp_r0_2;
  }
}

