typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x10 - 0x08];
    u16 unk10;
    u8 pad12[0x38 - 0x12];
    u16 unk38;
    u8 pad3A[0x44 - 0x3A];
    u32 unk44;
    u32 unk48;
    u8 unk4C;
    u8 pad4D[0x54 - 0x4D];
    u8 unk54;
    u8 pad55[0x61 - 0x55];
    u8 unk61;
} Struct080922BC;

void sub_080379D4(s32);
void sub_08083AC8(s32);
u8 sub_080957BC(Struct080922BC *);
void sub_08096CD4(Struct080922BC *);
void sub_08096D24(Struct080922BC *, s32, s32);

void sub_080922BC(Struct080922BC *arg0) {
    u8 zero = 0;
    u16 status;
    u32 result;

    do {
        result = sub_080957BC(arg0);
        status = result;
        switch (result) {
        case 0:
            return;
        case 1:
            arg0->unk2 = arg0->unk44 >> 8;
            arg0->unk6 = arg0->unk48 >> 8;
            sub_08083AC8(0x48A0);
            sub_080379D4(0x26);
            result = 0x160;
            arg0->unk38 = result;
            arg0->unk4C = 2;
            sub_08096D24(arg0, 8, 0x10);
            {
                u16 dir = arg0->unk61;
                dir &= 0xF0;
                dir <<= 8;
                arg0->unk10 = dir;
            }
            arg0->unk54 = zero;
            return;
        default:
            break;
        }
    } while (status == 2);
    sub_08096CD4(arg0);
}
