extern u8 D_03004F50[];

struct Unk91A80 {
    u8 pad00[0x54];
    u8 unk54 : 8;
    u8 unk55 : 8;
    u8 pad56[0x61 - 0x56];
    u8 unk61 : 8;
};

struct Unk91A80 *sub_0809568C(struct Unk91A80 *, s32);
void sub_08096CD4(struct Unk91A80 *);

void sub_08091A80(struct Unk91A80 *arg0) {
    struct Unk91A80 *other;

    if ((--arg0->unk54) & 0x80) {
        arg0->unk54 = 2;
        if ((--arg0->unk55) & 0x80) {
            sub_08096CD4(arg0);
            return;
        }
        other = sub_0809568C(arg0, 3);
        if ((--arg0->unk61) & 0x80) {
            arg0->unk61 = D_03004F50[0x60] - 1;
        }
        other->unk61 = arg0->unk61;
    }
}
