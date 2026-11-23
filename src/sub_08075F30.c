extern u16 D_03001864;

void sub_0803A8EC(void *);
void sub_0807B27C(void *);

void sub_08075F30(Entity *actor, u8 frame, s32 offsetX, s32 offsetY)
{
    u16 *parent;

    actor->unk54 = frame;
    parent = (u16 *)actor->unk78;
    ((u16 *)actor)[1] = parent[1] + offsetX;
    actor->unk6 = parent[3] + offsetY;
    if (!(((u8 *)actor)[0xDC] & 0x40) && !(((u8 *)actor)[0xDD] & 2))
        sub_0807B27C(actor);
    if (((u8 *)actor)[0xF1] & 0x80)
        ((u8 *)actor)[0x2C] = 0;
    else
        actor->unk2C = actor->unk6 + 0x18;
    if ((u16)(D_03001864 - 0x10) > 1)
        sub_0803A8EC(actor);
}
