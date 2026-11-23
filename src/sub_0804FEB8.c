extern u16 D_03001864;
void sub_0803EE6C(Entity *);

void sub_0804FEB8(Entity *actor)
{
    u16 *timer = (u16 *)&actor->unk54;
    u32 next = *timer + 1;
    *timer = next;

    if ((u16)next == 0x158) {
        sub_0803EE6C(actor);
        D_03001864 = 0x17;
    } else if ((u16)next <= 0x13F) {
        D_03001864 = 0x17;
    } else if (next & 2) {
        D_03001864 = 0x17;
    } else {
        D_03001864 = 0x10;
    }
}
