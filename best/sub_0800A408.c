extern u8 D_03002AB0[];
extern u8 D_030023D0[];
extern u8 D_030034A0[];

void sub_0800B0FC(s32);
void sub_080547DC(void *, s32);

void sub_0800A408(s32 arg0) {
    sub_080547DC(D_030034A0, 1);
    sub_0800B0FC((s32)D_030034A0);
    *(u32 *)(D_03002AB0 + 0x94) = 0x8012;
    *(u8 *)D_030023D0 = 2;
    *(u32 *)(arg0 + 0x68) += 2;
}
