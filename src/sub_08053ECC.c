typedef struct Unk53ECC {
    u8 pad00[0x3B];
    u8 unk3B;
    u8 pad3C[0x5C - 0x3C];
    u16 unk5C : 16;
    u8 pad5E[0x70 - 0x5E];
    u8 unk70;
    u8 unk71;
    u8 pad72[0x78 - 0x72];
    void (*unk78)(struct Unk53ECC *);
} Unk53ECC;

void sub_08037C98(Unk53ECC *, s32);
void sub_0803A8EC(Unk53ECC *);
void sub_08053F44(Unk53ECC *);
void sub_08054238(Unk53ECC *);

void sub_08053ECC(Unk53ECC *arg0) {
    if (D_030023D0[0] == 0 && arg0->unk70 == 0) {
        if (arg0->unk71 == 0) {
            arg0->unk78 = sub_08054238;
        } else if ((--arg0->unk5C) & 0x8000) {
            arg0->unk78 = sub_08053F44;
        }
    }
    if (arg0->unk3B == 0x8E || arg0->unk3B == 0xA1) {
        sub_08037C98(arg0, 0);
    }
    sub_0803A8EC(arg0);
}
