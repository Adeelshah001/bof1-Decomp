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
M2C_UNK sub_080379D4(s32);
M2C_UNK sub_08037FC4(void *, s32);
M2C_UNK sub_0807B248(void *);
M2C_UNK sub_0807C400(void *);
M2C_UNK sub_080835F8(void *);
M2C_UNK sub_08084C9C();
M2C_UNK sub_0808EDAC(void *);
void sub_0808EE54(void *arg0)
{
  int new_var;
  u8 temp_r1;
  if ((*((u8 *) (((s8 *) arg0) + 0x4D))) != 0)
  {
    sub_0808EDAC(arg0);
    return;
  }
  sub_0807C400(arg0);
  sub_08084C9C();
  *((u8 *) (((s8 *) arg0) + 0x4D)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x4D))) + 1);
  *((s8 *) (((s8 *) arg0) + 0x54)) = 0x10;
  if ((0x240 & (*((u16 *) (((s8 *) arg0) + 0xDC)))) && (((temp_r1 = *((u8 *) (((s8 *) arg0) + 0x3C)), temp_r1 == 8)) || (temp_r1 == 0x78)))
  {
    sub_08037FC4(arg0, 0);
  }
  if (0x80 & (*((u8 *) (((s8 *) arg0) + 0xE3))))
  {
    sub_080379D4(0xD);
  }
  else
  {
    do
    {
      sub_080835F8(arg0);
    }
    while (0);
  }
  new_var = 0x03004F30;
  temp_r1 = *((u8 *) (((s8 *) ((void *) new_var)) + 9));
  if (!(0xA0 & temp_r1))
  {
    if (!(temp_r1 & 0x40))
    {
      *((u16 *) (((s8 *) arg0) + 2)) = (u16) ((*((u16 *) (((s8 *) arg0) + 2))) - 8);
      *((u16 *) (((s8 *) arg0) + 6)) = (u16) ((*((u16 *) (((s8 *) arg0) + 6))) - 8);
    }
    sub_0807B248(arg0);
  }
}

