typedef struct {
    u8 pad00[0x90];
    u32 unk90;
    u32 unk94;
} Unk03002AB0;

extern Unk03002AB0 D_03002AB0;

u8 sub_08038458(s32);

typedef struct {
    u8 pad00[0x88];
    u8 *unk88;
} Unk3149C;

void sub_0803149C(Unk3149C *arg0, u8 arg1) {
    if (!(arg1 & 1) || sub_08038458(0) != 0) {
        u8 *ptr = arg0->unk88;
        u32 val = (ptr[2] << 8) | ptr[1];
        D_03002AB0.unk94 = val;
        D_03002AB0.unk90 = val;
        D_030023D0[0] = 2;
        arg0->unk88 = ptr + 3;
    }
}
