extern u8 D_03002AB0[];
extern u8 D_030023DC;
extern u16 D_03001864;
extern u32 D_03001694;

u8 sub_08033420(void);
void sub_08024028(s32);
void sub_0802FD60(s32);
void sub_0800312C(s32, s32);

void sub_080247C4(void) {
    D_03002AB0[0xB8] |= 0x40;
    D_03004830[0x40]++;
}

void sub_080247E4(void) {
    if (sub_08033420() != 0) {
        sub_08024028(0x12);
        D_03002AB0[0xB8] &= 0xBF;
        D_03004830[0x40]++;
    }
}

void sub_0802478C(void) {
    u8 *p = D_03004830;
    if (--p[0x41] == 0) {
        sub_0802FD60(0x38);
        p[0x40]++;
        p[0x41] = 0x20;
    }
}

void sub_08024A20(void) {
    if (D_030023DC == 0xFF) {
        D_03001864 = 0x17;
        D_03001694 &= ~0x80;
        sub_0800312C(0x10, 2);
        D_03004830[0x40]++;
        ((Entity *)D_03003420)->unk3A = 0;
    }
}
