typedef struct 
{
  u8 pad00[0x12];
  u8 timer : 8;
  u8 pad13[0x41];
  u8 *target;
} PaletteEffect;
u32 sub_080807C8(PaletteEffect *effect, u8 *target);
u32 sub_08080764(PaletteEffect *effect);
u8 sub_08080784(PaletteEffect *effect)
{
  u32 result;
  if (!((--effect->timer) & 0x80))
  {
    if (((vu8 *) effect)[0x12] == 6)
    {
      result = sub_08080764(effect);
    }
    else
    {
      return 3;
    }
  }
  else
  {
    u8 *target = effect->target;
    u8 palette;
 do { effect->timer = 8; palette = 14; } while (0);
    target[0x41] = palette;
    result = sub_080807C8(effect, target);
  }
  return (u8) result;
}
