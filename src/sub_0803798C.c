extern u16 D_0300414C;
u16 sub_080A07AC(u16, u8);
u16 sub_080A0844(u16, u8);
inline u16 inline_fn(u16 arg0, u8 arg1)
{
  return sub_080A0844(arg0, arg1);
}

u16 sub_0803798C(u16 arg0, u8 arg1)
{
  u16 var_r6;
  if (arg1 != 0)
  {
    u16 *p;
    var_r6 = sub_080A07AC(arg0, arg1);
    p = &D_0300414C;
    *p = inline_fn(arg0, arg1);
  }
  else
  {
    var_r6 = 0xFFFF;
    D_0300414C = arg0;
  }
  return var_r6 & 0xFF;
}

