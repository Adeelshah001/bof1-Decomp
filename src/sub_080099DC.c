extern u8 D_03002AB0[];
extern u8 D_030023D0[];
extern u8 D_0300413C[];
void sub_08054820(void *arg0, u8 arg1);

void sub_080099DC(s32 arg0) {
    u32 val = 0x8003;
    u8 *p1 = D_03002AB0;
    *(u32 *)(p1 + 0x94) = val;
    D_030023D0[0] = 2;
    *(s32 *)(arg0 + 0x68) += 2;
}

void sub_08009A00(s32 arg0) {
    u32 val = 0x808A;
    u8 *p1 = D_03002AB0;
    *(u32 *)(p1 + 0x94) = val;
    D_030023D0[0] = 2;
    *(s32 *)(arg0 + 0x68) += 2;
}

void sub_08009978(void) {
    u8 *p1;
    u32 base;
    u8 *p3;
    *(u16 *)D_0300413C = 0;
    p1 = D_03002AB0;
    base = *(u32 *)(p1 + 0x94);
    p3 = (u8 *)base + 0x6F;
    *p3 = 0;
    sub_08054820((void *)p3, *(u8 *)D_0300413C);
}
