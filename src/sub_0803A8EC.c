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
M2C_UNK sub_0803A508();
M2C_UNK sub_0803A848(void *);
M2C_UNK sub_0803A898(void *);
M2C_UNK sub_0803A928(void *);
s32 sub_0803A8EC(void *arg0)
{
  u8 temp_r1;
  sub_0803A508();
  ;
  if (0x80 & (*((u8 *) (((s8 *) arg0) + 0x3A))))
  {
    sub_0803A848(arg0);
  }
  else
    if (0x20 & (*((u8 *) (((s8 *) arg0) + 0x3A))))
  {
    sub_0803A928(arg0);
  }
  else
  {
    sub_0803A898(arg0);
  }
  return 0;
}

