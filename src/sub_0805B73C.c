typedef struct {
    u16 unk0;
    u16 unk2;
    u32 unk4;
    s32 unk8;
    u8 unkC[0x18];
} Unk03000AE0;

typedef struct {
    u8 *unk0;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8[0x5C];
} Unk03000B10;

typedef struct {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
} Unk02011280;

extern Unk03000AE0 D_03000AE0;
extern Unk03000B10 D_03000B10[];
extern Unk02011280 D_02011280[];
extern const u8 D_080FFB0C[];
extern const char D_080A677C[];
extern const char D_080A679C[];

void sub_080352D0(const char *, const char *, s32, ...);

void sub_0805B73C(s32 arg0, u8 arg1) {
    D_03000B10[arg0].unk4 = arg1;
}

void sub_0805B74C(s32 arg0, s32 arg1) {
    Unk03000B10 *p;

    D_03000B10[arg0].unk8[arg1] = 1;
    p = &D_03000B10[arg0];
    if (p->unk4 == arg1) {
        while (p->unk8[p->unk4] != 0) {
            if (++p->unk4 > p->unk5) {
                p->unk4 = p->unk6;
            }
        }
    }
}

void sub_0805B5F8(s32 arg0, u8 *arg1) {
    s32 i;
    const u8 *src = &D_080FFB0C[arg0 * 8];
    for (i = 0; i < 4; i++) {
        arg1[i] = *src++;
    }
}

void sub_0805B5A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 < 0 || arg0 >= D_03000AE0.unk8) {
        sub_080352D0(D_080A677C, D_080A679C, 0x1CB, arg0);
        return;
    }
    if (arg1 >= 0) {
        D_02011280[arg0].unk0 = arg1;
    }
    if (arg2 >= 0) {
        D_02011280[arg0].unk2 = arg2;
    }
    if (arg3 >= 0) {
        D_02011280[arg0].unk4 = arg3;
    }
}
