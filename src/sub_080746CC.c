void sub_08084644(void);
extern u16 D_030023E0[], D_030047FC;
extern u8 D_03003410;

void sub_080746CC(void *unused)
{
    u8 *state;
    u16 zero;
    u8 reset;
    u16 *flags;

    sub_08084644();
    state = D_03004830;
    state += 0x2F;
    zero = 0;
    *state = zero;
    reset = 0;
    D_030047FC = zero;
    D_03003410 = reset;
    flags = D_030023E0;
    flags += 0xA8 / 2;
    *flags |= 0x8000;
}

static inline u16 displayMode(u32 kind)
{
    switch (kind) {
    default:
        return 0;
    case 1:
        return 0x42;
    case 3:
        return 0x80E3;
    }
}

void sub_08074638(u8 *display)
{
    u8 zero = 0;
    u32 kind;
    u16 mode;

    display[1] = 0x24;
    display[2] = zero;
    display[0xC] = 30;
    kind = display[0];
    if (kind > 0x4F)
        kind = 0;

    mode = displayMode(kind);
    if ((u8)mode)
        display[2] = 10;
}
