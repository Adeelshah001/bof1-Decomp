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
s32 sub_0805CD90(u16);
s32 sub_0805D704(u16, s8 *);
s32 sub_0805D6A8(u16 arg0, s8 *arg1)
{
  s32 var_r6;
  u16 temp_r5;
  u16 new_var;
 do { temp_r5 = arg0; var_r6 = 0; *arg1 = 0; new_var = temp_r5; if ((((sub_0805CD90(new_var) << 2) << 22) != 0) && ((sub_0805D704(new_var, arg1) << 0x18) == 0)) { var_r6 = 1; if (1) { } } return var_r6; } while (0);
}
