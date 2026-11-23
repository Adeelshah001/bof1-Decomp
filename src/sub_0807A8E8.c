extern u16 D_03001864;
extern u8 D_03004F50[];
void sub_0803A8EC(void *);
void sub_0803800C(void *, s32, s32);
void sub_0807B56C(Entity *);
void sub_08083BB4(Entity *);
void sub_0807B71C(Entity *);
void sub_0807B760(Entity *);
s32 sub_080936A0(Entity *);
void sub_0807B578(Entity *, u8);
u8 sub_080957BC(Entity *);
void sub_080A0A4C(void *, s32);
void sub_0807A868(Entity *);
extern const s8 D_08151B84[];
extern u16 D_030023E0[];

void sub_0807B6D0(Entity *actor)
{
    u8 result;
again:
    if ((*(u16 *)((u8 *)actor + 0x44) >> 8) == 0)
        sub_0807B760(actor);
    result = sub_080957BC(actor);
    if (result == 0)
        goto finish;
    if (result == 1) {
        ((u8 *)actor)[0xD8] = 0x18;
finish:
        sub_0807B578(actor, 0xFF);
        return;
    }
    if (result == 2)
        goto again;
    sub_0807B71C(actor);
}

void sub_0807B71C(Entity *actor)
{
    u8 mode = 1;
    u8 *field = (u8 *)actor + 0x54;
    u8 flags;
    u32 mask;

    *field = mode;
    field += 0x9D;
    flags = *field;
    mask = 0x80;
    mask &= flags;
    if (mask)
        ((u8 *)actor)[0x2C] = 0;
    else
        actor->unk2C = actor->unk6 + 0x18;
    if ((u16)(D_03001864 - 0x10) > 1)
        sub_0803A8EC(actor);
}

void sub_0807AF8C(Entity *actor)
{
    u8 *field = (u8 *)actor + 0xE2;
    u32 flags = *field;
    u32 mask = 0xF0;
    u32 zero;
    u8 clear;

    mask &= flags;
    zero = 0;
    *field = mask;
    if (mask == 0) {
        field += 0xE;
        flags = *field;
        mask = 0xF1;
        mask &= flags;
        *field = mask;
    }

    field = (u8 *)actor + 0x70;
    *field = zero;
    field += 0x73;
    *field = zero;
    field -= 0x97;
    clear = 0;
    *(u16 *)field = zero;
    field += 4;
    *(u16 *)field = zero;
    actor->unk6C = zero;
    actor->unk74 = zero;
    actor->unk78 = zero;
    field += 0x2C;
    *field = clear;
    field += 0x60;
    sub_080A0A4C(field, 4);
    field = (u8 *)actor + 0xE0;
    *field = clear;
    field++;
    *field = clear;
}

void sub_0807A8E8(Entity *actor)
{
    u32 timer = actor->unk54 - 1;
    actor->unk54 = timer;
    if ((u8)timer == 0) {
        sub_0807A868(actor);
    } else {
        const s8 *movement = D_08151B84;
        u8 *cursor = &actor->unk54 + 1;
        u8 index = *cursor;
        s32 delta = movement[index];
        if (delta != -128) {
            u16 *position;
            *cursor = index + 1;
            position = D_030023E0;
            position[1] += delta;
            position[3] = delta / 2 + position[3];
        }
    }
}
