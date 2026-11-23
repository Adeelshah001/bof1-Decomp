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
s32 sub_0803FEA8();
M2C_UNK sub_08040A08(void *, void *);
void sub_0804004C(void *arg0, void *arg1)
{
  s16 temp_r2_2;
  s32 temp_r2;
  u16 temp_r0;
  u16 temp_r1;
  u16 temp_r1_2;
  u8 temp_r1_3;
  if ((sub_0803FEA8() << 0x18) == 0)
  {
    do
    {
      temp_r1 = (*((u16 *) (((s8 *) arg1) + 4))) - (*((u16 *) (((s8 *) arg0) + 6)));
    }
    while (0);
    if (temp_r1 & 0x8000)
    {
      temp_r2 = (((u32) ((((~temp_r1) << 13) << 3) + 0x10000)) >> 0x13) * 2;
      temp_r1_2 = temp_r2 - (*((u8 *) (((s8 *) arg1) + 0x23)));
      if ((temp_r1_2 != 0) && (temp_r1_2 & 0x8000))
      {
        *((s16 *) (((s8 *) arg1) + 0x1A)) = (s16) ((~temp_r1_2) + 1);
        *((u16 *) (((s8 *) arg1) + 0x16)) = (u16) (((temp_r2_2 = temp_r2) * 0x10) + (*((u16 *) (((s8 *) arg1) + 0x16))));
        *((u16 *) (((s8 *) arg1) + 0x14)) = (u16) (temp_r2 + (*((u16 *) (((s8 *) arg1) + 0x14))));
        sub_08040A08(arg1, arg0);
      }
    }
    else
    {
      temp_r0 = temp_r1 - 0xF0;
      if ((temp_r1 - 0xF0) & 0x8000)
      {
        temp_r2_2 = (((u32) (((~temp_r0) + 1) << 0x10)) >> 0x13) * 2;
        if (temp_r2_2 != 0)
        {
          temp_r1_3 = *((u8 *) (((s8 *) arg1) + 0x23));
          if ((temp_r2_2 - temp_r1_3) & 0x8000)
          {
            *((s16 *) (((s8 *) arg1) + 0x1A)) = temp_r2_2;
          }
          else
          {
            *((s16 *) (((s8 *) arg1) + 0x1A)) = (s16) temp_r1_3;
          }
          sub_08040A08(arg1, arg0);
        }
      }
    }
  }
}

