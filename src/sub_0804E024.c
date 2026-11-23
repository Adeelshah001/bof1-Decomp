extern u8 D_020291C0[];

struct Unk4E024 {
    u8 pad00[0x02];
    u8 unk02;
    u8 pad03[0x03];
    u16 unk06;
    u8 pad08[0x46 - 0x08];
    u16 unk46;
    u8 pad48[0xAE - 0x48];
    u16 unkAE;
};

void sub_0804E024(struct Unk4E024 *arg0) {
    u16 left;
    u16 right;
    u16 count;

    right = arg0->unk06 + arg0->unkAE;
    left = right;
    count = arg0->unk46;
    do {
        D_020291C0[left + 0x100] = arg0->unk02 + count;
        D_020291C0[right + 0x100] = arg0->unk02 + count;
        left--;
        right++;
        count--;
    } while (!(count & 0x8000));
}
