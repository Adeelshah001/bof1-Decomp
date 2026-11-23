typedef struct {
    u8 pad[0xC];
    u8 timer : 8;
} EncounterDisplay;

void sub_080746CC(EncounterDisplay *);
void sub_08084644(void);
extern u16 D_030023E0[], D_030047FC;
extern u8 D_03003410;

void sub_0807469C(u8 *display, u16 index)
{
    display += 0x68;
    display += index;
    *display = 0x80;
}

void sub_080746AC(EncounterDisplay *display)
{
    if (--display->timer & 0x80)
        sub_080746CC(display);
}

void sub_080746CC(EncounterDisplay *unused)
{
    u8 *state;
    u16 zero;
    u8 reset;
    u16 mask;
    u16 *flags;

    sub_08084644();
    state = D_03004830 + 0x2F;
    zero = 0;
    *state = zero;
    reset = 0;
    D_030047FC = zero;
    D_03003410 = reset;
    flags = &D_030023E0[0xA8 / 2];
    mask = 0x8000;
    *flags |= mask;
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

    switch (kind) {
    default:
        mode = 0;
        break;
    case 1:
        mode = 0x42;
        break;
    case 3:
        mode = 0x80E3;
        break;
    }
    if ((u8)mode)
        display[2] = 10;
}
