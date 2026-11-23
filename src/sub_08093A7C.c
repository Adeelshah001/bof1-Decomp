u16 sub_0807B2CC(void *);
void sub_0803A8EC(void *);
void sub_0803EE6C(void *);
void sub_08095618(void *);
extern const u8 D_08152DEA[];
void sub_08093A7C(Entity *actor)
{
  int new_var;
  u16 active;
  u8 *data = (u8 *) actor;
  active = sub_0807B2CC(actor);
  new_var = active != 0;
  if (new_var)
  {
    if (((u8) (actor->unk3B - 5)) <= 1)
    {
      actor->unk2C = actor->unk6;
    }
    else
    {
      u16 offset = 0x50;
      if (actor->unk2A == 0x18E)
      {
        offset = 0x70;
      }
      offset += actor->unk6;
      actor->unk2C = offset;
    }
    sub_0803A8EC(actor);
  }
  else
  {
    u8 *timer;
    u32 index;
    sub_0803EE6C(actor);
    timer = data + 0x54;
    *(timer++) = active;
    *timer = active;
    if (timer[-0x19] == 0xA)
    {
      index = actor->unk3B;
      index += (u32) D_08152DEA;
      if ((*((u8 *) index)) == 0)
      {
        sub_08095618(actor);
      }
    }
  }
}

