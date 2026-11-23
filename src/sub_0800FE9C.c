extern u16 D_03004114;
extern u8 D_03004830[];
extern u8 D_03002AB0[];
u8 sub_08001770(s32 arg0);
void sub_0800FD1C(void);
void sub_0800FDE4(void);
void sub_0800FE40(void);
void sub_0800FE9C(void)
{
  u8 *base = D_03002AB0;
  u8 one;
  int new_var;
  if (((*((u16 *) (base + 0x06))) != 0x3E3C) || (sub_08001770(0x63) != 0))
  {
    D_03004114 = 0;
    return;
  }
  new_var = 4;
  one = 1;
  D_03004830[0x2D] |= one;
  D_03002AB0[0xB8] |= new_var;
  D_03004114 = 0;
}

