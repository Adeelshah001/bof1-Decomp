extern u8 D_03002AB0[];
extern u8 D_03003820[];

void sub_0800B104(void *);

typedef struct {
    u8 pad00[0x88];
    u32 unk88;
} Unk03002AB0;

void sub_0800AF60(Entity *arg0) {
    ((Unk03002AB0 *)D_03002AB0)->unk88++;
    sub_0800B104(D_03003820);
    arg0->unk68 += 2;
}

void sub_0800AEE4(Entity *arg0) {
    u8 *base = D_03003420;
    sub_0800B104(base);
    sub_0800B104(base + 0x80);
    sub_0800B104(base + 0x100);
    sub_0800B104(base + 0x180);
    sub_0800B104(base + 0x200);
    sub_0800B104(base + 0x280);
    sub_0800B104(base + 0x300);
    arg0->unk68 += 2;
}

typedef struct {
    u8 pad00[0x168];
    u32 unk168;
    u8 pad16C[0x1E8 - 0x16C];
    u32 unk1E8;
} Unk03003420;

void sub_0800B5D4(void) {
    Unk03003420 *s = (Unk03003420 *)D_03003420;
    s->unk168++;
    s->unk1E8++;
}
