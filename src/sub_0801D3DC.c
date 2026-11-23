extern u8 D_03002AB0[];
extern u8 D_03003418[];
extern u8 D_03004154[];
extern u8 D_03004830[];
extern u8 D_03004E90[];
extern u8 D_030023E0[];
extern void sub_0802FEE0(void);
extern void sub_0800518C(s32, s32, s32);
extern void sub_0801D9C0(s32, s32, s32);
extern void *sub_0803ED98(void);
extern void sub_08003378(s32);

void sub_0801D3DC(void) {
    u8 *p = D_03004830;
    u8 *ptr = p + 0x2C;
    if (--(*ptr) == 0) {
        sub_0801D9C0(0x500, 0, -1);
        sub_0801D9C0(0x600, 0, -1);
        *ptr = 0x50;
        p[0x2B]++;
    }
}

void sub_0801D388(void) {
    u16 *base = (u16 *)D_03002AB0;
    u16 *ptr1 = base + 3; // 0x06/2 = 3
    u16 *ptr2 = (u16 *)(D_03002AB0 + 0x124) + 3;
    u16 *ptr3 = (u16 *)(D_03002AB0 + 0x248) + 3;
    u16 *ptr4 = (u16 *)(D_03002AB0 + 0x36C) + 3;
    
    (*ptr1) += 2;
    (*ptr2) += 2;
    (*ptr3) += 2;
    (*ptr4) += 2;
    
    if ((s32)(*(u16 *)(D_030023E0 + 0x06) + 0x100) < (s32)(*ptr4)) {
        D_03004830[0x2B]++;
    }
}

void sub_0801D560(void) {
    u8 *p = D_03004830;
    u8 *ptr = p + 0x2C;
    if (--(*ptr) == 0) {
        sub_0802FEE0();
        D_03002AB0[0xB8] |= 4;
        D_03003418[0] |= 0x40;
        sub_0800518C(0x66, 0xF88, 0x2F7C);
        p[0x2B]++;
    }
}

void sub_0801D5BC(void) {
    void *ent = sub_0803ED98();
    *(void **)D_03004154 = ent;
    if (ent != NULL) {
        ((u8 *)ent)[0x3A] = 1;
        ((u8 *)ent)[0x3C] = 0x14;
        ((u8 *)ent)[0x3B] = 0x16;
        D_03004E90[0] = 1;
        sub_08003378(0x44);
        D_03004830[0x2C] = 0x40;
        D_03004830[0x2D] = 0x15;
        D_03004830[0x2B]++;
    }
}
