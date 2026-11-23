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
void *sub_0803ED98();
inline u16 inline_fn(u16 arg0)
{
  return arg0;
}

void sub_080066BC(void *arg0)
{
  void *temp_r0;
  temp_r0 = sub_0803ED98();
  *((void **) 0x03000840) = temp_r0;
  if (temp_r0 != NULL)
  {
    *((s8 *) (((s8 *) temp_r0) + 0x3B)) = 0x14;
    *((s8 *) (((s8 *) (*((void **) 0x03000840))) + 0x3C)) = 7;
    *((s8 *) (((s8 *) (*((void **) 0x03000840))) + 0x3A)) = 1;
  }
  *((u16 *) (((s8 *) arg0) + 0x46)) = (u16) (*((u16 *) (((s8 *) arg0) + 2)));
  *((u16 *) (((s8 *) (arg0 + 0x46)) + 4)) = inline_fn((u16) (*((u16 *) (((s8 *) arg0) + 6))));
  *((s32 *) (((s8 *) arg0) + 0x68)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x68))) + 2);
}

