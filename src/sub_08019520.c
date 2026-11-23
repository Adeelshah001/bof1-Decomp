extern u8 D_03004114[];
extern s32 sub_080197E0(void *, s32, u8);
extern s32 sub_0801980C(void *);
s8 sub_08019520(void *arg0, s32 arg1)
{
  u8 *a0 = (u8 *) arg0;
  u8 *new_var;
  int new_var2;
  new_var2 = 0;
  if (a0[0x76] == 0)
  {
    sub_0801980C(arg0);
    return (s8) D_03004114[0];
  }
  if ((*((u16 *) (a0 + 0x5C)) -= 1) != new_var2)
  {
 do { return new_var2 = new_var2; } while (new_var2);
  }
  new_var = a0;
  a0[0x76] = new_var2;
  if ((a0[0x55] -= 1) == new_var2)
  {
    return 1;
  }
  sub_080197E0(arg0, arg1, new_var[0x55]);
  return 0;
}
