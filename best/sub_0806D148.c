void sub_0806DF40(u8 *actor)
{
    u8 *base;
    u8 *field = actor + 0x7D;
    u32 flags = 0xF0;
    flags &= *field;
    *field = flags;
    base = D_03003420;

    if (actor >= base && actor < (u8 *)((u32)base + 0xB68))
        flags |= 1;
    actor[0x7D] = flags;
    actor[0xE0] = 2;
    actor[0xE2] &= 0xF0;
}

extern s32 D_03001090;
extern u8 D_03004ED0[];

void sub_0806D148(u8 *state)
{
    u8 *mode = D_03004830;
    u32 low;
    s32 timer;
    if (mode[0x3D] & 0xC)
        D_03001090 = 0;
    low = 0xF & state[0x5F];
    state[0xC] = low;
    if (state[0x5F] >> 4 == low) {
        timer = D_03001090;
        if (timer != 0) {
            D_03001090 = timer - 1;
            return;
        }
        {
            state[0xC] = timer;
            state[8] = timer;
            D_03004ED0[0] = timer;
            D_03004ED0[1] = timer;
            D_03004ED0[2] = timer;
            D_03004ED0[3] = timer;
            D_03004ED0[4] = timer;
            state[1] = 2;
        }
    }
}

extern u8 D_0300178C;
extern u8 D_03003410;
extern u32 D_030040F0;
extern u32 D_03003FB0;
extern u32 D_03002500;
extern u16 D_03001780;
extern u8 D_030045B0[];
void sub_0806CE1C(void);

void sub_0806CEF0(void)
{
    u8 *flags;
    D_0300178C = 0;
    D_03003410 = 0;
    D_030040F0 = 0;
    D_03003FB0 = 0;
    D_03002500 = 0;
    D_03001780 = 0;
    flags = D_030045B0;
    flags += 0x46;
    *flags++ = 0;
    *flags++ = 0;
    *flags = 0;
    flags += 5;
    *flags++ = 0;
    *flags = 0;
    sub_0806CE1C();
}

extern u16 D_0202DBD0[];
void sub_08074AA4(void *);

void sub_08070434(u8 *actor, u8 *target)
{
    u32 offset = actor[0x63] * 4;
    u32 direction = target[0x3B];
    u32 data;
    u32 byteOffset;
    u32 index;
    u16 value;
    u16 *entry;
    byteOffset = offset + 2;
    data = (u32)(actor + 0x68);
    *(u8 *)(data + byteOffset) = direction;
    direction = actor[0x58];
    direction >>= 1;
    *(u8 *)(data + (offset + 3)) = direction;
    if (*(u8 *)(data + offset) == 0xC) {
        u32 base;
        index = *(u8 *)(data + (offset + 1));
        base = (u32)D_0202DBD0;
        index <<= 1;
        base += 0x204;
        entry = (u16 *)(index + base);
        value = -0x100;
        value += *entry;
        *entry = value;
    }
    sub_08074AA4(actor);
}
