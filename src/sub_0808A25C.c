struct UnkStruct8A1 {
    u8 pad00[0x3A];
    u8 unk3A;
    u8 pad3B[0x4C - 0x3B];
    u8 unk4C;
    u8 pad4D[0x54 - 0x4D];
    u8 unk54;
    u8 pad55[0x6C - 0x55];
    struct UnkStruct8A1 *unk6C;
};

void sub_0808F2C4(struct UnkStruct8A1 *);

void sub_0808A25C(struct UnkStruct8A1 *arg0) {
    if (--arg0->unk54 == 0) {
        struct UnkStruct8A1 *p = arg0->unk6C;
        p->unk3A = 0;
        p->unk4C = 0;
        sub_0808F2C4(arg0);
    }
}
