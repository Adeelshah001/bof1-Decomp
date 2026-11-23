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
M2C_UNK sub_0803824C(void *, void *, s32, u8);
M2C_UNK sub_0803A974(void *);
M2C_UNK sub_0803EE6C(void *);
M2C_UNK sub_08050150(void *);
M2C_UNK sub_08050188(void *, u16, u16);
s32 sub_080503F0(void *);
void sub_0804F060(void *arg0)
{
  u16 temp_r0;
  int new_var;
  new_var = 0x30;
  if ((*((u16 *) (((s8 *) arg0) + 0x54))) == 0)
  {
    sub_080379D4(0x2D);
  }
  temp_r0 = (*((u16 *) (((s8 *) arg0) + 0x54)) = (*((u16 *) (((s8 *) arg0) + 0x54))) + 1);
  if (((u32) temp_r0) > 0x8FU)
  {
    if (((sub_080503F0(arg0) << 18) << 6) == 0)
    {
      sub_0803EE6C(arg0);
      return;
    }
    sub_08050188(arg0, *((u16 *) (((s8 *) arg0) + 2)), *((u16 *) (((s8 *) arg0) + 6)));
    sub_0803824C(arg0, arg0 + 4, 0x100, *((u8 *) (((s8 *) arg0) + 0x61)));
    if ((3 & (*((u16 *) (((s8 *) arg0) + 0x54)))) == 3)
    {
      sub_08050150(arg0);
    }
    goto block_7;
  }
  block_7:
  *((u8 *) (((s8 *) arg0) + 0x41)) = (u8) (new_var | (*((u8 *) (((s8 *) arg0) + 0x41))));

  sub_08037C98(arg0, 0);
  sub_0803A974(arg0);
}

