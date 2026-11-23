extern u16 D_03001864;

void sub_0803A8EC(void *);
void sub_0807B27C(void *);

void sub_080764B0(void *arg0) {
    *(u16 *)((u8 *)arg0 + 2) = *(u16 *)((u8 *)arg0 + 0xE4);
    *(u16 *)((u8 *)arg0 + 6) = *(u16 *)((u8 *)arg0 + 0xE6);
    if (!(((u8 *)arg0)[0xDC] & 0x40) && !(((u8 *)arg0)[0xDD] & 2)) {
        sub_0807B27C(arg0);
    }
    if (((u8 *)arg0)[0xF1] & 0x80) {
        ((u8 *)arg0)[0x2C] = 0;
    } else {
        ((Entity *)arg0)->unk2C = ((Entity *)arg0)->unk6 + 0x18;
    }
    if ((u16)(D_03001864 - 0x10) > 1) {
        sub_0803A8EC(arg0);
    }
}
