extern u8 D_0202DBD0[];
extern u8 D_030016E0[];
extern u8 D_03004550[];
extern u8 D_080FFB00[];
extern u8 D_080FFB04[];
void sub_0805A110(void)
{
  int new_var3;
  int new_var2;
  u8 saved;
  u8 *base;
  int new_var;
  saved = D_0202DBD0[0x2A6];
  base = D_03004550;
  new_var3 = 4;
  if (((D_03004550[0x1D] & 0x80) == 0) && (((*((u16 *) (D_030016E0 + new_var3))) & 0xF1) != 0))
  {
    u8 val = base[0x22];
    s8 sval = val;
    if (sval == 0)
    {
      return;
    }
    new_var2 = val - 1;
    base[0x22] = new_var2;
    new_var = new_var2;
    if ((new_var << 24) == 0)
    {
      base[0x1E] = D_080FFB04[new_var3 + saved];
      base[0x1B] = 1;
    }
  }
  else
  {
    D_03004550[0x22] = D_080FFB00[saved];
  }
}

