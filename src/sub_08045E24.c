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
s32 sub_08038058(s32);
M2C_UNK sub_0803A974(void *);
extern M2C_UNK sub_0804601C;
void sub_08045E24(void *arg0)
{
  s8 *new_var2;
  s8 *new_var;
  new_var2 = (new_var = (s8 *) ((void *) 0x03004830)) + 0x10;
  if (((sub_08038058(0x18) << 0x18) != 0) && ((*((u8 *) new_var2)) == 0))
  {
    *((M2C_UNK **) (((s8 *) arg0) + 0x64)) = &sub_0804601C;
  }
  sub_0803A974(arg0);
}

