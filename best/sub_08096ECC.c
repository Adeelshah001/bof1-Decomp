extern const u8 D_08152DEA[];
u16 sub_0807B2CC(void *);
void sub_0803EE6C(void *);
void sub_08095618(void *);
void sub_0803A8EC(void *);
typedef struct 
{
  u8 pad00[0x06];
  u16 unk6;
  u8 pad08[0x2A - 0x08];
  u16 unk2A;
  u16 unk2C;
  u8 pad2E[0x3B - 0x2E];
  u8 unk3B;
  u8 unk3C;
  u8 pad3D[0x54 - 0x3D];
  u8 unk54;
  u8 unk55;
} Unk96ECC;
void sub_08096ECC(Unk96ECC *arg0)
{
  u16 val;
  val = sub_0807B2CC(arg0);
  if (val == 0)
  {
    sub_0803EE6C(arg0);
    arg0->unk54 = val;
    arg0->unk55 = val;
    if ((arg0->unk3C == 0xA) && ((*((const u8 *) (arg0->unk3B + ((u32) D_08152DEA)))) == 0))
    {
      sub_08095618(arg0);
    }
  }
  else
  {
    val = 0x50;
    if (arg0->unk2A == 0x18E)
    {
      val = 0x70;
    }
    val += arg0->unk6;
    arg0->unk2C = val;
    sub_0803A8EC(arg0);
  }
}

