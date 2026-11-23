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
M2C_UNK sub_0803A8EC(void *);
M2C_UNK sub_0804625C(void *);
extern M2C_UNK sub_08046328;
void sub_0804636C(void *arg0)
{
  unsigned int temp_r1;
  u8 new_var;
  ;
  temp_r1 = *((u8 *) (((s8 *) arg0) + 0x54));
  if (temp_r1 != 0xF)
  {
    sub_0804625C(arg0);
    return;
  }
  *((M2C_UNK **) (((s8 *) arg0) + 0x64)) = &sub_08046328;
  *((u8 *) (((s8 *) arg0) + 0x3B)) = (u8) ((temp_r1 & (*((u8 *) (((s8 *) arg0) + 0x3B)))) ^ 7);
  sub_0803A8EC(arg0);
}

