typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Unk030023E0;

extern Unk030023E0 D_030023E0;

typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x02];
    u16 unk6;
    u8 pad08[0x32];
    u8 unk3A;
    u8 pad3B[0x05];
    u8 unk40;
    u8 pad41[0x0B];
    u8 unk4C;
    u8 unk4D;
    u8 pad4E[2];
    u8 unk50;
    u8 pad51[0x10];
    u8 unk61;
    u8 pad62[0x0D];
    u8 unk6F;
    u8 pad70[0x18];
    u32 unk88;
} Actor34120;

void sub_0803EE54(Actor34120 *arg0);

void sub_08034120(Actor34120 *arg0, Actor34120 *arg1) {
    arg0->unk2 = arg1->unk2;
    arg0->unk6 = arg1->unk6;
    arg0->unk61 = arg1->unk6F;
    arg0->unk40 = arg1->unk40;
    sub_0803EE54(arg1);
}

void sub_080341AC(Actor34120 *arg0) {
    u16 val;
    arg0->unk3A &= 0x7F;
    arg0->unk4C = 6;
    val = D_030023E0.unkA4;
    arg0->unk4D = val;
    arg0->unk50 = val >> 8;
    arg0->unk88 = 0;
    arg0->unk3A &= 0xFB;
}
