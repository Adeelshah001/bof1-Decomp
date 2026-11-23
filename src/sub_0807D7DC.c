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
M2C_UNK sub_0807B248(void *);
volatile int sub_0807CA34(void *);
M2C_UNK sub_0807CF2C(void *);
void sub_0807D7DC(void *arg0)
{
  void *temp_r2;
  unsigned int new_var2;
  void *new_var3;
  u8 *new_var;
  temp_r2 = *((void **) (((s8 *) arg0) + 0x78));
  new_var3 = (void *) 0x03004F30;
  if (0x80 & (*((u8 *) (((s8 *) temp_r2) + 0xF1))))
  {
    sub_0807CF2C(arg0);
    return;
  }
  new_var = &(*((u8 *) (((s8 *) temp_r2) + 0x41)));
  new_var2 = (u8) (*new_var);
  *((u8 *) (0x41 + ((s8 *) arg0))) = new_var2;
  sub_0807B248(arg0);
  if ((float) ((!(0xA0 & (*((u8 *) (((s8 *) new_var3) + 9))))) && (!(0x80 & (*((u8 *) (((s8 *) arg0) + 0xF1)))))))
  {
    sub_0807CA34(arg0);
  }
}

