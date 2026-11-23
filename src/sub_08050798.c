struct Unk50798 {
    u8 pad00[0x3B];
    u8 unk3B;
    u8 pad3C[0x54 - 0x3C];
    u16 unk54;
    u8 pad56[0x61 - 0x56];
    u8 unk61;
};

void sub_08050970(struct Unk50798 *);

void sub_08050798(struct Unk50798 *arg0)
{
    s32 zero = 0;
    arg0->unk54 = 0x102;
    arg0->unk61 = 0x18;
    arg0->unk3B = zero;
    sub_08050970(arg0);
}
