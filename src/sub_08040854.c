typedef struct {
    u8 pad00[0x08];
    u16 unk8;
    u16 pad0A;
    u16 unkC;
    u8 pad0E[0x12 - 0x0E];
    u16 unk12;
    u8 pad14[0x22 - 0x14];
    u8 unk22;
    u8 pad23[0x27 - 0x23];
    u8 unk27;
    u8 pad28;
    u8 unk29;
    u8 pad2A[2];
    u32 unk2C;
} Unk08040844;

typedef struct {
    u8 pad00[0x06];
    u16 unk6;
} Unk030016E0;

typedef struct {
    u8 pad00[0x0A];
    u8 unkA;
    u8 pad0B;
    u8 unkC;
    u8 pad0D;
    u8 unkE;
    u8 unkF;
} Unk03004410;

typedef struct {
    u8 pad00[0x07];
    u8 unk7;
} Unk03004620;

extern Unk030016E0 D_030016E0;
extern Unk03004410 D_03004410;
extern Unk03004620 D_03004620;
extern u16 D_03004E30;
extern const u8 D_080FBD0E[];

void sub_0803FC58(Unk08040844 *);
void sub_080379D4(s32);
u8 sub_0805B040(s32);
void sub_0805B404(s32);
void sub_080675B8(s32);

void sub_08040844(Unk08040844 *arg0) {
    arg0->unk29 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk2C = 0;
}

void sub_08040854(Unk08040844 *arg0) {
    if (arg0->unk27 == 1) {
        arg0->unk12++;
        if (--arg0->unk22 == 0) {
            sub_08040844(arg0);
            arg0->unk29 = 0;
            return;
        }
    }
    sub_0803FC58(arg0);
}

s32 sub_08040D54(void) {
    u8 r2 = sub_0805B040(2);
    u16 r1 = D_030016E0.unk6;

    if (r1 & 2) {
        goto block_3;
    }
    if (r1 & 1) {
        if (r2 == 1) {
block_3:
            sub_080379D4(3);
            sub_080675B8(0);
            sub_0805B404(2);
            D_03004410.unkA = 2;
        } else {
            sub_080379D4(2);
            D_03004410.unkA = 0xE;
        }
    }
    return 0;
}

s32 sub_08040FC0(void) {
    u8 r4 = sub_0805B040(0);

    if ((D_03004E30 & 7) == 0) {
        r4 = 1;
    }
    if (D_030016E0.unk6 & 1) {
        sub_080379D4(2);
        D_03004620.unk7 = 0;
        D_03004410.unkC = D_080FBD0E[r4];
        D_03004410.unkE = 0;
        D_03004410.unkF = 0;
    }
    return 0;
}
