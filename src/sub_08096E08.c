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
M2C_UNK sub_08095EFC(void *);
void sub_08096E08(void *arg0, s8 arg1, s16 arg2, s16 arg3)
{
  int new_var2;
  u8 *new_var;
  *((s8 *) (((s8 *) arg0) + 0x61)) = arg1;
 do { *((s16 *) (((s8 *) arg0) + 2)) = arg2; *((s16 *) (((s8 *) arg0) + 6)) = arg3; *((s16 *) (((s8 *) arg0) + 0x38)) = 0xA0; new_var = (u8 *) (((s8 *) arg0) + 0x51); if ((*new_var) == 0) { new_var2 = 0x11; *((s8 *) (((s8 *) arg0) + 0x3B)) = new_var2; } *((s8 *) (((s8 *) arg0) + 0x54)) = 3; sub_08037FC4(arg0, 4); sub_08095EFC(arg0); } while (0);
}
