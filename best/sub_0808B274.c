void sub_0808B258(Entity *arg0, s8 arg1);
void sub_0808B274(Entity *arg0)
{
  Entity *ent78;
  u32 new_var;
  sub_080382A4();
  new_var = arg0->unk78;
  arg0->unk2C = arg0->unk6 + 0x30;
  ent78 = (Entity *) new_var;
  if (((s32) (ent78->unk6 - 0x10)) >= ((s32) arg0->unk6))
  {
    sub_0807B27C(arg0);
    return;
  }
  sub_08037FC4(arg0, 2);
  arg0->unk4D = 0xE;
  sub_0808B268(arg0);
}

void sub_0808B214(Entity *arg0);
void sub_0808B2B4(Entity *arg0);
