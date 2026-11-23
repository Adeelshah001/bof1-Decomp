extern u8 D_03002AB0[];
void sub_08033F00(void)
{
  u8 *base;
  if (D_03002AB0[0x3C] != 0)
  {
    sub_08038864(D_03002AB0, D_03002AB0 + 0x124);
  }
  D_03002AB0[0x214] |= 0x40;
  sub_0803414C(D_03002AB0);
  D_03002AB0[0xB8] &= 0xFB;
}

