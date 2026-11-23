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
s32 sub_0807B288(void *);
M2C_UNK sub_0807CA34(void *);
M2C_UNK sub_0807CF2C(void *);
inline void *inline_fn()
{
  return (void *) 0x03004F30;
}

void sub_0807C728(void *arg0)
{
  void *temp_r0;
  if (((*((u16 *) (((s8 *) arg0) + 0x24))) == 0x22) && ((*((u8 *) (((s8 *) arg0) + 0x50))) == 0))
  {
    temp_r0 = *((void **) (((s8 *) arg0) + 0x74));
    *((u8 *) (((s8 *) temp_r0) + 0x4C)) = (u8) ((*((u8 *) (((s8 *) temp_r0) + 0x4C))) + 1);
    *((u8 *) (((s8 *) arg0) + 0x50)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x50))) + 1);
  }
  if ((sub_0807B288(arg0) << 0x10) != 0)
  {
    if ((!(0xA0 & (*((u8 *) (((s8 *) inline_fn()) + 9))))) && (!(0x80 & (*((u8 *) (((s8 *) arg0) + 0xF1))))))
    {
      sub_0807CA34(arg0);
    }
  }
  else
  {
    sub_0807CF2C(arg0);
  }
}

