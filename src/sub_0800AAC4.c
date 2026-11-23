typedef struct {
    u8 pad00[0x88];
    u32 unk88;
    u8 pad8C[0x94 - 0x8C];
    u32 unk94;
} Unk2AB0;

extern u8 D_030023D0[];
extern u8 D_03002AB0[];
extern u8 D_030034A0[];
extern u8 D_030037A0[];

void sub_0800B104(void *);

void sub_0800AA6C(u8 *arg0) {
    u32 val;
    sub_0800B104(D_030034A0);
    val = 0x81A4;
    ((Unk2AB0 *)D_03002AB0)->unk94 = val;
    D_030023D0[0] = 2;
    *(u32 *)(arg0 + 0x68) += 2;
}

void sub_0800AAC4(u8 *arg0) {
    u32 val;
    val = 0x81A5;
    ((Unk2AB0 *)D_03002AB0)->unk94 = val;
    D_030023D0[0] = 2;
    sub_0800B104(D_030037A0);
    *(u32 *)(arg0 + 0x68) += 2;
}

void sub_0800AAF8(u8 *arg0) {
    u32 val;
    sub_0800B104(D_030034A0);
    val = 0x81A6;
    ((Unk2AB0 *)D_03002AB0)->unk94 = val;
    D_030023D0[0] = 2;
    *(u32 *)(arg0 + 0x68) += 2;
}

void sub_0800ADDC(u8 *arg0) {
    u32 val;
    sub_0800B104(D_030037A0);
    val = 0x81CB;
    ((Unk2AB0 *)D_03002AB0)->unk94 = val;
    D_030023D0[0] = 2;
    *(u32 *)(arg0 + 0x68) += 2;
}
