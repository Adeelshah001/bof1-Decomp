extern u8 D_03002AB0[];
extern u8 D_030023D0[];
extern u8 D_0300413C[];
extern u8 D_03003520[];
void sub_08054820(void *arg0, u8 arg1);

void sub_080099DC(s32 arg0) {
    u32 val;
    u8 *p1;
    p1 = D_03002AB0;
    val = 0x8003;
    *(u32 *)(p1 + 0x94) = val;
    D_030023D0[0] = 2;
    *(s32 *)(arg0 + 0x68) += 2;
}

void sub_08009A00(s32 arg0) {
    u32 val;
    u8 *p1;
    p1 = D_03002AB0;
    val = 0x808A;
    *(u32 *)(p1 + 0x94) = val;
    D_030023D0[0] = 2;
    *(s32 *)(arg0 + 0x68) += 2;
}

void sub_08009978(void) {
    u32 base;
    *(u16 *)D_0300413C = 0;
    base = *(u32 *)(D_03002AB0 + 0x94);
    *(u8 *)(base + 0x6F) = 0;
    sub_08054820((void *)(base + 0x6F), *(u8 *)D_0300413C);
}

void sub_08009B18(void *arg0) {
    u8 *base;
    base = D_03003520;
    sub_080547DC(base + 0x00, 0);
    sub_080547DC(base + 0x80, 0);
    sub_080547DC(base + 0x100, 0);
    sub_080547DC(base + 0x180, 0);
    sub_080547DC(base + 0x200, 0);
    sub_080547DC(base + 0x280, 0);
    *(s32 *)(arg0 + 0x68) += 2;
}
