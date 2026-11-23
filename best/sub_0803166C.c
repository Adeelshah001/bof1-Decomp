extern u16 gEntityPool[];
extern u8 D_03003F98[];
extern void sub_080327A4(Entity *arg0, u16 *arg1, u16 *arg2);

void sub_08031624(Entity *arg0) {
    u16 sp0, sp2;
    u8 flag;
    
    arg0->unk54 = 0x3C;
    sub_080327A4(arg0, &sp0, &sp2);
    gEntityPool[1] = sp0;
    gEntityPool[3] = sp2;
    flag = D_03003F98[0];
    flag |= 0x80;
    D_03003F98[0] = flag;
    ((u8 *)arg0)[0x50] = 2;
}

void sub_0803166C(Entity *arg0) {
    u8 *p = &arg0->unk54;
    *p = *p - 1;
    if (*p == 0) {
        arg0->unk4D = 0;
        ((u8 *)arg0)[0x50] = 0;
    }
}

void sub_080317DC(Entity *arg0) {
    u8 *base = (u8 *)arg0;
    u8 zero = 0;
    base[0xB8] = base[0xB8] & 0xF7;
    arg0->unk4D = zero;
    *(u16 *)(base + 0x50) = zero;
}

void sub_08031830(Entity *arg0) {
    u8 *p = &arg0->unk54;
    *p = *p - 1;
    if (*p == 0) {
        ((u8 *)arg0)[0x50] = 0;
        arg0->unk4D = 0;
    }
}
