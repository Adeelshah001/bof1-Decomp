void sub_08037FC4(u8 *actor, s32 offset);
void sub_08038278(u8 *actor);
void sub_0807B248(u8 *actor);
void sub_0807C484(u8 *actor);
u32 sub_08091570(Entity *actor);
s32 sub_080915D4(const Entity *actor);
void sub_0808EB20(u8 *actor)
{
  u8 *timer = actor + 0x54;
  u8 kind;
  u8 *flags;
  u16 step;
  u16 offset;
  offset = --(*timer);
  if (offset != 0)
  {
    sub_08038278(actor);
    *((u16 *) (actor + 0x2C)) = *((u16 *) (actor + 6));
    return;
  }
  actor[0x4D] = 6;
  kind = actor[0xD8];
  step = 0x160;
  if (kind == 0x44)
  {
    step = 0x60;
  }
  *((u16 *) (actor + 0x38)) = step;
  flags = actor + 0x61;
  *flags ^= 0x10;
  sub_08091570((Entity *) actor);
  offset = sub_080915D4((const Entity *) actor);
  sub_08037FC4(actor, offset);
  if (actor[0xE0] != 6)
  {
    sub_0807C484(actor);
  }
  sub_0807B248(actor);
}

