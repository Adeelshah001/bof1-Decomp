typedef struct {
    u8 pad00[0x2B];
    u8 tick;
    u8 mode;
} Ctl2;

extern u8 gEntityPool[];

void sub_0801A9B8(void) {
    Ctl2 *control;
    u8 *mode;

    gEntityPool[0x80]++;
    control = (Ctl2 *)D_03004830;
    mode = &control->mode;
    *mode = 0x23;
    control->tick++;
}
