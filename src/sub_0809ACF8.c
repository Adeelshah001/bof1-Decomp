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
M2C_UNK sub_08037FC4(void *, s32);
void sub_0809ACF8(void *arg0)
{
  int new_var;
  u8 *temp_r1;
  if (2 & (*((u8 *) (((s8 *) arg0) + 0x3A))))
  {
    *((u16 *) (((s8 *) arg0) + 6)) = (u16) ((*((u16 *) (((s8 *) arg0) + 6))) - 3);
    return;
  }
  new_var = 0x7F & sub_08003104();
  *((s8 *) (((s8 *) arg0) + 2)) = (s8) (new_var + 0x60);
  sub_08037FC4(arg0, 6);
  *((s8 *) (((s8 *) arg0) + 0x54)) = 8;
  temp_r1 = arg0;
  temp_r1 = (temp_r1 + 0x54) - 8;
  *temp_r1 += 1;
}

