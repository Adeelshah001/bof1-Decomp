extern u16 D_03004EC0[];
void sub_08083708(void *);
struct Unk839DC
{
  u8 pad00[0xE2];
  u8 unkE2 : 8;
  u8 padE3[0xF0 - 0xE3];
  u8 unkF0;
  u8 padF1[0xF4 - 0xF1];
  u16 unkF4;
  u16 unkF6;
  u8 padF8[0x106 - 0xF8];
  u16 unk106;
  u16 unk108;
};
void sub_080839DC(struct Unk839DC *arg0)
{
  u32 mask;
  s32 tmp;
  if (arg0->unkF0 & 8)
  {
    sub_08083708(arg0);
    return;
  }
  tmp = arg0->unkE2;
  arg0->unkE2 = tmp & 0xF;
  mask = 0xF0;
  mask &= tmp;
  if (mask == 0x80)
  {
    arg0->unkF4 = D_03004EC0[1];
    tmp = arg0->unkF6;
    if (tmp != 0)
    {
      tmp >>= 2;
      if (tmp == 0)
      {
        tmp = 1;
      }
    }
    if (tmp >= arg0->unkF4)
    {
      tmp = arg0->unkF4;
    }
    arg0->unkF6 = tmp;
  }
  arg0->unk106 = D_03004EC0[4];
  arg0->unk108 = D_03004EC0[5];
}

