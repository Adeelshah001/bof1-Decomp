extern u8 D_03002AB0[];
extern u8 D_030023D0[];
extern u8 D_03003420[];
void sub_0800B10C(void);
void sub_08030C80(void);
void sub_08033B88(s32 arg0, s32 arg1);

void sub_0800A294(s32 arg0) {
    u8 *g = D_03002AB0;
    u32 val;
    sub_08033B88((s32)g, 3);
    val = 0x80EF;
    *(u32 *)(g + 0x94) = val;
    *(u8 *)D_030023D0 = 2;
    *(u32 *)(arg0 + 0x68) += 2;
}

void sub_0800A2EC(s32 arg0) {
    u32 val = 0x8089;
    u8 *p1 = D_03002AB0;
    *(u32 *)(p1 + 0x94) = val;
    D_030023D0[0] = 2;
    *(s32 *)(arg0 + 0x68) += 2;
}

void sub_0800A320(s32 arg0) {
    u32 val = 0x80E9;
    u8 *g;
    sub_08030C80();
    g = D_03002AB0;
    *(u32 *)(g + 0x94) = val;
    *(u8 *)D_030023D0 = 2;
    *(u32 *)((u8 *)D_03003420 + ((u32)0xF4 << 1)) += 2;
    *(u32 *)(arg0 + 0x68) += 2;
}

void sub_0800A360(s32 arg0) {
    u32 val = 0x80EA;
    u8 *g = D_03002AB0;
    *(u32 *)(g + 0x94) = val;
    *(u8 *)D_030023D0 = 2;
    sub_0800B10C();
    *(u32 *)(arg0 + 0x68) += 2;
}
