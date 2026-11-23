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
M2C_UNK sub_080380C0(s32);
M2C_UNK sub_080382A4();
M2C_UNK sub_0807B27C(void *);
M2C_UNK sub_08083300(void *, s32);
M2C_UNK sub_0808B31C(void *, s32);
void sub_0808B2D8(void *arg0)
{
  unsigned int temp_r0;
  u8 temp_r0_2;
  u8 *new_var;
  sub_080382A4();
  new_var = (u8 *) (((s8 *) arg0) + 0x54);
  temp_r0 = (*((u8 *) (((s8 *) arg0) + 0x54))) - 1;
  *new_var = temp_r0;
  temp_r0_2 = temp_r0;
  if (temp_r0_2 != 0)
  {
    sub_0807B27C(arg0);
    return;
  }
  *((u8 *) (((s8 *) arg0) + 0x51)) = temp_r0_2;
  sub_080380C0(*((s32 *) (((s8 *) arg0) + 0x74)));
  sub_08083300(arg0, 0x22);
  sub_0808B31C(arg0, 0x14);
}

