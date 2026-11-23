typedef struct {
    u8 pad00[2];
    u16 unk2;
    u8 pad04[0x40];
    u32 unk44;
    u8 pad48[0x1AC - 0x48];
    u32 unk1AC;
} Big2AB0;

extern Big2AB0 D_03002AB0;
extern u8 D_030033F0[];

void sub_08040A74(s32);
void sub_08030AD8(s32);
void sub_080379D4(s32);
void sub_08004EA0(s32);

void sub_0801C510(void) {
    sub_08040A74(6);
    D_030033F0[0] = 6;
    D_03004830[0x2B]++;
}

void sub_0801C534(void) {
    u8 *base;
    D_030033F0[0] = 0;
    base = D_03004830;
    base[0x2C] = 0x20;
    base[0x2B]++;
}

void sub_0801C4E8(void) {
    u8 *base;
    sub_08030AD8(0x86);
    sub_080379D4(0x20);
    base = D_03004830;
    base[0x2C] = 0x40;
    base[0x2B]++;
}

void sub_0801C558(void) {
    sub_080379D4(0x11);
    sub_08004EA0(0x87CE);
    D_030033F0[0] = 8;
    D_03002AB0.unk1AC++;
    D_03004830[0x2B]++;
}
