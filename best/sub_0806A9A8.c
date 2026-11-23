extern u16 D_030045A0;
void sub_0805ABF4(u32, u32, u8 *);
void sub_0806A9A8(const u8 *actor, u16 position)
{
  const u8 *new_var2;
  u8 buf[5];
  s32 i;
  s32 p;
  u16 *flags = &D_030045A0;
  u8 zero = 0;
  u8 *new_var;
  const u8 *src;
  u32 tile;
  p = (s32) (buf + 4);
  do
  {
    *(new_var = (u8 *) p) = zero;
    p--;
  }
  while (p >= ((s32) buf));
  i = 0;
  new_var2 = actor + 0xE8;
  tile = position >> 1;
  src = new_var2;
  do
  {
    buf[i] = src[i];
    i++;
  }
  while (i < 4);
  *flags &= 0xFF;
  if ((*flags) & 0x10)
  {
    *flags |= 0x100;
  }
  else
    if ((*flags) & 0x60)
  {
    *flags |= 0x200;
  }
  sub_0805ABF4(tile, (*flags) >> 8, buf);
}

