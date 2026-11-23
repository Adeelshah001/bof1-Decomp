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
M2C_UNK sub_080380E8();
M2C_UNK sub_0807CA34(void *);
M2C_UNK sub_0807D368(void *);
void sub_0807D318(void *arg0)
{
  void *new_var;
  sub_080380E8();
  if (((u32) (*((u8 *) (((s8 *) arg0) + 0xE6)))) >= ((u32) (*((u8 *) (((s8 *) arg0) + 6)))))
  {
    new_var = (void *) 0x03004F30;
    if ((!(0xA0 & (*((u8 *) (((s8 *) new_var) + 9))))) && (!(0x80 & (*((u8 *) (((s8 *) arg0) + 0xF1))))))
    {
      sub_0807CA34(arg0);
    }
  }
  else
  {
    *((s8 *) (((s8 *) arg0) + 0x4C)) = 0xC;
    sub_0807D368(arg0);
  }
}

