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
M2C_UNK sub_0802CCEC(void *);
u16 sub_08037C98(void *, s32);
void sub_080328F8(void *arg0)
{
  u16 temp_r0;
  int new_var;
  temp_r0 = sub_08037C98(arg0, 1);
  if (temp_r0 == 0)
  {
    *((s8 *) (((s8 *) arg0) + 0x4D)) = (s8) temp_r0;
    new_var = 0x20 | (*((u8 *) (((s8 *) arg0) + 0x41)));
    *((u8 *) (((s8 *) arg0) + 0x41)) = (u8) new_var;
    sub_0802CCEC(arg0);
  }
}

