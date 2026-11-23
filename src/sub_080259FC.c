extern u8 D_03002AB0[];
extern void sub_08054B60(void);

void sub_080259E8(void) {
    (*(Entity **)(D_03002AB0 + 0x94))->unk68 -= 3;
}

void sub_080259FC(void) {
    D_03004830[0x3F] = 0x1E;
    D_03004830[0x40] = 0;
    D_03002AB0[0xB8] |= 4;
}

void sub_080259C8(void) {
    D_03002AB0[0xB8] |= 4;
    D_03004830[0x40] += 1;
}

void sub_08025A24(void) {
    ((Entity *)D_03003420)->unk78 = (u32)sub_08054B60;
    D_03004830[0x42] += 1;
    D_03002AB0[0xB8] |= 4;
}
