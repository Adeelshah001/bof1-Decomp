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
M2C_UNK sub_08013324();
s32 sub_0805D6A8(s32, M2C_UNK *);
void sub_080136D0(void)
{
  M2C_UNK sp0;
  s8 *new_var;
  new_var = (s8 *) ((void *) 0x03004830);
  if ((*((u16 *) (new_var + 0x2A))) == 0x408)
  {
    *((s16 *) 0x03004120) = 0x15A;
    if ((sub_0805D6A8(0x15A, &sp0) << 0x18) == 0)
    {
      sub_08013324();
      return;
    }
    sub_080075A4(0x8735U);
    goto block_4;
  }
  block_4:
  *((s16 *) 0x03004114) = 0;

}

