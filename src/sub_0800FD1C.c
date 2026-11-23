extern u16 D_03004114;
extern u8 D_03004830[];
extern u8 D_03002AB0[];
u8 sub_08001770(s32 arg0);
void sub_0800FD1C(void)
{
  u8 *base = D_03002AB0;
  u8 val;
  if (((*((u16 *) (base + 0x06))) != 0x5A1C) || ((*((u16 *) (base + 0x02))) > 0x37F))
  {
    D_03004114 = 0;
    return;
  }
  val = 0x0A;
  D_03004830[0x2A] = val;
  D_03004830[0x2B] = 0;
  D_03002AB0[0xB8] |= 4;
  D_03004114 = 0;
}

void sub_0800FDE4(void);
void sub_0800FE40(void);
void sub_0800FE9C(void);
