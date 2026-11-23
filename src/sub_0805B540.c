typedef struct {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
} Unk02011280;

typedef struct {
    u8 pad00[0x08];
    u32 unk8;
    u8 unk0C[0x0A];
    u8 pad16[2];
    s32 unk18;
} Unk03000AE0;

extern Unk03000AE0 D_03000AE0;
extern u8 D_03000B08;
extern u8 D_03004550[];
extern Unk02011280 D_02011280[];
extern const u16 D_0814E0EC[];
extern const u32 D_0814E09C[];

void sub_0805B15C(void);
void sub_08059978(void);
void sub_0805ABF4(u16, s32, u32);
void sub_08059A90(u8);
s32 sub_080A07AC(s32, s32);

void sub_0805B138(void) {
    s32 i;
    for (i = 9; i >= 0; i--) {
        D_03000AE0.unk0C[i] = 0;
    }
    sub_0805B15C();
    sub_08059978();
}

void sub_0805B540(s32 arg0) {
    sub_0805ABF4(D_0814E0EC[arg0], 0, D_0814E09C[arg0]);
}

s32 sub_0805B568(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    Unk02011280 *entry = &D_02011280[D_03000AE0.unk8];
    entry->unk0 = arg0;
    entry->unk2 = arg1;
    entry->unk4 = ((arg2 & 0xF) << 0xC) | ((arg3 & 3) << 0xA) | arg4;
    return D_03000AE0.unk8++;
}

void sub_0805B920(void) {
    u8 saved = D_03000B08;
    s32 val = D_03000AE0.unk18;
    u8 tmp = (u8)sub_080A07AC(saved, val) * val;
    if (D_03004550[0x23] & 0x80) {
        tmp += 0xF;
    } else {
        tmp += 8;
    }
    D_03000B08 = tmp;
    sub_08059A90(0x27);
    D_03000B08 = saved;
}
