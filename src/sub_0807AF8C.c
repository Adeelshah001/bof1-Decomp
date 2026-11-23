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

void sub_0807B71C(Entity *actor)
{
    u32 mode = 1;
    u8 *field = (u8 *)actor + 0x54;
    u32 mask;

    *field = mode;
    field += 0x9D;
    mode = *field;
    mask = 0x80;
    mask &= mode;
    if (mask)
        ((u8 *)actor)[0x2C] = 0;
    else
        actor->unk2C = actor->unk6 + 0x18;
    if ((u16)(D_03001864 - 0x10) > 1)
        sub_0803A8EC(actor);
}

void sub_0807AF8C(Entity *actor)
{
    u8 *flagField = (u8 *)actor + 0xE2;
    u8 *field;
    u32 flags = *flagField;
    u32 mask = 0xF0;
    u32 zero;
    u8 clear;

    mask &= flags;
    zero = 0;
    *flagField = mask;
    if (mask == 0) {
        flagField += 0xE;
        flags = *flagField;
        mask = 0xF1;
        mask &= flags;
        *flagField = mask;
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
