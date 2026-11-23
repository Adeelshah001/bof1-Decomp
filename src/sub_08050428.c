extern void *D_080FD6B0[];
void sub_080A0774(void *arg0, void *arg1);
void sub_080505F0(void *arg0, s32 arg1);
void sub_08050618(void *arg0);
void sub_080379D4(s32 arg0);
void sub_08050480(Entity *arg0);
void sub_080504BC(Entity *arg0);
void sub_08050428(Entity *arg0)
{
  int new_var;
  Entity *p = *((Entity **) (((u8 *) arg0) + 0xD4));
  vu16 *new_var2;
  p->unk6 = 0xA498;
  new_var2 = (vu16 *) D_03004830;
  if (new_var2[0x15] == 0x110)
  {
    p->unk6 = 0xA508;
    arg0->unk6 = 0xA508;
    arg0->unk2C = 0xA558;
    p->unk2C = 0xA558;
    p->unk41 = p->unk41 | 0x30;
    sub_080379D4(0x20);
    sub_080505F0(arg0, 0);
    new_var = 0x080505A9;
    arg0->unk64 = new_var;
  }
}

void sub_08050404(Entity *arg0);
