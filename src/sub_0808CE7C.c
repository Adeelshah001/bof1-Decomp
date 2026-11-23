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
M2C_UNK sub_08073470();
void sub_0808CE7C(void *arg0)
{
  unsigned short new_var2;
  int new_var;
  *((s8 *) 0x03003410) = 0;
  sub_08073470();
  new_var = 0x41;
  new_var2 = 8;
  *((s8 *) (((s8 *) arg0) + new_var)) = new_var2;
}

