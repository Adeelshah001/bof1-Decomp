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
M2C_UNK sub_0802ECD8(void *);
s32 sub_0802EC6C(void *arg0)
{
  unsigned long long temp_r2;
  u8 temp_r4;
  s8 *new_var;
  temp_r4 = *((u8 *) (((s8 *) arg0) + 0x50));
  if (temp_r4 == 0)
  {
    *((s16 *) (((s8 *) arg0) + 0x16)) = (s16) temp_r4;
    temp_r2 = ((*((s32 *) (((s8 *) arg0) + 0x14))) & 0xFF000000) | 0x40000;
    *((s32 *) (((s8 *) arg0) + 0x14)) = temp_r2;
    if ((*((u16 *) 0x03002484)) == 0x154)
    {
      *((s32 *) (((s8 *) arg0) + 0x14)) = (s32) (temp_r2 & 0xFF000000);
 do { new_var = (s8 *) arg0; *((u16 *) (((s8 *) arg0) + 6)) = (u16) ((*((u16 *) (new_var + 6))) - 0x20); } while (0);
    }
    *((s32 *) (((s8 *) arg0) + 0x10)) = (s32) temp_r4;
    *((s16 *) (((s8 *) arg0) + 0x46)) = (s16) temp_r4;
    *((s16 *) (((s8 *) (arg0 + 0x46)) + 4)) = (s16) temp_r4;
    temp_r4 = 0x50;
    *((s32 *) (((s8 *) arg0) + 0x48)) = (s32) (((*((s32 *) (((s8 *) arg0) + 0x48))) & 0xFF000000) | 0x3000);
    *((u8 *) (((s8 *) arg0) + temp_r4)) = 2U;
  }
  else
  {
    sub_0802ECD8(arg0);
  }
  return 0;
}
