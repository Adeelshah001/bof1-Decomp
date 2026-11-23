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
M2C_UNK sub_08093640();
M2C_UNK sub_08095B64(void *);
M2C_UNK sub_08095B7C(void *);
void sub_08095BC4(void *arg0)
{
  int new_var;
  if (new_var)
  {
    sub_08093640();
    new_var = *((u8 *) (((s8 *) arg0) + 0x4C));
  }
  else
  {
    sub_08093640();
    new_var = *((u8 *) (((s8 *) arg0) + 0x4C));
  }
  if (new_var == 0)
  {
    sub_08095B7C(arg0);
    return;
  }
  sub_08095B64(arg0);
}

