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
M2C_UNK sub_08059978();
M2C_UNK sub_0805B308(s32);
M2C_UNK sub_0805B358(s32, s32, s32, s32, s32);
M2C_UNK sub_0805C660();
M2C_UNK sub_0805C7B8(s32);
M2C_UNK sub_0805D754(s32, s32, s32);
M2C_UNK sub_080615F8();
M2C_UNK sub_08068938(s32, s32);
M2C_UNK sub_08068984(s32, s32, s32, s32, s32);
s32 sub_0805EF4C(void)
{
  s8 *new_var;
  void *new_var4;
  int new_var2;
  void *new_var3;
  new_var = ((s8 *) ((void *) 0x03004760)) + 0x19;
  new_var3 = (void *) 0x03004620;
  if (0 == (*((u8 *) (((s8 *) new_var3) + 7))))
  {
    sub_08068938(0, 0);
    sub_08068938(1, 1);
    sub_08068938(2, 8);
    sub_08068938(3, 3);
    new_var4 = (void *) 0x03004760;
    *((s8 *) (((s8 *) new_var4) + 0x18)) = 0xC;
    sub_0805D754(1, 1, 1);
    sub_08059978();
    sub_0805B308(0x08100BEE);
    sub_0805C660();
    if ((*((u8 *) 0x0300169C)) != 0)
    {
 do { sub_080615F8(); } while (0);
    }
    else
    {
      sub_0805C7B8(1);
    }
    sub_08068984(2, 1, 1, 0, 0x08100BDB);
    sub_08068984(2, 1, 3, 0, 0x08100BDF);
    sub_08068984(2, 1, 5, 0, 0x08100BE9);
    sub_08068984(2, 1, 7, 0, 0x08100BE4);
    sub_0805B358(0x081007B4, 0, 3, 0, 0);
    *((u8 *) (((s8 *) new_var3) + 7)) = 1U;
  }
  new_var2 = 3;
  *((s8 *) (((s8 *) ((void *) 0x03004620)) + new_var2)) = 2;
  *((s8 *) new_var) = 0;
  return 0;
}
