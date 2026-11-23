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
M2C_UNK sub_08066F5C(s32);
void sub_08069728(void)
{
  void *new_var;
 do { if (1) { } } while (0);
  sub_08066F5C(0);
  new_var = (void *) 0x03004620;
  *((s8 *) (((s8 *) new_var) + 6)) = 0;
}
