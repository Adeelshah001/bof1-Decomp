extern u32 D_03001694;
extern u8 D_030043DC;
extern u16 D_0200AA10[];
extern vu32 D_040000D4[];
extern u8 *D_03000AD4;
extern u8 D_030016E0;
extern u8 D_02019FC0[], D_020210C0[], D_020212C0[];
extern u8 D_030023DC, D_03004E90;
extern u16 D_03000AD2, D_0300168C, D_03001644, D_03002508;
extern vu16 D_04000054;

u16 *sub_080584E0(const u16 *source)
{
    const u16 *next = source;
    u32 flag = 1;
    u16 i;
    u16 *destination;

    D_03001694 |= flag;
    D_030043DC = flag;
    i = 0;
    destination = D_0200AA10;
    do {
        u16 color = *next;
        destination[i] = color;
        next++;
        i++;
    } while (i < 256);
    return D_0200AA10;
}

void sub_0805886C(void)
{
    u8 *state = D_03000AD4;
    vu32 *dma;
    u32 source;
    u32 control;

    *state = 0;
    D_030016E0--;
    dma = D_040000D4;
    source = (u32)D_02019FC0;
    dma[0] = source;
    dma[1] = (u32)D_020210C0;
    control = 0x80000010;
    dma[2] = control;
    (void)dma[2];
    source += 0x800;
    dma[0] = source;
    dma[1] = (u32)D_020212C0;
    dma[2] = control;
    (void)dma[2];
}

void sub_080588F8(s8 *state)
{
    s8 *fields = state + 3;
    u32 enabled = 1;
    fields[1] = enabled;
    state[3] = 0;
    fields[2] = enabled;
    fields[4] = enabled;
    D_030023DC = enabled;
    if (fields[3] == 0x2A) {
        u16 *saved = &D_03000AD2;
        u16 *current = &D_0300168C;
        *saved = *current;
        *current = 0xDF;
        D_03001644 = 0x10;
    }
}

void sub_08058954(s8 *state)
{
    s8 *fields = state + 3;
    s32 inactive = -1;

    if (D_03002508 != 0 && D_03004E90 == 0)
        D_0300168C = 0xDE;
    else
        D_0300168C = 0xDF;
    D_04000054 = 0x10;
    fields[1] = inactive;
    fields[0] = D_03001644;
    fields[2] = 8;
    D_030023DC = 1;
}
