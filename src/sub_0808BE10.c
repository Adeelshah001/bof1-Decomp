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
M2C_UNK sub_0807CB08();
M2C_UNK sub_0808BE30(void *, s32, s32);
void sub_0808BE10(void *arg0)
{
  s8 *new_var;
  int new_var2;
  int new_var3;
  sub_0807CB08();
  new_var = (s8 *) arg0;
  new_var3 = 0x13;
  new_var2 = 0x1E;
  *((s8 *) (new_var - -0xE1)) = new_var3;
  sub_0808BE30(arg0, 4, new_var2);
}

