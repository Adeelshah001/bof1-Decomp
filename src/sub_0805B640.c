extern struct 
{
  u8 pad00[4];
  const u8 *unk04;
  u8 pad08[0x10];
  s32 unk18;
  s32 unk1C;
  s32 unk20;
} D_03000AE0;
extern const u8 D_080FF990[];
extern volatile u16 D_05000382[];
void sub_0805B640(void)
{
  volatile u16 *palette;
  s32 stride;
  D_03000AE0.unk04 = D_080FF990;
  stride = 0x1C;
  D_03000AE0.unk20 = 0;
  palette = D_05000382;
  *(palette++) = 0x7FFF;
  *(palette++) = 0x41CE;
  *(palette++) = 0x6C02;
  *(palette++) = 0x1999;
 do { *palette = 0x110C; D_03000AE0.unk18 = stride; } while (0);
  D_03000AE0.unk1C = 1;
}
