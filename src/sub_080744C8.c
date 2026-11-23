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
M2C_UNK sub_08074500(void *);
M2C_UNK sub_08074510(void *);
void sub_080744C8(void *arg0)
{
  int new_var;
  *((s8 *) (((s8 *) arg0) + 0x10)) = 0x28;
  *((s8 *) (((s8 *) arg0) + 0x5D)) = 0x28;
  new_var = (new_var = 5);
  *((s8 *) (((s8 *) ((void *) 0x03004F30)) + new_var)) = 0xA;
  if ((*((u8 *) (((s8 *) arg0) + 0x58))) != 0)
  {
    sub_08074500(arg0);
    return;
  }
  sub_08074510(arg0);
}

