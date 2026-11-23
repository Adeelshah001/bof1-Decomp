extern u16 D_0300168C;
extern u16 D_03001644;

struct UnkStruct8CA {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x40 - 0x2E];
    u8 unk40;
    u8 unk41;
    u8 pad42[0x4D - 0x42];
    u8 unk4D;
    u8 pad4E[0x54 - 0x4E];
    u8 unk54;
    u8 unk55;
    u8 pad56[0x74 - 0x56];
    struct UnkStruct8CA *unk74;
    u32 unk78;
    u8 pad7C[0xE0 - 0x7C];
    u8 unkE0;
    u8 padE1[0xE4 - 0xE1];
    u16 unkE4;
    u16 unkE6;
};

void sub_0808CD30(struct UnkStruct8CA *);
void sub_0808CD74(struct UnkStruct8CA *);
void sub_0808CD88(struct UnkStruct8CA *);
void sub_0807C484(struct UnkStruct8CA *);
s32 sub_08083300(struct UnkStruct8CA *, s32);
void FillPaletteColorsWhite(void);
s32 sub_08003104(void);
void sub_08037FC4(struct UnkStruct8CA *, s32);
void sub_0808E888(struct UnkStruct8CA *);
void sub_0808CE7C(struct UnkStruct8CA *);
void sub_08083484(struct UnkStruct8CA *);

void sub_0808CD04(struct UnkStruct8CA *arg0) {
    switch (arg0->unkE0) {
    default:
        sub_0808CD30(arg0);
        break;
    case 8:
        sub_0808CD74(arg0);
        break;
    case 10:
        sub_0808CD88(arg0);
        break;
    }
}

void sub_0808CD30(struct UnkStruct8CA *arg0) {
    s32 r5;
    sub_0807C484(arg0);
    do {
        r5 = sub_08083300(arg0, 0x3A);
    } while (r5 != 0);
    arg0->unk74->unk78 = arg0->unk78;
    FillPaletteColorsWhite();
    arg0->unk54 = (sub_08003104() & 3) + 0x3C;
    arg0->unk55 = r5;
    arg0->unk4D = 4;
}

void sub_0808CBE4(struct UnkStruct8CA *arg0) {
    arg0->unk40 = 0;
    FillPaletteColorsWhite();
    sub_08037FC4(arg0, 0);
    arg0->unk2 = 0x0F4F;
    arg0->unkE4 = 0x0F4F;
    arg0->unk6 = 0x2F5F;
    arg0->unkE6 = 0x2F5F;
    arg0->unk2C = 0x2F5F;
    sub_0808E888(arg0);
}

void sub_0808CABC(struct UnkStruct8CA *arg0) {
    if (--arg0->unk54 != 0) {
        if (!(arg0->unk54 & 1)) {
            sub_0808CE7C(arg0);
        } else {
            D_0300168C = 0x84;
            D_03001644 = 0x10;
            arg0->unk41 = 0x0E;
        }
    } else {
        sub_08083484(arg0);
        arg0->unk4D = 0x0A;
        sub_0808CE7C(arg0);
    }
}
