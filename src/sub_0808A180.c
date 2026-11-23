extern u8 D_03004F50[];

struct UnkStruct8A1 {
    u8 pad00[0x3A];
    u8 unk3A;
    u8 pad3B[0x4C - 0x3B];
    u8 unk4C;
    u8 unk4D;
    u8 pad4E[0x54 - 0x4E];
    u8 unk54;
    u8 unk55;
    u8 pad56[0x6C - 0x56];
    struct UnkStruct8A1 *unk6C;
    u8 pad70[0x74 - 0x70];
    struct UnkStruct8A1 *unk74;
    u8 pad78[0xE0 - 0x78];
    u8 unkE0;
    u8 unkE1;
    u8 padE2[0x106 - 0xE2];
    u16 unk106;
};

void sub_08083BB4(struct UnkStruct8A1 *);
void sub_0808A1FC(struct UnkStruct8A1 *);
u16 sub_0807B2BC(void);
void sub_0808F2C4(struct UnkStruct8A1 *);

void sub_0808A180(struct UnkStruct8A1 *arg0) {
    if (arg0->unk74->unk55 == 1) {
        arg0->unk4D = 0x0C;
        arg0->unk106 = 0x78;
        sub_08083BB4(arg0);
    }
}

void sub_0808A1A8(struct UnkStruct8A1 *arg0) {
    if (arg0->unk74->unk3A == 0) {
        D_03004F50[0x5D] = 0;
        arg0->unkE0 = 0;
        arg0->unkE1 = 0;
        sub_0808A1FC(arg0);
    }
}

void sub_0808A1D4(struct UnkStruct8A1 *arg0) {
    if (sub_0807B2BC() == 0) {
        D_03004F50[0x5F]++;
        sub_0808A1FC(arg0);
    }
}

void sub_0808A25C(struct UnkStruct8A1 *arg0) {
    if (--arg0->unk54 == 0) {
        arg0->unk6C->unk3A = 0;
        arg0->unk6C->unk4C = 0;
        sub_0808F2C4(arg0);
    }
}
