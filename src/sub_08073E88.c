struct Unk73E54 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 pad03[3];
    u8 unk6;
    u8 pad07[5];
    u8 unkC;
    u8 pad0D[0x50 - 0xD];
    u16 unk50;
    u8 pad52[0x62 - 0x52];
    u8 unk62;
};

void sub_08073E88(struct Unk73E54 *arg0) {
    u32 val;
    arg0->unk1 = 0x1E;
    arg0->unk2 = 2;
    val = arg0->unk62;
    val &= 0xF0;
    arg0->unk62 = val | 2;
}
