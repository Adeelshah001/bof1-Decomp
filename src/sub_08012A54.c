extern u8 D_03002AB0[];
extern u8 D_03003420[];
extern void *D_03004154;
extern u8 D_03004830[];

void sub_080074C4(void);
void *sub_0803ED98(void);

void sub_08012B84(void) {
    D_03002AB0[0xB8] &= 0xF7;
    D_03002AB0[0x1DC] &= 0xF7;
    D_03002AB0[0x300] &= 0xF7;
    D_03002AB0[0x424] &= 0xF7;
}

void sub_08012C2C(Entity *arg0) {
    u8 *state = D_03002AB0;
    (*(u32 *)(state + 0x88))++;
    (*(u32 *)(state + 0x1AC))++;
    (*(u32 *)(state + 0x2D0))++;
    (*(u32 *)(state + 0x3F4))++;
    sub_080074C4();
    (*(u16 *)(D_03003420 + 6))++;
    arg0->unk68 += 2;
}

void sub_08012A54(void) {
    void *ent;
    u32 *p;

    ent = sub_0803ED98();
    D_03004154 = ent;
    if (ent != NULL) {
        ((u8 *)ent)[0x3A] = 1;
        ((u8 *)D_03004154)[0x3C] = 0x14;
        ((u8 *)D_03004154)[0x3B] = 0x0C;
        p = (u32 *)((u8 *)D_03004154 + 0x48);
        *p = (*p & 0xFF000000) | 0x0091B200;
    }
    D_03004830[0x2B]++;
}

void sub_080128AC(void) {
    u8 *state = D_03002AB0;
    sub_080074C4();
    (*(u32 *)(state + 0x88))++;
    (*(u32 *)(state + 0x1AC))++;
    (*(u32 *)(state + 0x2D0))++;
    (*(u32 *)(state + 0x3F4))++;
    D_03004830[0x2B]++;
}
