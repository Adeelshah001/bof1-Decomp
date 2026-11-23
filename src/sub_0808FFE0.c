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
M2C_UNK sub_080382A4();
M2C_UNK sub_0807B248(void *);
M2C_UNK sub_0808FF80(void *);
void sub_0808FFE0(void *arg0)
{
  u16 temp_r1;
  void *temp_r0;
  int new_var;
  sub_080382A4();
  temp_r0 = *((void **) (((s8 *) arg0) + 0x78));
  *((u16 *) (((s8 *) arg0) + 0x2C)) = (u16) ((*((u16 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x78)))) + 6))) + 0x10);
  temp_r1 = *((u16 *) (((s8 *) arg0) + 6));
  if (((u32) (*((u16 *) (((s8 *) temp_r0) + 6)))) > ((u32) temp_r1))
  {
    sub_0807B248(arg0);
    return;
  }
  *((u16 *) (((s8 *) arg0) + 0x2C)) = temp_r1;
  new_var = 0xA;
  *((s8 *) (((s8 *) arg0) + 0x4D)) = new_var;
  sub_0808FF80(arg0);
}

