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
M2C_UNK sub_0805B358(s32, s32, s32, s32, s32);
M2C_UNK sub_080674B8(s32);
M2C_UNK sub_08068984(s32, s32, s32, s32, s32);
M2C_UNK sub_0809ED9C(s32);
s32 sub_08040CBC(void)
{
  s8 *new_var2;
  int new_var;
  new_var2 = (s8 *) ((void *) 0x030016E0);
  if (1 & (*((u16 *) (new_var2 + 6))))
  {
    sub_0809ED9C(1);
    sub_080674B8(0);
    sub_08068984(0, 2, 1, 0, 0x080FBC1A);
    sub_08068984(0, 2, 3, 0, 0x080FBC32);
    sub_08068984(0, 8, 7, 0, 0x080FBB94);
    sub_08068984(0, 0x13, 7, 0, 0x080FBB98);
    new_var = 0xA;
    sub_0805B358(0x0814C4E8, 1, 1, 0, 2);
    *((s8 *) (((s8 *) ((void *) 0x03004410)) + new_var)) = 0xC;
  }
  return 0;
}

