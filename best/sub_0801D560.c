extern u8 D_03002AB0[];
extern u8 D_03003418[];
extern u8 D_03004154[];
extern u8 D_03004830[];
extern u8 D_03004E90[];
extern u8 D_030023E0[];
extern void sub_0802FEE0(void);
extern void sub_0800518C(s32, s32, s32);
extern void sub_0801D9C0(s32, s32, s32);
extern void *sub_0803ED98(void);
extern void sub_08003378(s32);
void sub_0801D3DC(void);
void sub_0801D388(void);
void sub_0801D560(void)
{
  u8 *p = D_03004830;
  u8 *ptr = p + 0x2C;
  u8 new_var;
  if ((--(*ptr)) == 0)
  {
    sub_0802FEE0();
    D_03002AB0[0xB8] |= 4;
    new_var = D_03003418[0];
    D_03003418[0] = new_var | 0x40;
    sub_0800518C(0x66, 0xF88, 0x2F7C);
    p[0x2B]++;
  }
}

void sub_0801D5BC(void);
