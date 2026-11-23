extern u8 D_03002E1C[];
void sub_08054C18(void);
void sub_08033AF4(s32);
void sub_0807E3CC(void *, s32);
void sub_0803EE88(void *);

void sub_0801B004(void) {
    Entity *p = (Entity *)D_03003420;
    u32 v = 0x96C0;
    u8 *base;
    p->unk6 = v;
    p->unk2C = v;
    p->unk78 = (u32)sub_08054C18;
    base = D_03004830;
    base[0x2C] = 0x80;
    base[0x2B]++;
}

void sub_0801AF98(void) {
    Entity *p;
    u32 v;
    u8 *base;
    sub_08033AF4(0xE);
    p = (Entity *)D_03002E1C;
    *(u16 *)((u8 *)p + 2) = 0x158;
    v = 0x379C;
    p->unk6 = v;
    p->unk2C = v;
    sub_0807E3CC(p, 2);
    sub_0803EE88(D_03003420);
    base = D_03004830;
    base[0x2B]++;
}
