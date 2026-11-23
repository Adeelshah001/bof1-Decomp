extern u16 D_03001864;
extern u8 D_03004F30[];
extern u8 D_03004754;

void sub_0803A8EC(void *);
void sub_08083484(void *);
void sub_0807B848(void *);

void sub_0807B838(void *arg0, s8 arg1) {
    ((u8 *)arg0)[0xD8] = arg1;
    sub_0807B848(arg0);
}

void sub_0807B848(void *arg0) {
    ((u8 *)arg0)[0x54] = 0xFF;
    if (((u8 *)arg0)[0xF1] & 0x80) {
        ((u8 *)arg0)[0x2C] = 0;
    } else {
        ((Entity *)arg0)->unk2C = ((Entity *)arg0)->unk6 + 0x18;
    }
    if ((u16)(D_03001864 - 0x10) > 1) {
        sub_0803A8EC(arg0);
    }
}

void sub_0807B810(void *arg0) {
    ((u8 *)arg0)[0xE1] = (((u8 *)arg0)[0xE2] >> 4) + 0x3D;
    sub_08083484(arg0);
    sub_0807B838(arg0, 0xD);
}

void sub_0807B890(void) {
    if (!(D_03004F30[0xD] & 0x80)) {
        D_03004754 = 1;
    }
}
