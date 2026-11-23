extern u8 D_03002AB0[];
extern u8 D_030023D0[];
extern u8 D_03003420[];
extern u8 D_030034A0[];
extern u8 D_030035A0[];
extern u8 D_030037A0[];

void sub_0800B104(void *);
void sub_08007684(s32, s32, s32);
void sub_080547DC(void *, s32);

typedef struct {
    u8 pad00[0x94];
    u32 unk94;
} Unk2AB0;

void sub_0800A940(u8 *arg0) {
    u32 val;
    sub_0800B104(D_03003420);
    val = 0x80FC;
    ((Unk2AB0 *)D_03002AB0)->unk94 = val;
    D_030023D0[0] = 2;
    *(u32 *)(arg0 + 0x68) += 2;
}

void sub_0800A974(u8 *arg0) {
    u32 val;
    u8 *p = D_030035A0;
    sub_080547DC(p, 3);
    sub_080547DC(p + 0x80, 1);
    D_03004830[0x2B] += 1;
    val = 0x80FD;
    ((Unk2AB0 *)D_03002AB0)->unk94 = val;
    D_030023D0[0] = 2;
    *(u32 *)(arg0 + 0x68) += 2;
}

void sub_0800A9F4(u8 *arg0) {
    u32 val;
    sub_0800B104(D_030034A0);
    val = 0x81A2;
    ((Unk2AB0 *)D_03002AB0)->unk94 = val;
    D_030023D0[0] = 2;
    *(u32 *)(arg0 + 0x68) += 2;
}

void sub_0800AA28(u8 *arg0) {
    u32 val;
    sub_0800B104(D_030037A0);
    sub_08007684(0x11, 0xA2 << 2, 0x218C);
    val = 0x81A3;
    ((Unk2AB0 *)D_03002AB0)->unk94 = val;
    D_030023D0[0] = 2;
    *(u32 *)(arg0 + 0x68) += 2;
}
