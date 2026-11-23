extern u16 D_03001864;
extern u8 D_03004F50[];
void sub_0803A8EC(void *);
void sub_0803800C(void *, s32, s32);
void sub_0807B56C(Entity *);
void sub_08083BB4(Entity *);
void sub_0807B71C(Entity *);
void sub_0807B760(Entity *);
s32 sub_080936A0(Entity *);

void sub_0807B578(Entity *actor, u8 mode)
{
    u8 *field = (u8 *)actor + 0x54;
    u8 flags;

    *field = mode;
    field += 0x9D;
    flags = *field;
    if (0x80 & flags)
        ((u8 *)actor)[0x2C] = 0;
    else
        actor->unk2C = actor->unk6 + 0x18;
    if ((u16)(D_03001864 - 0x10) > 1)
        sub_0803A8EC(actor);
}

void sub_0807B51C(Entity *actor)
{
    u8 *first = (u8 *)actor->unk74;
    u8 *second = (u8 *)actor->unk78;
    u32 flags = first[0x61];
    u8 a, b;

    flags &= 0xF0;
    if (flags) {
        b = second[2];
        a = first[2];
    } else {
        b = second[6];
        a = first[6];
    }
    if (b < a) {
        sub_0807B56C(actor);
        return;
    }
    sub_08083BB4(actor);
    ((u8 *)actor->unk74)[0x4C] = 4;
    ((u8 *)actor)[0xD8] = 0x10;
    sub_0807B56C(actor);
}

void sub_0807B620(Entity *actor, u8 mode, u8 delay)
{
    u8 *field = (u8 *)actor + 0xD8;

    *field = delay;
    field -= 0x84;
    *field = mode;
    sub_0803800C(actor, 0xC, 0xA);
    if (((u8 *)actor)[0xF1] & 0x80)
        ((u8 *)actor)[0x2C] = 0;
    else
        actor->unk2C = actor->unk6 + 0x18;
    if ((u16)(D_03001864 - 0x10) > 1)
        sub_0803A8EC(actor);
}

void sub_0807B674(Entity *actor)
{
    u8 *state;
    u8 *field;
    u16 value;

    if ((*(u16 *)((u8 *)actor + 0x44) >> 8) == 0)
        sub_0807B760(actor);
    sub_08083BB4(actor);
    ((u8 *)actor)[0xD8] = 0x19;
    state = D_03004F50;
    field = state + 0x74;
    value = *(u16 *)field;
    field -= 0x34;
    *(u16 *)field = value;
    if (sub_080936A0(actor) != 0) {
        sub_0807B71C(actor);
    } else {
        state[0x5D] = 0;
        sub_0807B578(actor, 0xFF);
    }
}
