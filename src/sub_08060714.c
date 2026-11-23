extern u8 D_03004620[];
extern u8 D_03004410[];
extern u8 D_03002AB0[];

void sub_08061EFC(void) {
    s32 i;
    u8 *base = D_03004410;
    u8 active = base[0x14];
    u8 *state = D_03004620;
    if (active != 0) {
        u8 *selection = state + 0xC4;
        u8 *event = D_03002AB0;
        u8 *source = base + 0x14;
        i = 0;
        do {
            u8 *dest = event + ((*selection) * 0x124);
            dest += 0xE8;
            dest[i] = source[i];
            i++;
        } while (i <= 3);
    }
    state[3] = 0;
}

typedef struct {
    u8 pad00[0x06];
    u16 unk6;
} Struct16E0;

extern Struct16E0 D_030016E0;
extern u8 D_03004760[];
u8 sub_0805B040(s32);

s32 sub_08060714(void) {
    u8 ret = sub_0805B040(0);
    if (D_030016E0.unk6 & 2) {
        D_03004620[2] = 0x1A;
        D_03004620[3] = 0;
        D_03004620[7] = 0xFF;
    }
    if (D_030016E0.unk6 & 1) {
        D_03004760[0x19] = 0;
        if (ret != 0) {
            D_03004620[3] = 6;
        } else {
            D_03004620[3] = 4;
        }
    }
    return 0;
}

extern const u8 D_08100744[];
void sub_08068938(s32, s32);
s32 sub_0805D8F4(void);
void sub_08060354(void);
void sub_0805B358(const void *, s32, s32, s32, s32);

s32 sub_080606B4(void) {
    u8 *ptr;
    sub_08068938(2, 6);
    ptr = D_03004620;
    ptr[0xB4] = 0;
    ptr[0xB5] = sub_0805D8F4() - 0xC;
    ptr[0xB2] = 0xFF;
    ptr[0xB0] = 8;
    sub_08060354();
    sub_0805B358(D_08100744, 0, 0xB, 0, 1);
    D_03004760[0x19] = 2;
    return 0;
}

typedef struct {
    u8 pad00[0x01];
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
    u8 pad06[0x0C - 0x06];
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
    u8 unk10;
    u8 unk11;
    u8 unk12;
    u8 pad13[0x60 - 0x13];
    vu8 unk60;
    u8 pad61[0x63 - 0x61];
    u8 unk63;
} Struct71;

void sub_0807158C(Struct71 *arg0) {
    if (arg0->unk63 != 0xFF) {
        arg0->unk5 = 0;
        arg0->unk2 = 0;
        arg0->unk3 = 0;
        arg0->unkC = 0;
        arg0->unkD = 0;
        arg0->unkE = 0;
        arg0->unkF = 0;
        arg0->unk10 = 0;
        arg0->unk11 = 0;
        arg0->unk12 = 0;
        arg0->unk1 = 8;
        arg0->unk4 = 0;
    } else {
        arg0->unk63 = 0;
        arg0->unk5 = 0;
        arg0->unk2 = 0;
        arg0->unk3 = 0;
        arg0->unkC = 0;
        arg0->unkD = 0;
        arg0->unkE = 0;
        arg0->unkF = 0;
        arg0->unk10 = 0;
        arg0->unk11 = 0;
        arg0->unk12 = 0;
        arg0->unk60;
        arg0->unk1 = 0x1E;
    }
}
