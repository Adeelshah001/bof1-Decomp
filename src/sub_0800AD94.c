extern u8 D_03002AB0[];
extern u8 D_03003520[];

void sub_0800B104(void *);
void sub_08007684(s32, s32, s32);

typedef struct {
    u8 pad00[0x88];
    u32 unk88;
    u8 pad8C[0x94 - 0x8C];
    u32 unk94;
} Unk2AB0;

void sub_0800AC74(u8 *arg0) {
    ((Unk2AB0 *)D_03002AB0)->unk88 += 1;
    arg0[0x3A] &= ~0x40;
    *(u32 *)(arg0 + 0x68) += 2;
}

void sub_0800AD58(u8 *arg0) {
    u8 *base = D_03003520;
    sub_0800B104(base);
    sub_0800B104(base + 0x80);
    sub_0800B104(base - 0x100);
    sub_0800B104(base + 0x100);
    *(u32 *)(arg0 + 0x68) += 2;
}

void sub_0800AD94(u8 *arg0) {
    u32 val;
    u8 *actors = D_03003420;
    sub_0800B104(actors);
    sub_0800B104(actors + 0x200);
    sub_0800B104(actors + 0x80);
    val = 0x81CA;
    ((Unk2AB0 *)D_03002AB0)->unk94 = val;
    D_030023D0[0] = 2;
    *(u32 *)(arg0 + 0x68) += 2;
}

void sub_0800AB2C(u8 *arg0) {
    sub_08007684(0x11, 0x288, 0x21AC);
    ((Unk2AB0 *)D_03002AB0)->unk88 += 1;
    *(u32 *)(arg0 + 0x68) += 2;
}
