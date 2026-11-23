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
M2C_UNK sub_08037FC4(void *, s32);
M2C_UNK sub_0807B248(void *);
unsigned int sub_0807B288(void *);
M2C_UNK sub_08083300(void *, s32);
M2C_UNK sub_08083BB4(void *);
void sub_08086224(void *arg0)
{
  u8 temp_r0;
  u8 temp_r0_2;
  u8 temp_r5;
  temp_r0 = *((u8 *) (((s8 *) arg0) + 0x50));
  if (temp_r0 == 0)
  {
    if ((sub_0807B288(arg0) << 0x10) == 0)
    {
      *((u8 *) (((s8 *) arg0) + 0x54)) = 0x1EU;
      sub_08037FC4(arg0, 0xA);
      *((u8 *) (((s8 *) arg0) + 0x50)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x50))) + 1);
      sub_08083300(arg0, 2);
    }
  }
  else
  {
    if (temp_r0 != 2)
    {
      temp_r0_2 = (*((u8 *) (((s8 *) arg0) + 0x54))) - 1;
      *((u8 *) (((s8 *) arg0) + 0x54)) = (*((u8 *) (((s8 *) arg0) + 0x54))) - 1;
      if ((temp_r0_2 << 0x18) != 0)
      {
        sub_0807B248(arg0);
        return;
      }
      *((u8 *) (((s8 *) arg0) + 0x50)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x50))) + 1);
      goto block_7;
    }
    block_7:
    temp_r5 = *((u8 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x74)))) + 0x3A));

    if (temp_r5 == 0)
    {
      sub_08083BB4(arg0);
      *((s8 *) (((s8 *) arg0) + 0x4C)) = 2;
      *((u8 *) (((s8 *) arg0) + 0x4D)) = temp_r5;
      *((u8 *) (((s8 *) (arg0 + 0x4D)) + 3)) = temp_r5;
      *((u8 *) 0x03004FAD) = temp_r5;
      sub_08037FC4(arg0, 0);
      return;
    }
    sub_0807B248(arg0);
  }
}

