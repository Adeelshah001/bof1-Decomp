extern u16 D_03001864;
void sub_0803A8EC(void *actor);
void sub_0807B27C(Entity *actor);
void sub_08083BB4(Entity *actor);

void sub_0807B46C(Entity *actor)
{
    sub_08083BB4(actor);
    if (!(((u8 *)actor)[0xDC] & 0x40) && !(((u8 *)actor)[0xDD] & 2))
        sub_0807B27C(actor);
    if (((u8 *)actor)[0xF1] & 0x80)
        ((u8 *)actor)[0x2C] = 0;
    else
        actor->unk2C = actor->unk6 + 0x18;
    if ((u16)(D_03001864 - 0x10) > 1)
        sub_0803A8EC(actor);
}
