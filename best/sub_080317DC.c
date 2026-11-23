extern u16 gEntityPool[];
extern u8 D_03003F98[];
extern void sub_080327A4(void *arg0, u16 *arg1, u16 *arg2);

void sub_08031624(Entity *arg0) {
    u16 sp0, sp2;
    
    arg0->unk54 = 0x3C;
    sub_080327A4(arg0, &sp0, &sp2);
    gEntityPool[1] = sp0;  // offset 2 = index 1
    gEntityPool[3] = sp2;  // offset 6 = index 3
    D_03003F98[0] |= 0x80;
    ((u8 *)arg0)[0x50] = 2;
}

void sub_0803166C(Entity *arg0) {
    u8 temp = arg0->unk54 - 1;
    arg0->unk54 = temp;
    if (temp == 0) {
        arg0->unk4D = 0;
        ((u8 *)arg0)[0x50] = 0;
    }
}

void sub_080317DC(Entity *arg0) {
    ((u8 *)arg0)[0xB8] &= 0xF7;
    arg0->unk4D = 0;
    *(u16 *)(((u8 *)arg0) + 0x50) = 0;
}

void sub_08031830(Entity *arg0) {
    u8 temp = arg0->unk54 - 1;
    arg0->unk54 = temp;
    if (temp == 0) {
        ((u8 *)arg0)[0x50] = 0;
        arg0->unk4D = 0;
    }
}
