#define HALF(actor, offset) (*(u16 *)((u8 *)(actor) + (offset)))
#define WORD(actor, offset) (*(u32 *)((u8 *)(actor) + (offset)))
void sub_0803A8EC(Entity *);
void sub_0803EE38(Entity *);
void sub_08046610(Entity *);
void sub_08047624(Entity *actor);
void sub_080475F4(Entity *actor);
s32 sub_080475B4(Entity *actor);
u16 sub_08046F20(Entity *actor)
{
  u32 y;
  u32 total;
  u16 step;
  u32 sign = 0x8000;
  vu16 *distance;
  HALF(actor, 2) = HALF(actor, 2) + HALF(actor, 0x12);
  y = HALF(actor, 0x16) + actor->unk6;
  actor->unk6 = y;
  actor->unk2C = y + 15;
  step = *((vu16 *) (((u8 *) actor) + 0x12));
  if (!(step & sign))
  {
    u32 opposite = ~step;
    step = opposite + 1;
  }
  distance = (vu16 *) (&actor->unk78);
  total = step + (*distance);
  *distance = total;
  step = *((vu16 *) (((u8 *) actor) + 0x16));
  if (!(step & sign))
  {
    u32 opposite = ~step;
    step = opposite + 1;
  }
  *distance = step + total;
  return *distance;
}

