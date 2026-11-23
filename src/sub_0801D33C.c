extern u8 D_030023E0[];
extern u8 D_03002AB0[];
extern u8 D_03003418[];
extern u8 D_03004154[];
extern u8 D_03004830[];
extern u8 D_03004890[];
extern u8 D_03004E90[];
extern void sub_0802FEE0(void);
extern void sub_0800518C(s32, s32, s32);
extern void *sub_0803ED98(void);
extern void sub_08003378(s32);
extern void sub_080379D4(s32);
void sub_0801D388(void);
void sub_0801D560(void);
void sub_0801D5BC(void);
inline u8 inline_fn(u8 *arg0)
{
  return --(*arg0);
}

void sub_0801D33C(void)
{
  u8 *p = D_03004830;
  u8 *ptr = p + 0x2C;
  unsigned char new_var2;
  int new_var;
  if (inline_fn(ptr) == 0)
  {
    new_var2 = D_03002AB0[0xB8];
    new_var = new_var2 | 0x88;
    D_03002AB0[0xB8] = new_var;
    *((u16 *) D_03004890) = 0xC8;
    sub_080379D4(0x20);
    *ptr = 0x64;
    p[0x2B]++;
  }
}

