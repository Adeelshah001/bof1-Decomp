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
M2C_UNK sub_080380F4(void *, s32, s32, s32);
M2C_UNK sub_0803815C(void *);
M2C_UNK sub_08038278(void *);
M2C_UNK sub_0807B248(void *);
M2C_UNK sub_0807D760(void *);
M2C_UNK sub_0807D7B0(void *);
void sub_0807C814(void *arg0)
{
  s32 new_var;
  if ((*((u8 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x6C)))) + 0x4D))) != 0x16)
  {
    new_var = *((s32 *) (((s8 *) arg0) + 0x78));
    if ((*((u8 *) (((s8 *) arg0) + 0x70))) != 5)
    {
      sub_0803815C(arg0);
    }
    else
    {
      sub_080380F4(arg0, new_var, 0x10, 0x10);
    }
    sub_08038278(arg0);
    *((u16 *) (((s8 *) arg0) + 0x2C)) = (u16) (*((u16 *) (((s8 *) arg0) + 6)));
    sub_0807B248(arg0);
    sub_0807D760(arg0);
    return;
  }
  *((s8 *) (((s8 *) arg0) + 0x4D)) = 4;
  sub_0807D7B0(arg0);
}

