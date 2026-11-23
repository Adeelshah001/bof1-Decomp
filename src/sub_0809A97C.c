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
M2C_UNK sub_0809A9B8(void *);
void sub_0809A97C(void *arg0)
{
  u16 temp_r0;
  *((s16 *) (((s8 *) arg0) + 0x38)) = 0x20;
  temp_r0 = (*((u16 *) (((s8 *) arg0) + 6))) - 0x15;
  *((u16 *) (((s8 *) arg0) + 6)) = temp_r0;
  *((u16 *) (((s8 *) arg0) + 0x2C)) = temp_r0;
  temp_r0 = (u8) (*((u8 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x6C)))) + 0x41)));
  *((u8 *) (((s8 *) arg0) + 0x41)) = temp_r0;
  *((s8 *) (((s8 *) (arg0 + 0x41)) + 0xB)) = 2;
  sub_08037FC4(arg0, 2);
  sub_0809A9B8(arg0);
}

