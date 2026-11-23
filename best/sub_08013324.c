extern u8 D_03002510[];
extern u8 D_03002AB0[];
extern u8 D_030036A0[];
extern u16 D_03004120;
extern u16 D_03004114;
void sub_0803EE38(void *);
void sub_0802FFBC(void *, u16);
void sub_08013A20(s32, void *);
u8 sub_08038458(s32);
void sub_08013324(void)
{
  u8 *p;
  u8 v;
  u32 z;
  sub_0803EE38(D_03002510);
  p = D_03002AB0;
  sub_0802FFBC(p, D_03004120);
  v = p[0xB8];
  z = 0;
  z = 4;
  p[0xB8] = z | v;
  D_03004830[0x2B]++;
  D_03004114 = z;
}

void sub_0801477C(void);
