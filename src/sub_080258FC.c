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
M2C_UNK sub_080017EC(s32);
void sub_080258FC(void)
{
  s8 *new_var2;
  s32 *new_var;
  sub_080017EC(0x99);
  new_var2 = (s8 *) ((void *) 0x03003420);
  new_var = (s32 *) (new_var2 + 0x68);
  *((s32 *) (new_var2 + 0x68)) = (s32) ((*new_var) + 1);
}

