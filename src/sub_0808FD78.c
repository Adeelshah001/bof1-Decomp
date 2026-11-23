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
M2C_UNK sub_080382A4(void *);
void *sub_0807C638(void *, s32);
M2C_UNK sub_0808FF80(void *);
M2C_UNK sub_0809005C(void *, u8);
void sub_0808FD78(void *arg0)
{
  long long temp_r0_2;
  u8 temp_r0_3;
  void *temp_r0;
  if (!(1 & (*((u8 *) (((s8 *) arg0) + 0x54)))))
  {
    temp_r0 = sub_0807C638(arg0, 0);
    *((u16 *) (((s8 *) temp_r0) + 0x2C)) = (u16) ((*((u16 *) (((s8 *) temp_r0) + 0x2C))) + 0x30);
  }
  sub_080382A4(arg0);
  temp_r0_2 = (*((u8 *) (((s8 *) arg0) + 0x54))) - 1;
  *((u8 *) (((s8 *) arg0) + 0x54)) = temp_r0_2;
  temp_r0_3 = temp_r0_2;
  if (temp_r0_3 != 0)
  {
    sub_0808FF80(arg0);
    return;
  }
  *((u8 *) (((s8 *) arg0) + 0x51)) = temp_r0_3;
  sub_0809005C(arg0, (u8) ((*((u8 *) (((s8 *) arg0) + 0x4D))) + 2));
}

