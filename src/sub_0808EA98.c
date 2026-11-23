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
M2C_UNK sub_0807C600(s32, s32);
s32 sub_08084594();
void sub_0808EA98(s32 arg0)
{
  int new_var2;
  s8 *new_var;
  new_var2 = 0x10;
  if (sub_08084594() != 0)
  {
    new_var = ((s8 *) ((void *) 0x03004F50)) + new_var2;
    *((s8 *) new_var) = 0;
    *((s8 *) (((s8 *) ((void *) 0x03004F50)) + 0x5C)) = 0;
    sub_0807C600(arg0, 2);
  }
}

