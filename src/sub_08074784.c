extern vu8 D_03004754;

struct Unk74784 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 pad03[0x5B - 3];
    u8 unk5B : 8;
};

s32 sub_0805A9FC(void);
u8 sub_080739B8(void);

void sub_08074784(struct Unk74784 *arg0) {
    if (sub_0805A9FC() == 0) {
        D_03004754 = 1;
        arg0->unk5B = 1;
    } else if (arg0->unk0 == 3) {
        arg0->unk2 = 0x10;
    } else if (sub_080739B8() != 0) {
        arg0->unk2 = 0xE;
    }
}
