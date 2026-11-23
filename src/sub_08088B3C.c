extern u8 D_03004F50[];
void sub_08038278(void *);
void sub_08088BE4(u8 *, s32);
void sub_08088C04(u8 *);
s32 sub_0807CDB8(u8 *);
void sub_0807B248(u8 *);
void sub_08083BB4(u8 *);
void sub_08037FC4(u8 *, s32);
void sub_08083484(u8 *);
void sub_0808EE54(u8 *);
void sub_08086388(u8 *);

void sub_08088B98(u8 *actor)
{
    u32 x;
    u8 savedX;
    sub_08038278(actor);
    x = (u32)(actor + 0xE4);
    x = *(u8 *)x;
    savedX = x;
    x += 8;
    if ((u8)x < actor[2]) {
        sub_08088C04(actor);
        return;
    }
    actor[2] = savedX;
    actor[6] = actor[0xE6];
    actor[0x4D] = 0x12;
    *((s8 *)(actor + 0x4D) + 7) = 2;
    sub_08088BE4(actor, 4);
}

void sub_08088B3C(u8 *actor)
{
    u8 *flags;
    u32 value;
    u32 next;
    sub_08038278(actor);
    if (sub_0807CDB8(actor) && (u8)((*(u8 **)&actor[0x78])[2] + 0x10) >= actor[2]) {
        sub_0807B248(actor);
        return;
    }
    sub_08083BB4(actor);
    next = (u32)(actor + 0x4D);
    *(u8 *)next = 0x10;
    flags = actor + 0x61;
    value = *flags;
    next = value;
    next += 0x10;
    next <<= 24;
    value = 0x1F000000;
    value &= next;
    value >>= 24;
    *flags = value;
    sub_08037FC4(actor, 0xE);
}

void sub_080863E4(u8 *actor)
{
    u8 *phase = actor + 0x50;
    u8 value = *phase;
    u8 childState;
    if (*phase == 0) {
        *phase = value + 1;
        sub_08083484(actor);
        sub_08086388(actor);
        return;
    }
    childState = (*(u8 **)&actor[0x74])[0x3A];
    if (childState != 0) {
        sub_0807B248(actor);
        return;
    }
    actor[0x4C] = 2;
    actor[0x4D] = childState;
    *phase = childState;
    D_03004F50[0x5D] = childState;
    sub_08037FC4(actor, 0);
}

void sub_08086388(u8 *actor)
{
    u8 *phase = actor + 0x4D;
    if (*phase == 0) {
        u8 *parent = *(u8 **)&actor[0x6C];
        if (parent[0x3A] != 0)
            parent[0x4C] = 8;
        sub_08037FC4(actor, 0xA);
        sub_0808EE54(actor);
        return;
    }
    {
        u8 timer = --actor[0x54];
        if (timer == 0) {
            u8 *state = actor + 0x4C;
            *state = timer;
            *phase = timer;
            actor[0x50] = timer;
        }
    }
    sub_0807B248(actor);
}
