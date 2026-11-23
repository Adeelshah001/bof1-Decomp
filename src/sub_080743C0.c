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
M2C_UNK sub_08074378(s32, void *);
M2C_UNK sub_080743A0(s32, s32);
void sub_080743C0(s32 arg0, void *arg1, s32 arg2)
{
  u8 new_var;
  new_var = *((u8 *) (((s8 *) arg1) + 0xF1));
  if (new_var & 0x80)
  {
    sub_080743A0(arg0, arg2);
    return;
  }
  sub_08074378(arg0, arg1);
}

