extern u8 D_03002AB0[];
extern u8 D_030034A0[];
extern u8 D_03002510[];
extern u8 gEntityPool[];

void sub_08003378(s32);
void sub_08054C18(void);
void sub_08019F1C(void);
void sub_08004EA0(s32);

void sub_0801BFB8(void) {
    D_03002AB0[0xB8] |= 0x40;
    D_03004830[0x2C] = 0x14;
    D_03004830[0x2B]++;
}

void sub_0801BFE0(void) {
    Entity *p;
    sub_08003378(0x40);
    p = (Entity *)D_030034A0;
    *(u16 *)((u8 *)p + 2) = 0x598;
    p->unk78 = (u32)sub_08054C18;
    D_03004830[0x2C] = 0xFF;
    D_03004830[0x2B]++;
}

void sub_0801BF88(void) {
    u8 *p = D_03002510;
    if (--p[0x54] != 0) {
        sub_08019F1C();
    } else {
        *(u16 *)(p + 0x38) = 0x120;
        sub_08019F1C();
    }
}

void sub_0801BF5C(void) {
    if (gEntityPool[0x3A] == 0) {
        sub_08004EA0(0x87FE);
        D_03004830[0x2B]++;
    }
}
