extern u8 D_030023E0[];
extern u8 D_030023DC[];
extern u8 D_030033D8[];
extern u8 D_03002AB0[];
extern u8 D_03004584[];
extern u8 D_030040F8[];
extern u8 D_030023D0[];
extern u8 D_03003420[];
extern void sub_080031D4(s32);
extern s32 sub_08038458(s32);
extern void sub_0802FD60(s32);
extern s32 sub_08030C80(void);

void sub_0800893C(void) {
    if (*(u16 *)(D_030023E0 + 0xA4) == 0x6C && *(u8 *)D_030023DC != 1) {
        *(u8 *)(D_03004830 + 0x2C) = 0x3E;
        *(u8 *)(D_03004830 + 0x2B) += 1;
    }
}

void sub_08008C58(void) {
    sub_080031D4(1);
    *(u8 *)D_030033D8 = 0;
    *(u16 *)(D_03002AB0 + 0x4C) = 0;
    *(u16 *)(D_03002AB0 + 0x50) = 0;
    *(u8 *)D_03004584 = 1;
}

void sub_080094B0(void) {
    if ((sub_08038458(1) << 24) != 0) {
        if (*(u8 *)(D_03002AB0 + 0x3C) == 0) {
            *(u16 *)D_030040F8 = 2;
            sub_0802FD60(2);
        } else {
            *(u16 *)D_030040F8 = 4;
            sub_0802FD60(4);
        }
        *(u8 *)(D_03004830 + 0x2B) += 1;
    }
}

void sub_0800A390(void *arg0) {
    u32 r5 = 0x80EB;
    sub_08030C80();
    *(u32 *)(D_03002AB0 + 0x94) = r5;
    *(u8 *)D_030023D0 = 2;
    *(u32 *)(D_03003420 + 0x1E8) += 4;
    *(u32 *)((u8 *)arg0 + 0x68) += 2;
}
