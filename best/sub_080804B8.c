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
M2C_UNK sub_0807FAC0(void *);
M2C_UNK sub_0807FF88(void *, void *, u8);
void sub_080804B8(void *arg0, void *arg1)
{
  u8 temp_r2;
  temp_r2 = *(((s8 *) arg1) + 0x3C);
  if ((temp_r2 != 0x11) && (temp_r2 != 0x22))
  {
    sub_0807FAC0(arg0);
    return;
  }
  *((s8 *) (((s8 *) arg0) + 8)) = 2;
  temp_r2 = ((*((u8 *) (((s8 *) arg1) + 0x110))) * 4) + 2;
  sub_0807FF88(arg0, arg1, (u8) temp_r2);
}

