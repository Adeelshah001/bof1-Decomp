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
M2C_UNK sub_0803A8EC(void *);
void sub_0804FB68(void *arg0)
{
  int temp_r0;
  u8 temp_r0_2;
  temp_r0 = (*((u8 *) (((s8 *) arg0) + 0x54))) - 1;
  *((u8 *) (((s8 *) arg0) + 0x54)) = temp_r0;
  temp_r0_2 = temp_r0;
  if (temp_r0_2 == 0)
  {
    *((s16 *) (((s8 *) arg0) + 0)) = (s16) temp_r0_2;
    *((s16 *) (((s8 *) arg0) + 4)) = (s16) temp_r0_2;
    *((s32 *) (((s8 *) arg0) + 0x10)) = (s32) temp_r0_2;
    *((s32 *) (((s8 *) arg0) + 0x14)) = (s32) temp_r0_2;
    *((s32 *) (((s8 *) arg0) + 0x44)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x44))) & 0xFF000000);
    *((s32 *) (((s8 *) arg0) + 0x48)) = (s32) (((*((s32 *) (((s8 *) arg0) + 0x48))) & 0xFF000000) | 0x1000);
    *((u8 *) (((s8 *) arg0) + 0x50)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x50))) + 1);
    sub_080379D4(0x20);
  }
  sub_08037C98(arg0, 0);
  sub_0803A8EC(arg0);
}

