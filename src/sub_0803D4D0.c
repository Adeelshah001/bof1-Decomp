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
M2C_UNK sub_0803CAF0(u8, u16, u16);
void sub_0803D4D0(void)
{
  u8 temp_r0;
  sub_0803CAF0(*((u8 *) 0x03000978), *((u16 *) 0x03004E18), *((u16 *) 0x03004E08));
  temp_r0 = (*((u8 *) 0x03000978) = (*((u8 *) 0x03000978)) + 1);
  if (((u32) temp_r0) > 0xFU)
  {
    *((u8 *) 0x03000978) = 0;
  }
  *((s8 *) 0x030043DC) = 1;
}

