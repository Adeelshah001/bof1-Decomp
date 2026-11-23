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
void sub_0800B10C(void)
{
  void *new_var;
  new_var = (void *) 0x03003420;
  *((s32 *) (((s8 *) new_var) + 0x68)) = (s32) ((*((s32 *) (((s8 *) new_var) + 0x68))) + 2);
}

