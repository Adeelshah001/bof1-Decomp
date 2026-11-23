extern void (*const D_08151DA8[])(void);
extern void (*const D_08151C68[])(void);
extern u8 D_03004F50[];
extern u8 D_03004584[];
void sub_080A0774(s32, void (*)(void));
void sub_08037FC4(void *, u8);
void sub_080A0A68(void *, const void *, s32);
void sub_080A0AC8(void *, s32, s32);

void sub_0807E444(void) {
    sub_080A0774(0, D_08151DA8[D_03004F50[0]]);
}

u8 sub_0807E414(void) {
    D_03004584[0] = 0;
    sub_080A0774(D_03004F50[0x5B], D_08151C68[D_03004F50[0]]);
    return D_03004584[0];
}

void sub_0807E3CC(void *arg0, u8 arg1) {
    u8 sp0[4];
    u8 sp4[4];

    sub_080A0AC8(sp0, 0, 4);
    sp0[1] = 1;
    sub_080A0A68(sp4, (void *)0x080A6870, 4);
    *(u8 *)((u8 *)arg0 + 0x40) = sp0[arg1];
    sub_08037FC4(arg0, sp4[arg1]);
}

extern u8 D_03002BD4[];
void sub_080017EC(s32);

void sub_0807E1F0(void) {
    sub_080017EC(0x7D);
    *(u16 *)(D_03002BD4 + 0x002) = 0x358;
    *(u16 *)(D_03002BD4 + 0x124) = 0x358;
    *(u16 *)(D_03002BD4 + 0x248) = 0x358;
    *(u16 *)(D_03002BD4 + 0x12A) = 0x3E9C;
    *(u16 *)(D_03002BD4 + 0x24E) = 0x3E8C;
    *(u8 *)(D_03002BD4 + 0x185) = 2;
    *(u8 *)(D_03002BD4 + 0x2A9) = 2;
}
