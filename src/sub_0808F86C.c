struct UnkStruct8F8 {
    u8 pad00[0x38];
    u16 unk38;
    u8 pad3A[0x4D - 0x3A];
    u8 unk4D;
    u8 pad4E[0x54 - 0x4E];
    u8 unk54;
    u8 pad55[0x78 - 0x55];
    u32 unk78;
};

void sub_0808F790(struct UnkStruct8F8 *);
void sub_08038278(struct UnkStruct8F8 *);
void sub_0807B248(struct UnkStruct8F8 *);
void sub_0803815C(struct UnkStruct8F8 *, u32);
void sub_08083BB4(struct UnkStruct8F8 *);

void sub_0808F818(struct UnkStruct8F8 *arg0) {
    if (--arg0->unk54 == 0) {
        arg0->unk54 = 2;
        arg0->unk4D = 8;
    }
    sub_0808F790(arg0);
}

void sub_0808F840(struct UnkStruct8F8 *arg0) {
    sub_08038278(arg0);
    if (--arg0->unk54 == 0) {
        arg0->unk4D = 0x0A;
    }
    sub_0807B248(arg0);
}

void sub_0808F7D8(struct UnkStruct8F8 *arg0) {
    sub_08038278(arg0);
    if (--arg0->unk54 == 0) {
        arg0->unk38 = 0x1E0;
        sub_0803815C(arg0, arg0->unk78);
        arg0->unk4D = 6;
        arg0->unk54 = 0x24;
    }
    sub_0807B248(arg0);
}

void sub_0808F86C(struct UnkStruct8F8 *arg0) {
    if (--arg0->unk54 == 0) {
        sub_08083BB4(arg0);
        arg0->unk4D = 0x10;
    }
    sub_0807B248(arg0);
}
