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
u8 sub_080545E0(void *, u8);
u8 sub_080550D4(void *arg0)
{
  u8 temp_r0;
  long new_var;
  *((u8 *) (((s8 *) arg0) + 0x6D)) = (u8) (0xBF & (*((u8 *) (((s8 *) arg0) + 0x6D))));
  temp_r0 = sub_080545E0(arg0, *((u8 *) (((s8 *) arg0) + 0x6F)));
  *((u8 *) (((s8 *) arg0) + 0x6D)) = (new_var = (u8) (0x40 | (*((u8 *) (((s8 *) arg0) + 0x6D)))));
  return temp_r0;
}

