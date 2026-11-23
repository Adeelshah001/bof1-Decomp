extern s32 sub_08019520(s32 arg0, s32 arg1);
extern void sub_08004EA0(s32 arg0);
extern void sub_08054B60(void);

extern u8 D_030035A0[];
extern u8 D_03004830[];
extern u8 D_03003420[];

void sub_0801AF68(void) {
    if ((sub_08019520((s32)D_030035A0, (s32)(D_030035A0 + 0x80)) << 0x18) != 0) {
        D_03004830[0x2C] = 0x3C;
        D_03004830[0x2B]++;
    }
}

void func_0801B3DC(void) {
    return;
}

void sub_0801B8B0(void) {
    sub_08004EA0(0x8478);
    *(void **)(D_03003420 + 0x78) = &sub_08054B60;
    D_03004830[0x2C] = 0xEC;
    D_03004830[0x2B]++;
}

void sub_0801B8E4(void) {
    sub_08004EA0(0x8479);
    *(void **)(D_03003420 + 0xF8) = &sub_08054B60;
    D_03004830[0x2C] = 0xEC;
    D_03004830[0x2B]++;
}
