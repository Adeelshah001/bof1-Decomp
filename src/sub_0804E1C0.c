extern u8 D_020127A0[];
extern u8 D_020291C0[];

typedef struct {
    u8 pad00[0xAC];
    u16 unkAC;
    u16 unkAE;
} Unk0804E1C0;

void sub_0804E1C0(Unk0804E1C0 *arg0) {
    u16 i = 0;
    u16 j = 0;
    u32 src = (u32)D_020291C0;
    s32 base = 0x100;
    do {
        s32 off = j + base;
        D_020127A0[i] = *(u8 *)(off + arg0->unkAE + src);
        (D_020127A0 + 1)[i] = *(u8 *)(arg0->unkAC + j + base + src);
        i += 2;
        j += 1;
    } while (i <= 0x13D);
}
