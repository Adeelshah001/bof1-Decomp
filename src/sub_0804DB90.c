typedef struct {
    u8 pad00[0x38];
    u16 unk38;
    u8 pad3A[0xAC - 0x3A];
    u16 unkAC;
    u16 unkAE;
    u8 padB0[0xC9 - 0xB0];
    u8 unkC9;
    u8 unkCA;
} ActorCD;

extern u16 D_030044A0[];

u8 sub_0804E2A4(u32);

void sub_0804DB90(ActorCD *arg0) {
    arg0->unkAC = 0x1000;
    arg0->unkC9 = 0x10;
    D_030044A0[sub_0804E2A4(arg0->unkC9) >> 1] = arg0->unkAC;
    arg0->unkAE = 0x1400;
    arg0->unkCA = 0x20;
    D_030044A0[sub_0804E2A4(arg0->unkCA) >> 1] = arg0->unkAE;
    arg0->unk38 = 0x100;
}
