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
s32 sub_080548D0(void *arg0)
{
  u8 temp_r3;
  u8 new_var;
  ;
  *((u8 *) (((s8 *) arg0) + 0x6D)) = 0xFC & (*((u8 *) (((s8 *) arg0) + 0x6D)));
  do
  {
    new_var = *(*((u8 **) (((s8 *) arg0) + 0x68)));
    *((u8 *) (((s8 *) arg0) + 0x6D)) = (u8) ((new_var & 3) | (0xFC & (*((u8 *) (((s8 *) arg0) + 0x6D)))));
  }
  while (0);
  *((u8 **) (((s8 *) arg0) + 0x68)) = (u8 *) ((*((u8 **) (((s8 *) arg0) + 0x68))) + 1);
  return 0;
}

