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
int sub_0807CA34(void *);
void sub_0807CA08(void *arg0)
{
  void *new_var;
  new_var = (void *) 0x03004F30;
  if ((!(0xA0 & (*((u8 *) (((s8 *) new_var) + 9))))) && (!(0x80 & (*((u8 *) (((s8 *) arg0) + 0xF1))))))
  {
    sub_0807CA34(arg0);
  }
}

