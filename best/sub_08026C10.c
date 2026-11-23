extern u8 D_03004830[];
extern u16 D_03004114[];
s32 sub_08028290(void *arg0, u8 *arg1);
s32 sub_08026C10(void *arg0)
{
  u8 sp0;
  int new_var;
  if (((sub_08028290(arg0, &sp0) << 7) << 17) != 0)
  {
    D_03004830[0x42] = sp0;
    new_var = ((u8 *) arg0)[0xB8] | 0x44;
    ((u8 *) arg0)[0xB8] = new_var;
    D_03004830[0x3F] = 0x22;
    D_03004830[0x40] = 0;
  }
  D_03004114[0] = 0;
  return 0;
}

