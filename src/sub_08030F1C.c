typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x1E - 0x08];
    u8 unk1E;
    u8 pad1F[0x22 - 0x1F];
    u16 unk22;
    u8 pad24[0x2C - 0x24];
    u16 unk2C;
    u8 pad2E[0x3A - 0x2E];
    u8 unk3A;
    u8 pad3B[0x40 - 0x3B];
    u8 unk40;
    u8 pad41[0x4D - 0x41];
    u8 unk4D;
    u8 pad4E[0x50 - 0x4E];
    u8 unk50;
    u8 pad51[0x54 - 0x51];
    u8 unk54;
    u8 pad55[0xB8 - 0x55];
    u8 unkB8;
    u8 unkB9;
    u8 unkBA;
} Struct_08030F;

typedef void (*Sub08030EFunc)(Struct_08030F *);

extern Struct_08030F *D_0300458C;
extern u16 D_030023D4;
extern u16 D_030040E0;
extern const Sub08030EFunc D_080FA450[];

void sub_0803A8EC(void *);
void sub_080323E4(void);
void sub_08032B78(void);
void sub_080A0AC8(void *, s32, s32);
void sub_08037C98(void *, s32);

s32 sub_08030F1C(Struct_08030F *arg0) {
    s32 ret = 0;

    arg0->unk3A &= 0x7F;
    arg0->unkBA &= 0xFE;
    if ((arg0->unkBA & 2) == 0) {
        ret = 1;
    }
    arg0->unkBA |= 2;
    return ret;
}

s32 sub_08030E80(Struct_08030F *arg0) {
    D_080FA450[arg0->unk4D >> 1](arg0);
    D_030023D4 = D_0300458C->unk2;
    D_030040E0 = D_0300458C->unk6;
    arg0->unk2C = arg0->unk6;
    if ((arg0->unkB8 & 8) == 0) {
        sub_0803A8EC(arg0);
    }
    return 0;
}

void sub_080311B8(Struct_08030F *arg0) {
    u8 val = --arg0->unk54;

    if (val == 0) {
        sub_080323E4();
        sub_08032B78();
        D_03004830[0x36] = val;
        arg0->unkB8 &= 0xFB;
        arg0->unk4D = val;
        arg0->unk50 = val;
    }
}

void sub_08030A9C(Struct_08030F *arg0) {
    u8 sp0[4];
    u8 *p = sp0;

    sub_080A0AC8(p, 0, 4);
    p[1] = 1;
    sub_08037C98(arg0, 0);
    arg0->unk40 = p[((u8)(arg0->unk1E - arg0->unk22) >> 1) & 3];
}
