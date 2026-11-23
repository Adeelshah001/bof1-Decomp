typedef struct Unk590AC {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x12 - 0x08];
    u16 unk12;
    u8 pad14[0x16 - 0x14];
    u16 unk16;
    u8 pad18[0x61 - 0x18];
    u8 unk61;
    u8 pad62[0xD4 - 0x62];
    struct Unk590AC *unkD4;
} Unk590AC;

typedef struct {
    u8 pad00[0x12];
    u16 unk12;
    u8 pad14[0x18 - 0x14];
    u16 unk18;
} Unk30045B0;

extern Unk30045B0 D_030045B0;

void sub_080590AC(Unk590AC *arg0) {
    arg0->unkD4->unk61 = arg0->unk61;
    if (arg0->unk61 & 0x80) {
        if ((arg0->unk61 & 0x7F) == 0) {
            arg0->unk12 = arg0->unk2;
            arg0->unk16 = arg0->unk6;
            if (D_030045B0.unk12 > 0x100) {
                D_030045B0.unk12 -= 2;
                D_030045B0.unk18 = D_030045B0.unk12;
            } else {
                arg0->unk61 &= 0x7F;
            }
        } else {
            arg0->unk12 = 0x100;
            arg0->unk16 = 0xE8;
            if (D_030045B0.unk12 > 0x28F) {
                arg0->unk61 &= 0x7F;
            } else {
                D_030045B0.unk12 += 2;
                D_030045B0.unk18 = D_030045B0.unk12;
            }
        }
    }
}
