extern u8 D_03002AB0[];
extern void sub_080017EC(s32 arg0);
extern void sub_08005140(void *arg0, s32 arg1);
extern void sub_0805CF40(s32 arg0, u16 *arg1);

void sub_0800E9D0(Entity *arg0) {
    sub_080017EC(0x5B);
    sub_08005140(arg0, 0x8111);
    D_03002AB0[0xB8] &= 0xFB;
    D_03004830[0x2D] = 0;
    arg0->unk68 += 2;
}

void sub_0800EA50(Entity *arg0) {
    u16 sp0;
    sub_0805CF40(0x13D, &sp0);
    *(u16 *)(0x0202DBD0 + (sp0 * 2)) = 0x139;
    D_03002AB0[0xB8] &= 0xFB;
    D_03004830[0x2D] = 0;
    arg0->unk68 += 2;
}

void sub_0800EB68(void) {
}

void sub_0800EBA8(void) {
}
