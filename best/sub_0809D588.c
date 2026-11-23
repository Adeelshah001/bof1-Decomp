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
M2C_UNK sub_0805B15C();
M2C_UNK sub_0805B568(s32, s32, s32, s32, s32);
void sub_0809D588(void)
{
  int new_var;
  u16 temp_r0;
  int new_var2;
  sub_0805B15C();
  sub_0805B568(0x9060, 0x8048, 0, 0, 0x6000);
  sub_0805B568(0x8080, 0x8048, 0, 0, 0x6000);
  *((s16 *) 0x03005080) = 0x19;
  temp_r0 = 0x03005050;
  if (((*((u16 *) (((s8 *) ((void *) temp_r0)) + 0))) == 0x19) && ((*((u16 *) (((s8 *) ((void *) temp_r0)) + 0x10))) == 0x19))
  {
    temp_r0 = (*((u16 *) 0x03005000)) - 1;
    *((u16 *) 0x03005000) = temp_r0;
    new_var = 0x10;
    new_var2 = 0xF;
    if ((temp_r0 << new_var) == 0)
    {
      *((u8 *) (((s8 *) ((void *) 0x03004410)) + new_var2)) = (u8) ((*((u8 *) (((s8 *) ((void *) 0x03004410)) + 0xF))) + 1);
      return;
    }
    sub_0805B568(0xC008, 0x4008, 7, 0, 0x100);
    sub_0805B568(0xC040, 0x4008, 7, 0, 0x107);
    return;
  }
  sub_0805B568(0xC008, 0x4008, 7, 0, 0x100);
  sub_0805B568(0xC040, 0x4008, 7, 0, 0x107);
}

