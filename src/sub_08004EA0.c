extern u8 D_03002AB0[]; extern u8 D_030023D0[];
void sub_08004EA0(s32 arg0){
    u8 *base = D_03002AB0;
    *(u32 *)(base + 0x94) = (u32)arg0;
    D_030023D0[0] = 2;
}
