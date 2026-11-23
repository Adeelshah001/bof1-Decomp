extern void sub_080279EC(s32 arg0);
u8 sub_08027A30(s32 arg0, s32 arg1, u16 arg2, u16 arg3);
u8 sub_08026EC0(s32 arg0, u16 arg1, u16 arg2)
{
  if (arg2 == 0x419C)
  {
    s32 x = 0x188;
    if (arg1 == x)
    {
      sub_080279EC(arg0);
      return 1;
    }
    if (arg1 <= x)
    {
      x -= 0x10;
    }
    else
    {
      x = 0x198;
    }
    if (arg1 == x)
    {
      sub_080279EC(arg0);
      return 1;
    }
    x = arg1;
    return sub_08027A30(0x268, 0x419C, x, arg2);
  }
  return 0;
}

