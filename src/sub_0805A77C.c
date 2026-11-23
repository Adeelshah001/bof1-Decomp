void sub_0805A70C(void);
struct Unk0202DBD0
{
  u8 pad0[0x2A6];
  u8 unk2A6;
};
extern struct Unk0202DBD0 D_0202DBD0;
struct Unk030016E0
{
  u8 pad0[6];
  u16 unk6;
};
extern struct Unk030016E0 D_030016E0;
struct Unk03004550
{
  u8 pad0[0x24];
  u8 unk24;
};
extern struct Unk03004550 D_03004550;
extern const u8 D_0814B9A8[];
s32 sub_0805A77C(void)
{
  u8 idx = D_0202DBD0.unk2A6;
  u16 new_var;
  s32 flag = 0;
  int new_var2;
  new_var2 = 0xFF;
  if (((s8) D_03004550.unk24) >= 0)
  {
    if (!((new_var = D_030016E0.unk6) & 0x330))
    {
      D_03004550.unk24 |= new_var2;
      return 0;
    }
    if ((--D_03004550.unk24) != 0)
    {
      return 0;
    }
    flag = 1;
  }
  if (D_030016E0.unk6 & 0x330)
  {
    D_03004550.unk24 = D_0814B9A8[flag + (idx * 2)];
    sub_0805A70C();
  }
  return 0;
}

