struct Unk99158 {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x38 - 0x04];
    u16 unk38;
    u8 pad3A[0x4C - 0x3A];
    u8 unk4C;
    u8 pad4D[0x61 - 0x4D];
    u8 unk61;
    u8 pad62[0x74 - 0x62];
    struct Unk99158 *unk74;
    struct Unk99158 *unk78;
    u8 pad7C[0x7D - 0x7C];
    u8 unk7D;
};

void sub_08099E80(struct Unk99158 *);
void sub_08099E98(void);

void sub_08099158(struct Unk99158 *arg0) {
    struct Unk99158 *temp_r3;

    if (arg0->unk7D != 7) {
        temp_r3 = arg0->unk74;
        if (temp_r3->unk7D != 7) {
            sub_08099E98();
            return;
        }
        arg0->unk61 = temp_r3->unk61;
        arg0->unk4C = temp_r3->unk4C;
    } else {
        if (arg0->unk78->unk2 < arg0->unk2) {
            arg0->unk61 = (arg0->unk61 + 0x10) & 0x1F;
            arg0->unk38 = 0xC0;
            arg0->unk4C = 6;
        }
    }
    sub_08099E80(arg0);
}
