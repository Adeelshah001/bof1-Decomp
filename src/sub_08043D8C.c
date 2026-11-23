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
s32 sub_0800409C(s32, u8, s32, s32);
void sub_08043D8C(s32 arg0)
{
  s32 new_var;
  new_var = arg0 << 0x18;
  if (sub_0800409C(0x0202DBD0, (u8) ((((u32) new_var) >> 0x17) + 1), 0x500, 1) != 0)
  {
    loop_1:
    goto loop_1;

  }
}

