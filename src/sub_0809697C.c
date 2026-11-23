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
M2C_UNK sub_08073470();
s32 sub_08083014();
M2C_UNK sub_08096CD4(s32);
void sub_0809697C(s32 arg0)
{
  void *new_var;
  if (sub_08083014() != 0)
  {
    sub_08073470();
    new_var = (void *) 0x03004F30;
    *((u8 *) (((s8 *) new_var) + 0xC)) = (u8) (0xFE & (*((u8 *) (((s8 *) new_var) + 0xC))));
    *((s16 *) 0x03001864) = 0x17;
    sub_08096CD4(arg0);
  }
}

