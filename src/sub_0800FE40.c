extern u16 D_03004114;
extern u8 D_03004830[];
extern u8 D_03002AB0[];
u8 sub_08001770(s32 arg0);
void sub_0800FD1C(void);
void sub_0800FDE4(void);
void sub_0800FE40(void)
{
  u8 *base = D_03002AB0;
  u8 one;
  if (((*((u16 *) (base + 0x06))) != 0x3E4C) || (sub_08001770(0x78) != 0))
  {
    D_03004114 = 0;
    return;
  }
  one = 1;
  D_03004830[0x2D] |= one;
  D_03002AB0[0xB8] |= 4;
  D_03004114 = 0;
}

void sub_0800FE9C(void);
