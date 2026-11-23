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
M2C_UNK sub_08000248(s32);
M2C_UNK sub_0805C394();
M2C_UNK sub_0805C430();
void sub_0805C458(void)
{
  s8 *new_var;
  new_var = (s8 *) ((void *) 0x03004620);
  *((u8 *) (new_var + 2)) = (u8) (*((u8 *) 0x030023D0));
  sub_08000248(1);
  sub_0805C430();
  sub_0805C394();
}

