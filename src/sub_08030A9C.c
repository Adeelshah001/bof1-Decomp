typedef struct {
    u8 pad00[0x1E];
    u8 unk1E;
    u8 pad1F[0x22 - 0x1F];
    u16 unk22;
    u8 pad24[0x40 - 0x24];
    u8 unk40;
} Struct_08030A9C;

void sub_080A0AC8(void *, s32, s32);
void sub_08037C98(void *, s32);

void sub_08030A9C(Struct_08030A9C *arg0) {
    u8 sp0[4];
    u8 *p = sp0;
    u8 diff;

    sub_080A0AC8(p, 0, 4);
    p[1] = 1;
    sub_08037C98(arg0, 0);
    diff = arg0->unk1E;
    diff -= arg0->unk22;
    arg0->unk40 = p[(diff >> 1) & 3];
}
