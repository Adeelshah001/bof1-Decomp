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
M2C_UNK sub_08037FC4(void *, s32);
s32 sub_0807B2BC();
M2C_UNK sub_08083484(void *);
void sub_08089608(void *arg0)
{
  int new_var;
  if ((sub_0807B2BC() << 0x10) == 0)
  {
    sub_08083484(arg0);
    new_var = 8;
    *((s8 *) (((s8 *) arg0) + 0x4D)) = new_var;
    sub_08037FC4(arg0, 2);
  }
}

