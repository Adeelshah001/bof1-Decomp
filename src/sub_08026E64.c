u8 sub_08027A30(s32, s32, u16, u16);
void sub_080279EC(s32);
u8 sub_08026D6C(s32 arg0, u16 arg1, u16 arg2);
u8 sub_08026E64(s32 arg0, u16 arg1, u16 arg2)
{
  if (arg2 == 0x4E1C)
  {
    s32 x = 0x1B8;
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
      x = 0x1C8;
    }
    if (arg1 == x)
    {
      sub_080279EC(arg0);
      return 1;
    }
    x = arg1;
    return sub_08027A30(0x238, 0x4E1C, x, arg2);
  }
  return 0;
}

