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
void sub_08034E74(void *arg0)
{
  int new_var;
  new_var = 0x80 | (*((u8 *) (((s8 *) arg0) + 0xB8)));
  *((u8 *) (((s8 *) arg0) + 0xB8)) = (u8) new_var;
  *((s32 *) (((s8 *) arg0) + 0x88)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x88))) + 2);
}

