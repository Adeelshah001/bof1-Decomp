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
M2C_UNK sub_080380F4(void *, s32, s32, s32);
M2C_UNK sub_08038278();
M2C_UNK sub_080914D0(void *);
void sub_08091480(void *arg0)
{
  u8 new_var;
  sub_08038278();
  *((s8 *) (((s8 *) arg0) + 0x70)) = 0;
  sub_080380F4(arg0, *((s32 *) (((s8 *) arg0) + 0x78)), 8, 0xC);
  new_var = *((u8 *) (((s8 *) arg0) + 0x61));
  if ((((new_var & 0xF0) ^ (((u32) (*((u32 *) (((s8 *) arg0) + 0x44)))) >> 8)) << 0x18) != 0)
  {
    *((s8 *) (((s8 *) arg0) + 0x4D)) = 6;
    sub_08037FC4(arg0, 4);
  }
  sub_080914D0(arg0);
}

