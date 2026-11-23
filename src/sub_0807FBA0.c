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
M2C_UNK sub_0807FC04(s32, void *);
M2C_UNK sub_0808000C(s32, void *);
void sub_0807FBA0(s32 arg0, void *arg1)
{
  u8 new_var;
  if ((((*((u8 *) (((s8 *) arg1) + 0x3C))) == 0x20) && ((*((u8 *) (((s8 *) arg1) + 0xDA))) == 0)) && ((*((u8 *) (((s8 *) arg1) + 0xDB))) == 0))
  {
    *((s8 *) (((s8 *) arg1) + 0xE0)) = 0xA;
    new_var = 1 | (*((u8 *) (((s8 *) arg1) + 0x7D)));
    *((u8 *) (((s8 *) arg1) + 0x7D)) = (u8) new_var;
    sub_0808000C(arg0, arg1);
    return;
  }
  *((s8 *) (((s8 *) arg1) + 0xE0)) = 2;
  new_var = (u8) (1 | (*((u8 *) (((s8 *) arg1) + 0x7D))));
  *((u8 *) (((s8 *) arg1) + 0x7D)) = new_var;
  sub_0807FC04(arg0, arg1);
}

