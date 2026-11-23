extern u8 D_03002AB0[];
extern u16 D_030040F8;
extern u16 D_03004114;

void sub_0800D2BC(void);
void sub_0800C078(void);
void sub_0803ADA8(s32);
void sub_080379D4(s32);

typedef struct {
    u8 pad00[0x1AC];
    u32 unk1AC;
    u8 pad1B0[0x2D0 - 0x1B0];
    u32 unk2D0;
} Unk03002AB0_C6F8;

void sub_0800C6F8(void) {
    Unk03002AB0_C6F8 *s = (Unk03002AB0_C6F8 *)D_03002AB0;
    s->unk1AC++;
    s->unk2D0++;
}

void sub_0800C718(void) {
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2C;
    if (--(*ptr) == 0) {
        base[0x2B]++;
        D_030040F8 = 0x14;
        sub_0800D2BC();
        *ptr = 0x10;
        sub_0800C078();
    }
}

void sub_0800C754(void) {
    u8 *base = D_03004830;
    if (--base[0x2D] == 0) {
        base[0x2D] = 0x10;
        sub_0803ADA8(0x1A);
        sub_080379D4(0x15);
    }
}

void sub_0800C86C(void) {
    u8 *state;
    D_03002AB0[0xB8] |= 4;
    state = D_03004830;
    state[0x2A] = 0x10;
    state[0x2B] = 0;
    D_03004114 = 0;
}
