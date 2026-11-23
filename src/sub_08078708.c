extern u16 D_03001864;
extern u8 D_03004F50[];

void sub_0803A8EC(void *);
void sub_0807B2BC(void *);

void sub_08078708(Entity *arg0) {
    if (!(((u8 *)arg0)[0xDC] & 0x40) && !(((u8 *)arg0)[0xDD] & 2)) {
        sub_0807B2BC(arg0);
    }
    if (((u8 *)arg0->unk74)[0x3A] == 0) {
        *(u16 *)((u8 *)arg0 + 0x4C) = 0;
        ((u8 *)arg0)[0x50] = 0;
        D_03004F50[0x5D] = 0;
    }
    if (((u8 *)arg0)[0xF1] & 0x80) {
        ((u8 *)arg0)[0x2C] = 0;
    } else {
        arg0->unk2C = arg0->unk6 + 0x18;
    }
    if ((u16)(D_03001864 - 0x10) > 1) {
        sub_0803A8EC(arg0);
    }
}
