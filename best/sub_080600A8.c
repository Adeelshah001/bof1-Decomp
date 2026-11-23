void sub_080674B8(s32);
void sub_0805B15C(void);
void sub_0805D8CC(s32, s32, s32, s32, u16);

struct Unk030045B0 {
    u8 pad0[0x5A];
    u8 unk5A;
};
extern struct Unk030045B0 D_030045B0;

struct Unk03004620 {
    u8 pad0[0xB4];
    u8 unkB4;
    u8 unkB5;
};
extern struct Unk03004620 D_03004620;

extern u16 D_0202DE92[];

void sub_080600A8(void) {
    s32 i;

    sub_080674B8(2);
    D_030045B0.unk5A = 0;
    if (D_03004620.unkB4 != 0) {
        D_030045B0.unk5A = 1;
    }
    if (D_03004620.unkB4 < D_03004620.unkB5) {
        D_030045B0.unk5A |= 2;
    }
    sub_0805B15C();
    for (i = 0; i < 12; i++) {
        sub_0805D8CC(2, (i & 1) * 11 + 4, i | 1, 0, D_0202DE92[D_03004620.unkB4 + i]);
    }
}
