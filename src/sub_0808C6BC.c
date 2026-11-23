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
s32 sub_0807B2BC(void *);
M2C_UNK sub_08083BB4(void *);
M2C_UNK sub_0808C858(void *);
void sub_0808C6BC(void *arg0)
{
  u8 temp_r0;
  u8 temp_r0_2;
  temp_r0 = *((u8 *) (((s8 *) arg0) + 0x50));
  if (temp_r0 != 1)
  {
    if (temp_r0 == 2)
    {
      sub_0808C858(arg0);
      return;
    }
    temp_r0_2 = (*((u8 *) (((s8 *) arg0) + 0x54))) - 1;
    *((u8 *) (((s8 *) arg0) + 0x54)) = (*((u8 *) (((s8 *) arg0) + 0x54))) - 1;
    if ((temp_r0_2 << 0x18) == 0)
    {
      *((u8 *) (((s8 *) arg0) + 0x50)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x50))) + 1);
      goto block_5;
    }
  }
  else
  {
    block_5:
    if (((sub_0807B2BC(arg0) << 0x10) != 0) && (((u8) (*((u16 *) (((s8 *) arg0) + 0x24)))) == 8))
    {
      sub_08083BB4(arg0);
      *((u8 *) (((s8 *) arg0) + 0x50)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x50))) + 1);
    }

  }
}

