extern u8 D_03004F30[];
void sub_08073470(void);
void sub_0808F0BC(Entity *actor);
void sub_0808F534(u16 value, u16 offset, s32 count);
void sub_0808F040(Entity *actor)
{
  u8 *delay = ((u8 *) actor) + 0x55;
  u8 *count;
  Entity *new_var;
  u32 remaining;
  if ((*delay) != 0)
  {
    if (count)
    {
      --(*delay);
      return;
    }
    else
    {
      --(*delay);
      return;
    }
  }
  count = &actor->unk54;
  remaining = (*count) - 1;
  *count = remaining;
  remaining &= 0xFF;
  remaining &= 0x80;
  if (remaining == 0)
  {
    new_var = actor;
    sub_0808F0BC(new_var);
    return;
  }
  *(((u8 *) actor) + 0x4C) = 8;
  *count = 15;
  if (0xE0 & D_03004F30[9])
  {
    sub_0808F534(0, 0x60, 15);
    sub_08073470();
    if (0xA0 & D_03004F30[9])
    {
      return;
    }
  }
  sub_0808F534(0x7FFF, 0x1E0, 15);
}

