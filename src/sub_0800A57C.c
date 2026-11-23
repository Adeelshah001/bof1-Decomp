extern u8 D_03002AB0[];
extern u8 D_030034A0[];
extern u8 D_030035A0[];

void sub_0800B0FC(void *);
void sub_0800B104(void *);
void sub_08007400(void);
void sub_08033B88(void *, s32);

typedef struct {
    u8 pad00[0x94];
    u32 unk94;
} Unk2AB0;

void sub_0800A57C(u8 *arg0) {
    u8 *actors = D_03003420;
    sub_0800B0FC(actors);
    sub_0800B0FC(actors + 0x80);
    *(u32 *)(arg0 + 0x68) += 2;
}

void sub_0800A4D4(u8 *arg0) {
    u8 *actor = D_030034A0;
    sub_080547DC(actor, 0);
    actor += 0x100;
    *(u32 *)(actor + 0x68) += 2;
    ((Unk2AB0 *)D_03002AB0)->unk94 = 0x8016;
    D_030023D0[0] = 2;
    *(u32 *)(arg0 + 0x68) += 2;
}

void sub_0800A654(u8 *arg0) {
    sub_0800B104(D_030035A0);
    ((Unk2AB0 *)D_03002AB0)->unk94 = 0x801D;
    D_030023D0[0] = 2;
    *(u32 *)(arg0 + 0x68) += 2;
}

void sub_0800A6DC(u8 *arg0) {
    u16 val = *(u16 *)(arg0 + 6);
    if (val <= 0x317C) {
        *(u16 *)(arg0 + 6) = 0x317C;
        *(u16 *)(arg0 + 0x2C) = 0x317C;
        *(u16 *)(arg0 + 0x4A) = 0x317C;
        sub_08007400();
        sub_08033B88(D_03002AB0, 0);
        sub_0800B104(D_030034A0);
        *(u32 *)(arg0 + 0x68) += 2;
    } else {
        val -= 2;
        *(u16 *)(arg0 + 6) = val;
        *(u16 *)(arg0 + 0x2C) = val;
    }
}
