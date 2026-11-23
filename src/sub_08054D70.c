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
M2C_UNK sub_08037C98(void *, s32);
M2C_UNK sub_0803A8EC(void *);
M2C_UNK sub_080470B4(void *);
M2C_UNK sub_08054DBC(void *);
extern M2C_UNK sub_08054460;
void sub_08054D70(void *arg0)
{
  u16 temp_r0;
  u8 temp_r0_2;
  sub_08037C98(arg0, 0);
  sub_080470B4(arg0);
  temp_r0 = *((u16 *) (((s8 *) arg0) + 0x2C));
  if (((u32) temp_r0) < ((u32) (*((u16 *) (((s8 *) arg0) + 6)))))
  {
    *((u16 *) (((s8 *) arg0) + 6)) = temp_r0;
    temp_r0_2 = (*((u8 *) (((s8 *) arg0) + 0x54)) = (*((u8 *) (((s8 *) arg0) + 0x54))) + 1);
    if (temp_r0_2 == 6)
    {
      *((M2C_UNK **) (((s8 *) arg0) + 0x78)) = &sub_08054460;
    }
    else
    {
      sub_08054DBC(arg0);
    }
  }
  sub_0803A8EC(arg0);
}

