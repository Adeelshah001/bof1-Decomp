extern u8 D_03002AB0[];
extern u16 D_0300413C;
extern u8 D_030034A0[];

void sub_08003378(s32);
void sub_0800B0FC(void *);
void sub_08029C44(void);
void sub_080379D4(s32);

void sub_08009B88(Entity *arg0) {
    u8 *base;
    u8 *ptr;
    s32 zero;

    D_0300413C = 0xB;
    base = D_03002AB0;
    ptr = base + 0xC5;
    zero = 0;
    *ptr = 0xB;
    *(base + 0xC6) = zero;
    sub_08029C44();
    sub_080379D4(0x11);
    *ptr = zero;
    arg0->unk68 += 2;
}

void sub_08009C10(Entity *arg0) {
    u32 val;
    u8 *base;

    sub_08003378(0x16);
    val = 0x8010;
    base = D_03002AB0;
    *(u32 *)(base + 0x94) = val;
    *D_030023D0 = 2;
    sub_0800B0FC(D_030034A0);
    arg0->unk68 += 2;
}
