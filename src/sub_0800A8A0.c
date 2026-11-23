extern u8 D_03002AB0[];
extern u8 D_030034A0[];
extern u8 D_030037A0[];

void sub_0800B104(void *);

typedef struct {
    u8 pad00[0x88];
    u32 unk88;
    u8 pad8C[0x94 - 0x8C];
    u32 unk94;
} Unk2AB0;

void sub_0800A838(u8 *arg0) {
    u8 *actors = D_03003420;
    sub_0800B104(actors);
    sub_0800B104(actors + 0x200);
    *(u32 *)(arg0 + 0x68) += 2;
}

void sub_0800A7F8(u8 *arg0) {
    Unk2AB0 *p;
    sub_0800B104(D_030034A0);
    p = (Unk2AB0 *)D_03002AB0;
    p->unk88++;
    p->unk94 = 0x80F8;
    D_030023D0[0] = 2;
    *(u32 *)(arg0 + 0x68) += 2;
}

void sub_0800A8A0(u8 *arg0) {
    u8 *actors = D_03003420;
    sub_0800B104(actors);
    sub_0800B104(actors + 0x80);
    sub_0800B104(actors + 0x100);
    sub_0800B104(actors + 0x180);
    ((Unk2AB0 *)D_03002AB0)->unk88++;
    *(u32 *)(arg0 + 0x68) += 2;
}

void sub_0800A8E8(u8 *arg0) {
    u32 val;
    sub_0800B104(D_030037A0);
    val = 0x80FA;
    ((Unk2AB0 *)D_03002AB0)->unk94 = val;
    D_030023D0[0] = 2;
    *(u32 *)(arg0 + 0x68) += 2;
}
