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
M2C_UNK sub_08098524(void *);
M2C_UNK sub_080985E0();
volatile char sub_080984FC(void *arg0)
{
  if (((*((u8 *) (((s8 *) arg0) + 0xEC))) != 0x8D) && ((*((u8 *) (((s8 *) arg0) + 0xEE))) != 0x8D))
  {
    sub_08098524(arg0);
    return;
  }
  sub_080985E0();
}

