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
M2C_UNK sub_08083BB4();
M2C_UNK sub_0808FF80(void *);
void sub_08090018(void *arg0)
{
  s8 *new_var3;
  char new_var4;
  int new_var2;
  s8 *new_var;
  sub_08083BB4();
  new_var3 = (s8 *) arg0;
  new_var4 = (new_var2 = 0xC);
  new_var = new_var3;
  *((s8 *) (0x4D + new_var)) = new_var4;
  sub_0808FF80(arg0);
}

