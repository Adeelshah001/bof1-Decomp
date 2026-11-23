typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x02];
    u16 unk6;
    u8 pad08[0x10 - 0x08];
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u16 unk16;
    u8 pad18[0x22 - 0x18];
    u16 unk22;
    u8 pad24[0x2C - 0x24];
    u16 unk2C;
    u8 pad2E[0x3A - 0x2E];
    u8 unk3A;
    u8 pad3B[0x44 - 0x3B];
    s32 unk44;
    s32 unk48;
    u16 unk4C;
    u8 pad4E[0x50 - 0x4E];
    u16 unk50;
    u8 pad52[0x54 - 0x52];
    u8 unk54;
    u8 unk55;
    u8 pad56[0x78 - 0x56];
    u16 *unk78;
    u8 pad7C[0xE4 - 0x7C];
    u16 unkE4;
    u16 unkE6;
} Unk8FC;

typedef struct {
    u8 pad00[0x4D];
    u8 unk4D;
} Unk8FDD;

void sub_0808FC74(u8 *);
void sub_0808FF80(void *);
void sub_08038278(void *);
void sub_0807C600(void *, s32);
void sub_0807B248(void *);

void sub_0808FC5C(u8 *arg0) {
    arg0[0x54] = 5;
    arg0[0x55] = 4;
    sub_0808FC74(arg0);
}

void sub_0808FDD4(Unk8FC *arg0) {
    arg0->unk2 = arg0->unk78[1] - 0x28;
    arg0->unk6 = 0x2E80;
    arg0->unk2C = 0x2E80;
    arg0->unk12 = 0;
    arg0->unk10 = 0x8000;
    arg0->unk44 = 0;
    arg0->unk16 = 8;
    arg0->unk14 = 0;
    arg0->unk48 = -0x800;
    ((Unk8FDD *)arg0)->unk4D = 8;
    sub_0808FF80(arg0);
}

void sub_0808FA60(Unk8FC *arg0) {
    arg0->unk4C = 0;
    arg0->unk50 = 0;
    arg0->unk22 = 0;
    arg0->unk3A = 0;
}

void sub_0808F92C(Unk8FC *arg0) {
    sub_08038278(arg0);
    if (--arg0->unk54 == 0) {
        arg0->unk2 = arg0->unkE4;
        arg0->unk2C = arg0->unk6 = arg0->unkE6;
        sub_0807C600(arg0, 0);
    }
    sub_0807B248(arg0);
}
