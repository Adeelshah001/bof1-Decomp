void sub_08045FE8(Entity *);
void sub_08045FCC(Entity *);
void sub_080384C0(s32, s32);
extern u16 D_03002AB0[];
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
            y = 0;
            break;
        case 16:
            x = 0;
            y = 0x100;
            break;
        case 24:
            x = 0xFF00;
            y = 0;
            break;
        default:
            x = 0;
            y = 0;
            break;
        }
        sub_080384C0(x, y);
    }
}
