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
M2C_UNK sub_08033B88(s32, s32);
void sub_0800A46C(void *arg0)
{
  s8 *new_var2;
  s8 *new_var;
  sub_08033B88(0x03002AB0, 0);
  new_var2 = (s8 *) ((void *) 0x03003520);
  new_var = new_var2 + 0x68;
  *((s32 *) new_var) = (s32) ((*((s32 *) (new_var2 + 0x68))) + 2);
  *((s32 *) (((s8 *) arg0) + 0x68)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x68))) + 2);
}

