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
M2C_UNK sub_0807B248(void *);
M2C_UNK sub_0807CA34(void *);
void sub_0807C918(void *arg0)
{
  u16 temp_r0;
  u8 temp_r0_2;
  u8 var_r0;
  s8 *new_var;
  void *temp_r2;
  temp_r2 = *((void **) (((s8 *) arg0) + 0x78));
  *((u16 *) (((s8 *) arg0) + 2)) = (u16) (*((u16 *) (((s8 *) temp_r2) + 2)));
  temp_r0 = *((u16 *) (((s8 *) temp_r2) + 6));
  *((u16 *) (((s8 *) arg0) + 6)) = temp_r0;
  *((s16 *) (((s8 *) arg0) + 0x2C)) = (s16) (temp_r0 - 0x20);
  var_r0 = *((u8 *) (((s8 *) temp_r2) + 0x41));
  if (var_r0 != 0xE)
  {
    var_r0 = 0xA;
  }
  *((u8 *) (((s8 *) arg0) + 0x41)) = var_r0;
  temp_r0_2 = *((u8 *) (((s8 *) temp_r2) + 0x70));
  new_var = (s8 *) ((void *) 0x03004F30);
  switch (temp_r0_2)
  {
    case 4:
      break;

    case 1:
      sub_08037FC4(arg0, 4);
      break;

    case 2:
      sub_08037FC4(arg0, 0);
      break;

    case 3:
      sub_08037FC4(arg0, 8);

    default:
      sub_0807B248(arg0);
      break;

  }

  if ((!(0xA0 & (*((u8 *) (new_var + 9))))) && (!(0x80 & (*((u8 *) (((s8 *) arg0) + 0xF1))))))
  {
    sub_0807CA34(arg0);
  }
}

