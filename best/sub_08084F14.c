void sub_08084B70(u8 *arg0, u8 *arg1);
extern u8 D_03004FB8[];
void sub_08084BB0(void);
extern const u8 D_08151B26[];
extern const u8 D_08151B32[];
void sub_080332C0(u8 *);
void sub_08084DC8(u8 *arg0);
struct Unk124
{
  u8 pad00[0xF0];
  u8 unkF0;
  u8 unkF1;
  u8 padF2[0x124 - 0xF2];
};
extern struct Unk124 D_03002AB0[4];
struct Unk124 *sub_08084F14(u8 *arg0, u8 arg1, u8 *arg2)
{
  u32 flags = arg1;
  struct Unk124 *p;
  for (p = D_03002AB0; p < (&D_03002AB0[4]); p++)
  {
    if (((flags & 4) || (!(p->unkF1 & 0x80))) && (!(p->unkF0 & 0x10)))
    {
      *((struct Unk124 **) (arg0 + 0x54)) = p;
      *((struct Unk124 **) (arg2 + (flags = 0x78))) = p;
      return p;
    }
  }

  return NULL;
}

