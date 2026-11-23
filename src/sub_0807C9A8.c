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
M2C_UNK sub_0807B2DC(s32);
M2C_UNK sub_0807CA34(void *);
M2C_UNK sub_0807CF2C(void *);
M2C_UNK sub_0808B984();
void sub_0807C9A8(void *arg0)
{
  u16 temp_r0;
  s8 *new_var;
  void *temp_r1;
  sub_0808B984();
  temp_r1 = *((void **) (((s8 *) arg0) + 0x6C));
  *((u16 *) (((s8 *) arg0) + 2)) = (u16) (*((u16 *) (((s8 *) temp_r1) + 2)));
  temp_r0 = (*((u16 *) (((s8 *) temp_r1) + 6))) - 0x10;
  *((u16 *) (((s8 *) arg0) + 6)) = temp_r0;
  *((u16 *) (((s8 *) arg0) + 0x2C)) = temp_r0;
  new_var = (s8 *) ((void *) 0x03004F30);
  if (0x80 & (*((u8 *) (((s8 *) temp_r1) + 0xF1))))
  {
    sub_0807CF2C(arg0);
    return;
  }
  sub_0807B2DC(5);
  if ((!(0xA0 & (*((u8 *) (new_var + 9))))) && (!(0x80 & (*((u8 *) (((s8 *) arg0) + 0xF1))))))
  {
    sub_0807CA34(arg0);
  }
}

