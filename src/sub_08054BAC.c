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
M2C_UNK sub_0803A8EC(void *);
void sub_08054BAC(void *arg0)
{
  u8 new_var;
  *((s32 *) (((s8 *) arg0) + 0x78)) = 0x08054C69;
  new_var = (u8) (0x30 | (*((u8 *) (((s8 *) arg0) + 0x41))));
  *((u8 *) (((s8 *) arg0) + 0x41)) = new_var;
  sub_08037FC4(arg0, 4);
  sub_0803A8EC(arg0);
}

