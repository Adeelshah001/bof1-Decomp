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
void sub_0802AFC0(void *arg0, void *arg1)
{
  int new_var;
  *((s32 *) (((s8 *) arg0) + 0x10)) = (s32) (*((s32 *) (((s8 *) arg1) + 0x10)));
  *((s32 *) (((s8 *) arg0) + 0x14)) = (s32) (*((s32 *) (((s8 *) arg1) + 0x14)));
  *((u16 *) (((s8 *) arg0) + 2)) = (u16) ((((*((u16 *) (((s8 *) arg1) + 0x12))) + (*((u16 *) (((s8 *) arg0) + 2)))) & 0x1F) | 0xE00);
  new_var = (*((u16 *) (((s8 *) arg1) + 0x16))) + (*((u16 *) (((s8 *) arg0) + 6)));
  *((u16 *) (((s8 *) arg0) + 6)) = (u16) ((new_var & 0x1F) | 0x2E00);
}

