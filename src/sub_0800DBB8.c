extern u16 D_030040F8;
extern u8 D_03002CF8[];
extern u8 D_03003720[];
void sub_0800D2BC(void);
void sub_08033AF4(s32);
void sub_0805561C(s32);
void sub_0803EE88(void *);
void sub_0800DBE4(void);
void sub_0800DBB8(void)
{
  int new_var;
  u8 *p;
  sub_08033AF4(2);
  ;
  new_var = 4;
  D_03002CF8[0xBA] |= new_var;
  D_03004830[0x2B]++;
}

void sub_0800DCA8(void);
void sub_0800DCCC(void);
