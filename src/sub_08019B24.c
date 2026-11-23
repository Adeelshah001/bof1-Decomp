typedef struct {
    u8 pad00[0xB8];
    u8 unkB8;
} Unk03002AB0;
extern Unk03002AB0 D_03002AB0;
extern u16 D_03004114;

void sub_080187F8(s32);
void sub_08019C90(s32);
void sub_08019B78(s32);
void sub_08019858(void);

void sub_08019C0C(void) {
    sub_080187F8(5);
}

void sub_08019C4C(void) {
    u8 *base = D_03004830;
    u32 timer = base[0x2C];
    timer--;
    base[0x2C] = timer;
    if ((u8)timer == 0) {
        u32 val = *(u16 *)(base + 0x10) & 3;
        if (val != 3) {
            sub_08019C90(val | 0x8400);
        } else {
            sub_08019C90(0x84DF);
        }
    }
}

void sub_08019B5C(s16 arg0) {
    D_03004830[0x2D]++;
    sub_08019B78(arg0);
}

void sub_08019B24(void) {
    u8 *base;
    sub_08019858();
    D_03002AB0.unkB8 |= 4;
    base = D_03004830;
    base[0x3F] = 0x14;
    base[0x40] = 0;
    D_03004114 = 0;
}
