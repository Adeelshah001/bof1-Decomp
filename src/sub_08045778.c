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
M2C_UNK sub_0803EE38(void *);
s32 sub_080448A4(void *, s32);
extern M2C_UNK sub_08045D04;
void sub_08045778(void *arg0)
{
  int new_var;
  if (((sub_080448A4(arg0, 0xC) << 0x18) != 0) && ((*((u8 *) (((s8 *) arg0) + 0x60))) != 0))
  {
    sub_0803EE38(arg0);
    return;
  }
  *((M2C_UNK **) (((s8 *) arg0) + 0x64)) = &sub_08045D04;
  sub_08037FC4(arg0, 0x12);
  new_var = 0x10 | (*((u8 *) (((s8 *) arg0) + 0x3A)));
  *((u8 *) (((s8 *) arg0) + 0x3A)) = (u8) new_var;
  *((s16 *) (((s8 *) arg0) + 0x1C)) = 0xA0;
}

