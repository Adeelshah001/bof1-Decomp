void sub_08081BC4(void *, u16 *);

struct Unk81B54 {
    u8 pad00[0x09];
    u8 unk9;
    u8 pad0A[0x0C - 0x0A];
    u8 unkC;
    u8 pad0D[0x2A - 0x0D];
    u8 unk2A[0x59 - 0x2A];
    u8 unk59;
};

void sub_08081B54(struct Unk81B54 *arg0, u16 arg1) {
    u16 sp0;

    if (arg1 > 0xC) {
        arg1 = 0xC;
    }
    arg0->unk2A[arg1] = 0;
    arg0->unk2A[arg1 + 1] = 0;
    arg0->unk59 = arg1;
    sp0 = 0;
    arg0->unk9 = 5;
    arg0->unkC = 0x40;
    sub_08081BC4(arg0, &sp0);
    arg0->unkC = 0x40;
    sub_08081BC4(arg0, &sp0);
    arg0->unkC = 0x80;
    sub_08081BC4(arg0, &sp0);
    arg0->unkC = 0x20;
    sub_08081BC4(arg0, &sp0);
    arg0->unkC = 0x10;
    sub_08081BC4(arg0, &sp0);
}
