extern u8 D_03004ED1[];
extern u8 D_03004F50[];
extern u8 D_03004FD0[];

struct Actor {
    u8 pad3B[0x3B];
    u8 unk3B;
    u8 pad7D[0x7D - 0x3C];
    u8 unk7D;
    u8 padE0[0xE0 - 0x7E];
    u8 unkE0;
    u8 unkE1;
    u8 unkE2;
};

s32 sub_0807C584(struct Actor *arg0) {
    u32 base;
    u8 val;
    u8 counter;

    base = (u32)arg0->unk3B * 4;
    D_03004FD0[base] = arg0->unkE0;
    D_03004FD0[base + 1] = arg0->unkE1;
    D_03004FD0[base + 2] = arg0->unkE2;
    val = arg0->unk7D;
    D_03004FD0[base + 3] = val;
    arg0->unk7D = (u8)(val & 0xF0);
    counter = D_03004ED1[0];
    D_03004ED1[0] = counter + 1;
    D_03004ED1[counter + 1] = arg0->unk3B;
    return D_03004F50[0x5A] - D_03004F50[0x59];
}
