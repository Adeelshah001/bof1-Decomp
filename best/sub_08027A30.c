extern u8 D_03002AB0[];
s32 sub_08001770(s32);
void sub_08004EA0(s32);
u8 sub_080279EC(s32 arg0);
s32 sub_08027A00(u8 *arg0);
u8 sub_08027A30(u16 arg0, unsigned char arg1, u16 arg2, s32 arg3)
{
  u8 i;
  unsigned char new_var;
  ;
  i = arg3;
  if ((((0, arg1)) << 16) == (i << 16))
  {
 do { if (1) { i = 0; } } while (0);
    do
    {
      if (arg2 == arg0)
      {
        return sub_080279EC(0x03002AB0);
      }
      arg0 += 0x10;
      i++;
    }
    while (i <= 2);
  }
  return 0;
}
