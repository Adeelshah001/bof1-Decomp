extern u16 D_03001864;
void sub_0803A8EC(Entity *actor);
void sub_0807B27C(Entity *actor);
void sub_08076270(Entity *actor)
{
  u8 *new_var;
  u8 *p;
  u8 zero;
  u8 two;
  u8 four;
  u8 val;
  {
    p = ((u8 *) actor) + 0xE3;
    zero = 0;
    two = 2;
    new_var = p;
    *new_var = two;
    p -= 0xB;
    *p = zero;
  }
  {
    four = 4;
    p -= 0x84;
    *p = four;
    p += 0x88;
    ;
    if ((!((*p) & 0x40)) && (!(((u8 *) actor)[0xDD] & two)))
    {
      sub_0807B27C(actor);
    }
  }
  if (((u8 *) actor)[0xF1] & 0x80)
  {
    ((u8 *) actor)[0x2C] = 0;
  }
  else
  {
    actor->unk2C = actor->unk6 + 0x18;
  }
  if (((u16) (D_03001864 - 0x10)) > 1)
  {
    sub_0803A8EC(actor);
  }
}

