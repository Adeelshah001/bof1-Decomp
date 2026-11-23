extern u16 D_03001864;
void sub_0803800C(void *actor, s32, s32);
void sub_0803A8EC(void *actor);
void sub_0807B578(Entity *actor, u8 mode);
void sub_0807B620(Entity *actor, u8 mode, u8 delay);
void sub_0807B5B8(Entity *actor)
{
  int new_var;
  new_var = ((vu8 *) actor->unk74)[0x3A];
  if (new_var != 0)
  {
    sub_0807B578(actor, 0xFF);
    return;
  }
  sub_0807B620(actor, 0x23, 0x11);
  new_var = 0xC;
  sub_0803800C(actor, new_var, 0);
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

