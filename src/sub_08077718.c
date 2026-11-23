struct Unk77718 {
    u8 pad0[0x3C];
    u8 unk3C;
    u8 pad3D[0x50 - 0x3D];
    u8 unk50;
    u8 pad51[0xDC - 0x51];
    u8 unkDC;
    u8 unkDD;
};

void sub_08077424(struct Unk77718 *, s32);
void sub_08077498(struct Unk77718 *);
void sub_080775CC(struct Unk77718 *);
void sub_0807764C(struct Unk77718 *);
void sub_0807B2BC(struct Unk77718 *);

void sub_08077718(struct Unk77718 *arg0) {
    s32 state = arg0->unk50;
    s32 val;

    switch (state) {
    case 0:
        switch (arg0->unk3C) {
        case 2:
            val = 0x20;
            break;
        case 1:
            val = 0x30;
            break;
        default:
            val = 0x2F;
            break;
        }
        sub_08077424(arg0, val);
        break;
    case 2:
        if (!(arg0->unkDC & 0x40) && !(state &= arg0->unkDD)) {
            sub_0807B2BC(arg0);
        }
        sub_08077498(arg0);
        break;
    case 4:
        sub_080775CC(arg0);
        break;
    case 6:
        sub_0807764C(arg0);
        break;
    }
}
