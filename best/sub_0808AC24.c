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
s32 sub_0807B288();
M2C_UNK sub_0807CC84(void *, s32);
M2C_UNK sub_08083300(void *, s32);
M2C_UNK sub_0808AC88(void *);
M2C_UNK sub_0808ACB8(void *);
void sub_0808AC24(void *arg0)
{
  int new_var2;
  s8 *new_var;
  if ((sub_0807B288() << 0x10) == 0)
  {
    sub_0808ACB8(arg0);
    return;
  }
  if (((u32) ((u8) (*((u16 *) (((s8 *) arg0) + 0x24))))) > 7U)
  {
    if ((*((u8 *) (((s8 *) arg0) + 0x50))) != 0)
    {
      sub_0808AC88(arg0);
      return;
    }
    *((u8 *) (((s8 *) arg0) + 0x50)) = 1U;
    sub_08083300(arg0, 0x1E);
    sub_0807CC84(arg0, 0x5860);
    new_var2 = 0xF7C;
    arg0 = *((void **) ((new_var = (s8 *) arg0) + 0x74));
    *((s16 *) (((s8 *) arg0) + 2)) = new_var2;
    new_var = ((s8 *) arg0) + 6;
    new_var2 = 0x2F4D;
    *((s16 *) new_var) = new_var2;
  }
}

