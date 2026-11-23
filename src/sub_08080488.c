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
void sub_08080488(void *arg0)
{
  void *temp_r2;
  *((u8 *) (((s8 *) arg0) + 0x7D)) = (u8) (0xF0 & (*((u8 *) (((s8 *) arg0) + 0x7D))));
  temp_r2 = arg0 + 0xE0;
  *((s8 *) (((s8 *) arg0) + 0xE0)) = 8;
  *((u8 *) (((s8 *) (arg0 + 0xE0)) + 2)) = (u8) ((0xF0 & (*((u8 *) (((s8 *) (arg0 + 0xE0)) + 2)))) | (*((u8 *) (((s8 *) arg0) + 0x3B))));
}

