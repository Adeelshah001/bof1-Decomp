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
M2C_UNK sub_0803EF2C(void *);
s32 sub_0807B288();
M2C_UNK sub_0807CA34(void *);
void sub_0807D368(void *arg0)
{
  void *new_var3;
  void *new_var;
  s32 new_var2;
  new_var2 = sub_0807B288();
  if ((new_var2 << 0x10) == 0)
  {
    sub_0803EF2C(arg0);
    return;
  }
  new_var = arg0;
  new_var3 = (void *) 0x03004F30;
  if ((!(0xA0 & (*((u8 *) (((s8 *) new_var3) + 9))))) && (!(0x80 & (*((u8 *) (((s8 *) new_var) + 0xF1))))))
  {
    sub_0807CA34(new_var);
  }
}

