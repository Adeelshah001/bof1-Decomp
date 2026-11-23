extern u8 D_02004810[];
extern u8 gEntityPool[];
u32 sub_08073C8C(void);
extern u8 D_03002AB0[];
extern u8 D_0202DBD0[];
extern u8 D_030023E0[];
void sub_08073D80(void);
extern const u32 D_081511E8[];
void sub_0805B568(s32, s32, s32, s32, s32);
inline int inline_fn(s32 arg0)
{
  return arg0 | 0x8000;
}

void sub_08073B18(s32 arg0, s32 arg1, s32 arg2)
{
  s32 new_var3;
  s32 new_var2;
  s32 new_var;
  unsigned int new_var4;
  new_var = arg0;
  new_var2 = new_var;
  new_var4 = 0x8000 | arg1;
  new_var3 = new_var2;
  sub_0805B568(inline_fn(new_var3), new_var4, arg2 + 9, 0, D_081511E8[arg2] | 0x400);
}

extern const u8 D_0814B9A8[];
u16 sub_08073ADC(u16 arg0, u16 arg1, u8 *arg2);
