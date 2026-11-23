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
M2C_UNK sub_0804608C(void *, u16);
void sub_08046004(void *arg0)
{
  s8 *new_var;
  new_var = (s8 *) ((void *) 0x03002AB0);
  *((u16 *) (((s8 *) arg0) + 2)) = (u16) ((*((u16 *) (new_var + 2))) + 0x11);
  sub_0804608C(arg0, *((u16 *) (((s8 *) arg0) + 2)));
}

