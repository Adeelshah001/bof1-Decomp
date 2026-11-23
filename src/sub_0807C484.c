extern const u8 D_08151C4C[];
u8 sub_08003104(void);
void sub_0807C500(u8 *actor);
void sub_0807C584(u8 *target);
void sub_0807C484(u8 *actor)
{
  u8 *target = *((u8 **) (actor + 0x78));
  int new_var;
  u8 *ptr;
  u8 val;
  u32 idx;
  if (target[0xF0] & 0x28)
  {
    sub_0807C500(actor);
    return;
  }
  idx = 0;
  val = target[0x3C];
  if (val != 0)
  {
    idx = 1;
    new_var = 2;
    if (val != 5)
    {
      idx = new_var;
      if (val != 6)
      {
        sub_0807C500(actor);
        return;
      }
    }
  }
  val = sub_08003104();
  val &= 0x3F;
  if (val >= D_08151C4C[idx])
  {
    sub_0807C500(actor);
    return;
  }
  sub_0807C584(target);
  ptr = target + 0xE0;
  *ptr = 0x14;
  ptr += new_var;
  val = *ptr;
  val &= 0xF0;
  val |= actor[0x3B];
  *ptr = val;
  sub_0807C500(actor);
}

