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
void sub_080196C4(void *arg0)
{
  u8 *new_var2;
  void *new_var3;
  s8 *new_var4;
  int new_var;
  s32 *new_var5;
  short new_var6;
  if (!new_var3)
  {
  }
 new_var3 = arg0; ;
  new_var6 = (u8) (8 | (*((u8 *) (((s8 *) new_var3) + 0x6D))));
  new_var5 = &(*((s32 *) ((new_var4 = (s8 *) new_var3) + 0x68)));
  *((u8 *) (0x6D + ((s8 *) new_var3))) = new_var6;
  new_var = *new_var5;
  new_var = new_var + 2;
  *((s32 *) (((s8 *) new_var3) + 0x68)) = (s32) new_var;
}
