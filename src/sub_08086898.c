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
M2C_UNK sub_08038278(void *);
M2C_UNK sub_0807C638(void *, s32);
M2C_UNK sub_08083BB4(void *);
void sub_08086898(void *arg0)
{
  unsigned int temp_r0;
  u8 temp_r0_2;
  u8 temp_r0_3;
  void *temp_r1;
  temp_r0 = (*((u8 *) (((s8 *) arg0) + 0x54))) - 1;
  *((u8 *) (((s8 *) arg0) + 0x54)) = temp_r0;
  if ((temp_r0 << 0x18) == 0)
  {
    *((u8 *) (((s8 *) arg0) + 0x54)) = 4U;
    sub_0807C638(arg0, 2);
  }
  sub_08038278(arg0);
  temp_r1 = *((void **) (((s8 *) arg0) + 0x78));
  temp_r0_2 = (*((u8 *) (((s8 *) temp_r1) + 2))) - 0x16;
  if (((u32) temp_r0_2) < ((u32) (*((u8 *) (((s8 *) arg0) + 2)))))
  {
    *((u8 *) (((s8 *) arg0) + 2)) = temp_r0_2;
    goto block_6;
  }
  temp_r0_3 = (*((u8 *) (((s8 *) temp_r1) + 6))) - 8;
  if (((u32) temp_r0_3) < ((u32) (*((u8 *) (((s8 *) arg0) + 6)))))
  {
    *((u8 *) (((s8 *) arg0) + 6)) = temp_r0_3;
    block_6:
    *((s16 *) (((s8 *) arg0) + 0x20)) = 1;

    *((s8 *) (((s8 *) arg0) + 0x4D)) = 0xC;
    sub_08083BB4(arg0);
  }
}

