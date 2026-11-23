extern u8 D_030023DC[];
extern u8 D_03002AB0[];
extern u8 D_030023D0[];
extern void *D_03000844;
extern u8 D_03000848;

extern void sub_08033B88(s32, s32);
extern void sub_0800B10C(void);
extern void sub_0800B12C(void);

void sub_0800A0F8(Entity *e){
    if (D_030023DC[0] != 1U){
        e->unk68 += 2U;
    }
}

void sub_0800A110(Entity *e){
    sub_08033B88((s32)D_03002AB0, 1);
    *(u32 *)(D_03002AB0 + 0x94) = 0x0000807D;
    D_030023D0[0] = 2U;
    D_03002AB0[0xB8] &= 0xFB;
    e->unk68 += 2U;
}

void sub_0800A09C(Entity *e){
    *(u32 *)(D_03002AB0 + 0x94) = 0x000080D6;
    D_030023D0[0] = 2U;
    sub_0800B10C();
    e->unk68 += 2U;
}

void sub_0800A06C(Entity *e){
    sub_0800B12C();
    *(u32 *)(D_03002AB0 + 0x94) = 0x0000807C;
    D_030023D0[0] = 2U;
    e->unk68 += 2U;
}
