/* identical to sub_08009BC0 (matched), with its names changed by decompdecomp */
extern u8 D_03002AB0[];
extern u16 D_0300413C;
extern u8 D_030034A0[];

void sub_08003378(s32);
void sub_0800B0FC(void *);
void sub_08029C44(void);
void sub_080379D4(s32);

void sub_08009B70(Entity *arg0) {
    u8 *ptr = D_03002AB0;
    ptr += 0xB8;
    *ptr &= 0xFB;
    arg0->unk68 += 2;
}

void sub_08009B88(Entity *arg0) {
    u8 *base;
    u8 *ptr;

    D_0300413C = 0xB;
    base = D_03002AB0;
    ptr = base + 0xC5;
    *ptr = 0xB;
    *(base + 0xC6) = 0;
    sub_08029C44();
    sub_080379D4(0x11);
    *ptr = 0;
    arg0->unk68 += 2;
}

void sub_08009BF8(Entity *arg0) {
    u8 *ptr = D_03004830;
    ptr += 0x2B;
    *ptr += 1;
    arg0->unk68 += 2;
}

void sub_08009C10(Entity *arg0) {
    u8 *ptr;

    sub_08003378(0x16);
    ptr = D_03002AB0;
    *(u32 *)(ptr + 0x94) = 0x8010;
    *D_030023D0 = 2;
    sub_0800B0FC(D_030034A0);
    arg0->unk68 += 2;
}
