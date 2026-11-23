typedef struct {
    u8 pad00[0x3B];
    u8 unk3B;
    u8 pad3C[0x54 - 0x3C];
    u16 unk54;
} EntityF;

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Struct23E0;

extern u8 D_030023E0[];

void sub_0804FE90(EntityF *);
void sub_0804FDE4(EntityF *);

void sub_0804F868(EntityF *arg0) {
    u16 *ptr;
    s32 val;

    sub_0804FE90(arg0);
    if (((Struct23E0 *)D_030023E0)->unkA4 != 1) {
        val = (~arg0->unk3B + 7) << 4;
        ptr = &arg0->unk54;
    } else {
        ptr = &arg0->unk54;
        val = 0;
    }
    *ptr = val;
    sub_0804FDE4(arg0);
}
