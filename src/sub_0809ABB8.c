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
M2C_UNK sub_08038128(void *, void *, s32, s32);
M2C_UNK sub_08038264(void *);
M2C_UNK sub_0803A8EC(void *);
M2C_UNK sub_0803EE6C(void *);
void sub_0809ABB8(void *arg0)
{
  u8 *new_var;
  sub_08038128(arg0, *((void **) (((s8 *) arg0) + 0x78)), 0x10, 0x10);
  sub_08038264(arg0);
  new_var = &(*((u8 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x78)))) + 2)));
  if (((u32) ((u8) ((*((u8 *) (((s8 *) arg0) + 2))) + 0x10))) < ((u32) (*new_var)))
  {
    if (((u32) ((u8) ((*((u8 *) 0x03001864)) - 0x10))) > 1U)
    {
      sub_0803A8EC(arg0);
    }
  }
  else
  {
    sub_0803EE6C(arg0);
    *((s8 *) (((s8 *) arg0) + 0x54)) = 0;
    *((s8 *) (((s8 *) (arg0 + 0x54)) + 1)) = 0;
  }
}

