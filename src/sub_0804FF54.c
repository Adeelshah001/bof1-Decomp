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
M2C_UNK sub_08037C98(void *, s32);
M2C_UNK sub_0803A974(void *);
M2C_UNK sub_08050150(void *);
void sub_0804FF54(void *arg0)
{
  int new_var;
  if (!(3 & (*((u8 *) (((s8 *) arg0) + 0x54)))))
  {
    sub_08050150(arg0);
  }
  new_var = 0x30 | (*((u8 *) (((s8 *) arg0) + 0x41)));
  *((u8 *) (((s8 *) arg0) + 0x41)) = (u8) new_var;
  sub_08037C98(arg0, 0);
  sub_0803A974(arg0);
  *((s16 *) (((s8 *) arg0) + 0x2C)) = (s16) ((*((u16 *) (((s8 *) arg0) + 6))) + 0x10);
}

