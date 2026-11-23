extern u16 D_050001E8[];
extern u16 D_050001F0[];
extern u8 D_0202DBD0[];
extern u8 D_03004584[];
extern u8 D_03004F50[];
extern void sub_08002BBC(u8);
void sub_0807F61C(void *arg0)
{
  u16 new_var3;
  u8 *base = arg0;
  u8 *new_var;
  u16 v = *((u16 *) (base + 2));
  u8 *new_var2;
  *((u16 *) (base + 0x46)) = v;
  new_var = base;
  new_var2 = base + 6;
  new_var3 = *((u16 *) new_var2);
  *((u16 *) (new_var + 0x4A)) = new_var3;
  *((u16 *) (base + 0x2C)) = *((u16 *) (new_var + 6));
}

void sub_0807F5CC(s16 arg0, s16 arg1, s16 arg2);
s32 sub_08082F60(void *arg0);
