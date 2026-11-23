void sub_08045FE8(Entity *);
void sub_08045FCC(Entity *);
void sub_080384C0(s32, s32);
extern u16 D_03002AB0[];

void sub_08045B40(Entity *actor)
{
    s32 x = actor->unk6 - 0x10;
    u16 *target = (u16 *)((u8 *)actor + 0x7E);
    u8 mode;

    *target = x;
    ((volatile Entity *)actor)->unk64 = (u32)sub_08045FE8;
    mode = ((u8 *)actor)[0x6C];
    if (mode == 0 || mode == 2) {
        s32 value = *(vu16 *)target + 4;
        *(u16 *)((u8 *)actor + 0x4A) = value;
    } else {
        u16 value = *(vu16 *)target;
        *(u16 *)((u8 *)actor + 0x46) = value;
    }
}

void sub_08045B7C(Entity *actor)
{
    s32 x = actor->unk6 + 0x10;
    u16 *target = (u16 *)((u8 *)actor + 0x7E);
    u8 mode;

    *target = x;
    ((volatile Entity *)actor)->unk64 = (u32)sub_08045FCC;
    mode = ((u8 *)actor)[0x6C];
    if (mode == 0 || mode == 2) {
        s32 value = *(vu16 *)target + 4;
        *(u16 *)((u8 *)actor + 0x4A) = value;
    } else {
        u16 value = *(vu16 *)target;
        *(u16 *)((u8 *)actor + 0x46) = value;
    }
}

void sub_08045A68(Entity *actor)
{
    u8 mode = ((u8 *)actor)[0x61];

    if (mode == 0)
        goto layer3;
    if (mode == 0x10)
        goto layer3;
    {
        vu16 *bg = (vu16 *)0x03002AB0;
        u16 value = bg[1];
        bg[1] = (value & 0xFFF0) | 8;
        return;
    }
layer3:
    {
        vu16 *bg = (vu16 *)0x03002AB0;
        u16 value = bg[3];
        bg[3] = (value & 0xFFF0) | 0xC;
    }
}
