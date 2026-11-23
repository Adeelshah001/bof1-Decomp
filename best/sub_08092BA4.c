extern u8 D_03004610;
typedef struct 
{
  u8 pad00[0x46];
  u16 unk46;
  u8 pad48[0x4C - 0x48];
  u8 unk4C;
  u8 pad4D[0x50 - 0x4D];
  u8 unk50;
  u8 pad51[0x54 - 0x51];
  u8 unk54;
  u8 unk55;
  u8 pad56[0x6C - 0x56];
  Entity *unk6C;
} Struct92BA4;
void sub_0804E1B4(Struct92BA4 *);
void sub_0804E1C0(Struct92BA4 *);
void sub_08092CEC(Struct92BA4 *);
void sub_08092BA4(Struct92BA4 *arg0)
{
  u8 val;
  Entity *ent;
  arg0->unk54 ^= 1;
  if (arg0->unk54 == 0)
  {
    if (arg0 || val)
    {
      D_03004610 &= 0xFE;
      return;
    }
    else
    {
      D_03004610 &= 0xFE;
      return;
    }
  }
  sub_08092CEC(arg0);
  val = (u8) arg0->unk46;
  val = val + 6;
  if (val < arg0->unk50)
  {
    arg0->unk46 = val;
    sub_0804E1B4(arg0);
    sub_0804E1C0(arg0);
    return;
  }
  arg0->unk46 = (val = arg0->unk50);
  ent = arg0->unk6C;
  ent->unk41 |= 0x10;
  ent->unk2C = 0;
  arg0->unk54++;
  arg0->unk54--;
  arg0->unk55 = 4;
  arg0->unk4C = 3;
}

