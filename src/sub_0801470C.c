/* identical to sub_08010270 (matched), with its names changed by decompdecomp */
extern u8 D_03002AB0[];
extern u8 D_0202DBD0[];
extern u16 D_03004100;
extern u16 D_03004114;
extern u16 D_03004120;
extern u16 D_03004750;

void sub_080379D4(s32 arg0);
u8 sub_0805CD90(u16 arg0);
s8 sub_08010340(u16 arg0);
void sub_08010384(u8 arg0);
u8 sub_080103B0(s16 arg0);

void sub_0801470C(void) {
    D_03002AB0[0xB8] &= 0xFB;
    D_03004830[0x2B]++;
}

void sub_080102AC(u16 arg0, u16 arg1) {
    if (D_03004120 != arg0 || D_03004100 != arg1) {
        D_03004114 = 0;
        return;
    }
    D_03004750 = 0;
    sub_080379D4(0x17);
    D_03004114 = 0;
}

s8 sub_080102FC(u16 arg0) {
    u8 sp0 = 0;
    D_03004120 = arg0;
    if (sub_0805CD90(D_03004120)) {
        sub_08010340(*(s16 *)&D_03004120);
    } else {
        sub_08010384(sp0);
    }
    return *(s8 *)&D_03004114;
}

s8 sub_08010340(u16 arg0) {
    u16 sp0 = 0;
    if (sub_080103B0((s16)arg0)) {
        *(u16 *)(D_0202DBD0 + 0x204 + sp0 * 2) = arg0;
    }
    return *(s8 *)&D_03004114;
}
