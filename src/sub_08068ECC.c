struct Unk03002AB0 {
    u8 pad00[0x3A];
    u8 unk3A;
    u8 pad3B[0xF0 - 0x3B];
    u8 unkF0;
    u8 padF1[0x124 - 0xF1];
};

extern struct Unk03002AB0 D_03002AB0[];
extern u8 D_03004620[];

u8 *sub_08043C30(u8);
s32 sub_08056C8C(u8, void *);

u8 *sub_08068EF4(u8 arg0) {
    u8 *p = sub_08043C30(arg0);
    *p = 2;
    return p;
}

s32 sub_08068ECC(s32 arg0) {
    return sub_08056C8C(D_03004620[0xB6], &D_03002AB0[arg0]);
}
