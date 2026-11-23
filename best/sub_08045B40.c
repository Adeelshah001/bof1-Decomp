void sub_08045FE8(Entity *);
void sub_08045FCC(Entity *);
void sub_080384C0(s32, s32);
extern u16 D_03002AB0[];

void sub_08045B40(Entity *actor)
{
    s32 x = actor->unk6 - 0x10;
    vu16 *target = (vu16 *)((u8 *)actor + 0x7E);
    u8 mode;

    *target = x;
    actor->unk64 = (u32)sub_08045FE8;
    mode = ((u8 *)actor)[0x6C];
    if (mode == 0 || mode == 2) {
        s32 value = *target + 4;
        *(u16 *)((u8 *)actor + 0x4A) = value;
    } else {
        u16 value = *target;
        *(u16 *)((u8 *)actor + 0x46) = value;
    }
}

void sub_08045B7C(Entity *actor)
{
    s32 x = actor->unk6 + 0x10;
    vu16 *target = (vu16 *)((u8 *)actor + 0x7E);
    u8 mode;

    *target = x;
    actor->unk64 = (u32)sub_08045FCC;
    mode = ((u8 *)actor)[0x6C];
    if (mode == 0 || mode == 2) {
        s32 value = *target + 4;
        *(u16 *)((u8 *)actor + 0x4A) = value;
    } else {
        u16 value = *target;
        *(u16 *)((u8 *)actor + 0x46) = value;
    }
}

void sub_08045AA4(Entity *actor)
{
    s32 x, y;

    u8 flags = ((u8 *)actor)[0x6C];
    u32 mask = 0x80;
    mask &= flags;
    if (!mask) {
        switch (((u8 *)actor)[0x61]) {
        case 0:
            x = 0;
            y = 0xFF00;
            break;
        case 8:
            x = 0x100;
zero_y:
            y = 0;
            break;
        case 16:
            x = 0;
            y = 0x100;
            break;
        case 24:
            x = 0xFF00;
            goto zero_y;
        default:
            x = 0;
            goto zero_y;
        }
        sub_080384C0(x, y);
    }
}

void sub_08045A68(Entity *actor)
{
    u8 mode = ((u8 *)actor)[0x61];

    if (mode != 0 && mode != 0x10) {
        u16 *bg = D_03002AB0;
        bg[1] = (0xFFF0 & bg[1]) | 8;
        return;
    }
    D_03002AB0[3] = (0xFFF0 & D_03002AB0[3]) | 0xC;
}
