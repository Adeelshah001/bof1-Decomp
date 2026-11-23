extern u16 D_03001864;

void sub_0803A8EC(void *);
void sub_0807B27C(void *);

static inline void helper(void *arg0, u8 val) {
    ((u8 *)arg0)[0x54] = val;
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

void sub_08076100(void *arg0) {
    ((u8 *)arg0)[0xD8] = 0;
    helper(arg0, 6);
}
