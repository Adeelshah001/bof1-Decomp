typedef struct {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
} Unk02011280;

extern u8 D_03000AE0[];
extern Unk02011280 D_02011280[];

void sub_08059978(void);

void sub_0805B198(void) {
    u16 *p = (u16 *)D_03000AE0;
    p[1] = 2;
    p[0] = 6;
}

void sub_0805B1A8(void) {
    u16 *p = (u16 *)D_03000AE0;
    p[1] = 0;
    p[0] = 0xFFFF;
}

void sub_0805B180(void) {
    u16 *p = (u16 *)D_03000AE0;
    u16 zero = 0;
    p[1] = 1;
    p[0] = zero;
    sub_08059978();
}

void sub_0805B15C(void) {
    s32 i;
    *(u32 *)(D_03000AE0 + 8) = 0;
    for (i = 0; i < 0x40; i++) {
        D_02011280[i].unk4 = 0;
        D_02011280[i].unk2 = 0;
        D_02011280[i].unk0 = 0;
    }
}
