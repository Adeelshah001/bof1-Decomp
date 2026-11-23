extern u8 D_030023E0[];
extern u8 D_03002AB0[];
extern u8 D_03003418[];
extern u8 D_03004154[];
extern u8 D_03004830[];
extern u8 D_03004890[];
extern u8 D_03004E90[];
extern void sub_0802FEE0(void);
extern void sub_0800518C(s32, s32, s32);
extern void *sub_0803ED98(void);
extern void sub_08003378(s32);
extern void sub_080379D4(s32);

void sub_0801D388(void) {
    u8 *base = D_03002AB0;
    u16 *ptr;
    
    ptr = (u16 *)(base + 0x06);
    *ptr += 2;
    
    ptr = (u16 *)(base + 0x124 + 0x06);
    *ptr += 2;
    
    ptr = (u16 *)(base + 0x248 + 0x06);
    *ptr += 2;
    
    ptr = (u16 *)(base + 0x36C + 0x06);
    *ptr += 2;
    
    if ((s32)(*(u16 *)(D_030023E0 + 0x06) + 0x100) < (s32)*ptr) {
        D_03004830[0x2B]++;
    }
}

void sub_0801D560(void) {
    u8 *p = D_03004830;
    u8 *ptr = p + 0x2C;
    u8 val;
    
    val = --(*ptr);
    if (val == 0) {
        sub_0802FEE0();
        D_03002AB0[0xB8] |= 4;
        D_03003418[0] |= 0x40;
        sub_0800518C(0x66, 0xF88, 0x2F7C);
        p[0x2B]++;
    }
}

void sub_0801D5BC(void) {
    void *ent = sub_0803ED98();
    u8 **slot = (u8 **)D_03004154;
    
    *slot = ent;
    if (ent != NULL) {
        ent = *slot;
        ((u8 *)ent)[0x3A] = 1;
        ent = *slot;
        ((u8 *)ent)[0x3C] = 0x14;
        ent = *slot;
        ((u8 *)ent)[0x3B] = 0x16;
        D_03004E90[0] = 1;
        sub_08003378(0x44);
        D_03004830[0x2C] = 0x40;
        D_03004830[0x2D] = 0x15;
        D_03004830[0x2B]++;
    }
}

void sub_0801D33C(void) {
    u8 *p = D_03004830;
    u8 *ptr = p + 0x2C;
    u8 val;
    
    val = --(*ptr);
    if (val == 0) {
        D_03002AB0[0xB8] |= 0x88;
        *(u16 *)D_03004890 = 0xC8;
        sub_080379D4(0x20);
        *ptr = 0x64;
        p[0x2B]++;
    }
}
