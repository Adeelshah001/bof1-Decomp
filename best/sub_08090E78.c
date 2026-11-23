extern u16 *D_08152A20[];
extern u8 D_02021140[];
extern u8 D_02021340[];
void sub_0808EC30(void *);
struct Unk90E78
{
  u8 pad00[0x74];
  u8 unk74;
  u8 unk75;
  u8 pad76[0xDB - 0x76];
  u8 unkDB;
};
void sub_08090E78(struct Unk90E78 *arg0)
{
  u8 idx = arg0->unk75;
  u32 row = (arg0->unk74 * 2) + arg0->unkDB;
  u16 *pal = D_08152A20[row >> 1];
  u16 color = pal[idx >> 1];
  *((u16 *) (D_02021140 + idx)) = color;
  *((u16 *) (D_02021340 + idx)) = color;
  color = arg0->unk75 + 2;
  if (color == 0x10)
  {
    u32 next74 = arg0->unk74 + 1;
    if (next74 == 3)
    {
      next74 = 0;
    }
    arg0->unk74 = next74;
    color = 0;
  }
  arg0->unk75 = color;
  sub_0808EC30(arg0);
}

