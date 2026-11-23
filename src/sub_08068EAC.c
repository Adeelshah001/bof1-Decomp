struct Unk03002AB0 {
    u8 pad00[0x3A];
    u8 unk3A;
    u8 pad3B[0xF0 - 0x3B];
    u8 unkF0;
    u8 padF1[0x124 - 0xF1];
};

extern struct Unk03002AB0 D_03002AB0[];
extern u8 D_03004620[];
extern volatile u32 D_040000D4[];
extern u8 D_0201CFC0[];

u8 *sub_08043C30(u8);
void sub_08056C8C(u8, void *);

void sub_08068EF4(u8 arg0) {
    *sub_08043C30(arg0) = 2;
}

s32 sub_08068F08(void) {
    s32 count = 0;
    s32 i;
    for (i = 0; i < 8; i++) {
        if (D_03002AB0[i].unk3A != 0 && !(D_03002AB0[i].unkF0 & 0x40)) {
            count++;
        }
    }
    return count;
}

void sub_08068ECC(s32 arg0) {
    sub_08056C8C(D_03004620[0xB6], &D_03002AB0[arg0]);
}

void sub_08068EAC(void) {
    D_040000D4[0] = (u32)D_0201CFC0;
    D_040000D4[1] = 0x06000000;
    D_040000D4[2] = 0x80002000;
    (void)D_040000D4[2];
}
