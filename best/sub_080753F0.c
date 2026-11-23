extern u8 D_03002AB0[];
typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Unk23E0;
extern Unk23E0 D_030023E0;
extern const u8 D_0815173C[];

extern const u16 D_08151B6C[];
extern const u16 D_08151B74[];
extern const u8 D_08151B94[];

u8 sub_08075278(s32, u8);
u16 sub_08075520(void);

typedef struct {
    u8 pad00[0x1C];
    u16 unk1C;
    u8 pad1E[0x2E - 0x1E];
    u16 unk2E;
    u8 pad30[0x3B - 0x30];
    u8 unk3B;
    u8 pad3C[0x41 - 0x3C];
    u8 unk41;
    u8 pad42[0x7D - 0x42];
    u8 unk7D;
} Unk75528;

u16 sub_080753F0(const Entity *entity) {
    u16 idx = D_030023E0.unkA4 * 2;
    u8 val;
    if (entity->pad3C[2] != 0) {
        idx |= 1;
    }
    val = D_0815173C[idx];
    D_03002AB0[0xBC] = 0;
    return (val << 8) | 1;
}

u16 sub_080754EC(s32 arg0) {
    s32 i;
    for (i = 0xE; i >= 0; i -= 2) {
        u8 res = sub_08075278(arg0, i);
        if (res == 5 || res == 9) {
            goto found;
        }
    }
    return 0;
found:
    return sub_08075520();
}

void sub_08075528(Unk75528 *arg0) {
    u8 idx = arg0->unk3B;
    u16 val;
    arg0->unk1C = D_08151B6C[idx];
    val = D_08151B74[idx];
    arg0->unk2E = (((val - 0x6000) >> 8) << 9) + (val & 0xFF) + 0x6000;
    idx = D_08151B94[idx];
    arg0->unk41 = idx;
    arg0->unk7D = (idx << 4) | arg0->unk7D;
}
