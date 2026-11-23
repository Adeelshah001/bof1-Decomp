typedef struct {
    u8 pad00[0x4C];
    u8 unk4C;
} Sub54;

typedef struct {
    u8 pad00[0x02];
    u8 unk02;
    u8 pad03[0x10 - 0x03];
    u8 unk10;
    u8 pad11[0x4A - 0x11];
    u8 unk4A;
    u8 pad4B[0x54 - 0x4B];
    Sub54 *unk54;
    u8 pad58[0x59 - 0x58];
    u8 unk59;
    u8 unk5A;
    u8 pad5B[0x62 - 0x5B];
    u8 unk62;
    u8 pad63[0x67 - 0x63];
    u8 unk67;
} Actor6E20C;

typedef struct {
    u8 pad00[0x09];
    u8 unk09;
} State03004F30;

extern State03004F30 D_03004F30;
u8 sub_080739B8(Actor6E20C *arg0);

void sub_0806E20C(Actor6E20C *arg0) {
    if (sub_080739B8(arg0) != 0 && arg0->unk54->unk4C != 0x14) {
        u8 idx;
        D_03004F30.unk09 &= 0xE1;
        idx = arg0->unk5A - arg0->unk59;
        idx++;
        ((Actor6E20C *)((u8 *)arg0 + idx))->unk67 = 0x80;
        arg0->unk59 = 0;
        arg0->unk62 &= 0xF0;
        arg0->unk10 = 0;
        if (arg0->unk4A != 0) {
            arg0->unk02 = 0x14;
        } else {
            arg0->unk02 = 0x0A;
        }
    }
}
