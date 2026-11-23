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
s32 sub_080448A4(void *, s32);
M2C_UNK sub_08049C40(void *, s32, s32);
s32 sub_08049F34(void *, s32);
extern M2C_UNK sub_08049C88;
extern M2C_UNK sub_08049CC0;
void sub_0804991C(void *arg0)
{
  int new_var;
  int new_var2;
  new_var = 0x3A;
  if ((sub_08049F34(arg0, 0x87) << 0x18) != 0)
  {
    *((M2C_UNK **) (((s8 *) arg0) + 0x64)) = &sub_08049CC0;
    sub_08049C40(arg0, 0xC0, 0x3E);
    if (((sub_080448A4(arg0, 0xD) << 0x18) != 0) && ((*((u8 *) (((s8 *) arg0) + 0x60))) == 0))
    {
      new_var2 = 0x10 | (*((u8 *) (((s8 *) arg0) + new_var)));
      *((u8 *) (((s8 *) arg0) + new_var)) = (u8) new_var2;
      *((M2C_UNK **) (((s8 *) arg0) + 0x64)) = &sub_08049C88;
    }
  }
}

