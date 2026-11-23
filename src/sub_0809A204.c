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
M2C_UNK sub_08037FC4(void *, s32);
M2C_UNK sub_0803EE6C(void *);
M2C_UNK sub_0807B270(void *);
void sub_0809A204(void *arg0)
{
  u8 temp_r0;
  void *temp_r1;
  temp_r0 = *((u8 *) (((s8 *) arg0) + 0x4C));
  if ((*((u8 *) (((s8 *) arg0) + 0x4C))) == 0)
  {
    *((u8 *) (((s8 *) arg0) + 0x4C)) = (u8) (temp_r0 + 1);
    sub_08037FC4(arg0, 2);
    return;
  }
  temp_r1 = *((void **) (((s8 *) arg0) + 0x78));
  if (((u32) (*((u8 *) (((s8 *) temp_r1) + 0x4C)))) > 5U)
  {
    sub_0803EE6C(arg0);
    *((s8 *) (((s8 *) arg0) + 0x54)) = 0;
    *((s8 *) (((s8 *) (arg0 - -0x54)) + 1)) = 0;
    return;
  }
  *((u8 *) (((s8 *) arg0) + 2)) = (u8) (*((u8 *) (((s8 *) temp_r1) + 2)));
  *((u8 *) (((s8 *) arg0) + 6)) = (u8) (*((u8 *) (((s8 *) temp_r1) + 6)));
  sub_0807B270(arg0);
}

