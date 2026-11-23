extern u16 D_03002CF8[];

void sub_080139E0(u16 arg0, u16 arg1) {
    D_03002CF8[1] = arg0;
    D_03002CF8[0x41] = arg0;
    D_03002CF8[3] = arg1;
    D_03002CF8[0x43] = arg1;
}

extern u16 D_03002E1C[];

void sub_08013A00(u16 arg0, u16 arg1) {
    D_03002E1C[1] = arg0;
    D_03002E1C[0x41] = arg0;
    D_03002E1C[3] = arg1;
    D_03002E1C[0x43] = arg1;
}

void *sub_0803ED98(void);
extern void *D_03004154;
extern u16 D_03004114;

void sub_08013A50(u16 arg0, s32 arg1) {
    u8 *ent;

    ent = sub_0803ED98();
    D_03004154 = ent;
    if (ent != NULL) {
        ent[0x3B] = (u8)arg0;
        ent[0x3A] = 1;
        ent[0x3C] = (u8)(arg0 >> 8);
        *(s32 *)(ent + 0xD4) = arg1;
        D_03004114 = 0;
    } else {
        D_03004114 = 1;
    }
}

void *sub_0803EDDC(u16 arg0);
extern void *D_030023E0;
extern void *sub_08046784;

void sub_08013AA0(void) {
    u8 *ent;

    ent = sub_0803EDDC(*(u16 *)((u8 *)D_030023E0 + 0xA0));
    if (ent != NULL) {
        ent[0x3A] = 1;
        *(void **)(ent + 0x64) = &sub_08046784;
        *(u16 *)(ent + 2) = 0x0D98;
        *(u16 *)(ent + 6) = 0x5C7C;
    }
}
