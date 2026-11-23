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
M2C_UNK sub_0802FFBC(s32, u16);
u8 sub_080329C0(s32, u16, u16);
M2C_UNK sub_08039088(u16, s32);
M2C_UNK sub_0805C9A0(s32, s32);
void *sub_0805D6D8(u16);
u8 sub_08032434(s32 arg0, u16 arg1, u16 arg2)
{
  int new_var2;
  u16 temp_r5;
  u16 temp_r6;
  u16 new_var;
  void *temp_r0;
  temp_r5 = arg1;
  new_var = temp_r5;
  temp_r6 = arg2;
  if ((0x3000 & temp_r5) || (((u32) (0xFF & new_var)) > 7U))
  {
    return sub_080329C0(arg0, temp_r5, temp_r6);
  }
  temp_r0 = sub_0805D6D8(temp_r5);
  new_var2 = (*((u8 *) (((s8 *) temp_r0) + 9))) | ((*((u8 *) (((s8 *) temp_r0) + 0xA))) << 8);
  sub_0805C9A0(0x0202DBD0, new_var2);
  sub_0802FFBC(arg0, temp_r5);
  sub_08039088(temp_r6, 0x0202DBD0);
  return 0U;
}

