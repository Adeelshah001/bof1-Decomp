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
void sub_08026084(void *arg0)
{
  int temp_r2;
  int new_var;
  temp_r2 = 0xF & (*((u8 *) (((s8 *) arg0) + 0x41)));
  *((u8 *) (((s8 *) arg0) + 0x41)) = temp_r2;
  new_var = (*((u8 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x68)))) + 2))) | temp_r2;
  *((u8 *) (((s8 *) arg0) + 0x41)) = (u8) new_var;
  *((void **) (((s8 *) arg0) + 0x68)) = (void *) ((*((void **) (((s8 *) arg0) + 0x68))) + 3);
}

