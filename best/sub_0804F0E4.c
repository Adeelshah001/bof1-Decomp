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
s32 sub_08003104();
s32 sub_08037C98(void *, s32);
M2C_UNK sub_08037FC4(void *, s32);
M2C_UNK sub_0803A974(void *);
M2C_UNK sub_0803EE6C(void *);
void sub_0804F0E4(void *arg0)
{
  s32 temp_r1_2;
  s8 *temp_r1;
  s8 *var_r1;
  s8 var_r0;
  u16 temp_r0;
  u32 temp_r2;
  void *temp_r5;
  temp_r5 = *((void **) (((s8 *) arg0) + 0xD4));
  if ((*((u8 *) (((s8 *) arg0) + 0xC9))) != 0)
  {
    *((u8 *) (((s8 *) arg0) + 0xC9)) = 0U;
    *temp_r1 = 2;
    temp_r1 = (arg0 + 0xC9) - 0x8C;
    if ((*((u8 *) (((s8 *) arg0) + 0x3B))) != 0x28)
    {
      var_r1 = temp_r1 + 4;
      var_r0 = 6;
    }
    else
    {
      var_r1 = arg0 + 0x41;
      var_r0 = 0xA;
    }
    *var_r1 = var_r0;
    *((s16 *) (((s8 *) arg0) + 0x1C)) = 0x40;
    *((s16 *) (((s8 *) arg0) + 0x2A)) = 0x74;
    sub_08037FC4(arg0, 2);
    *((u16 *) (((s8 *) arg0) + 2)) = (u16) (*((u16 *) (((s8 *) temp_r5) + 2)));
    temp_r0 = *((u16 *) (((s8 *) temp_r5) + 6));
    *((u16 *) (((s8 *) arg0) + 6)) = temp_r0;
    *((u16 *) (((s8 *) arg0) + 0x2C)) = temp_r0;
    temp_r1_2 = 7 & sub_08003104();
    temp_r2 = temp_r1_2 << 0x18;
    if (temp_r1_2 & 1)
    {
      *((u16 *) (((s8 *) arg0) + 2)) = (u16) ((temp_r2 >> 0x19) + (*((u16 *) (((s8 *) arg0) + 2))));
    }
    else
    {
      *((u16 *) (((s8 *) arg0) + 6)) = (u16) ((temp_r2 >> 0x19) + (*((u16 *) (((s8 *) arg0) + 6))));
    }
  }
  if ((sub_08037C98(arg0, 1) << 0x10) != 0)
  {
    *((u8 *) (((s8 *) arg0) + 0x41)) = (u8) (0x30 | (*((u8 *) (((s8 *) arg0) + 0x41))));
    sub_0803A974(arg0);
    return;
  }
  sub_0803EE6C(arg0);
}

