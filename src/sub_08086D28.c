extern u8 D_03004F50[];
void sub_0808764C(u8 *);
void sub_0807B248(u8 *);
void sub_080876B0(u8 *);
void sub_08087144(u8 *);
void sub_08086D5C(u8 *);
void sub_08083484(u8 *);
void sub_08087E00(u8 *);
void sub_08087E0C(u8 *, s32);

void sub_08087218(u8 *arg0) {
    u8 v = --arg0[0x55];
    if (v & 0x80) {
        sub_0808764C(arg0);
    } else if (v != 0) {
        sub_0807B248(arg0);
    } else {
        if ((u8)(--arg0[0x54]) == 0) {
            arg0[0x54] = 0xF;
            arg0[0x50]++;
        }
        sub_080876B0(arg0);
    }
}

void sub_080870F8(u8 *arg0) {
    if (--arg0[0x54] != 0) {
        sub_08087144(arg0);
    } else {
        if (arg0[0xE4] == arg0[2]) {
            sub_08087144(arg0);
        }
        arg0[0xE4] = arg0[2];
        arg0[0xE6] = arg0[6];
        arg0[0x4C] = 2;
    }
    sub_0807B248(arg0);
}

void sub_08086D28(u8 *arg0) {
    if (arg0[0x55] > 7) {
        D_03004F50[0x5F] = 0;
    }
    arg0[0x55]++;
    arg0[0x4C] = 0xC;
    sub_08086D5C(arg0);
}

void sub_08087DAC(Entity *arg0) {
    if (--arg0->unk54 != 0) {
        if (!(arg0->unk54 & 1)) {
            sub_08087E00((u8 *)arg0);
        } else {
            sub_08087E0C((u8 *)arg0, 0xE);
        }
    } else {
        u8 *p;
        sub_08083484((u8 *)arg0);
        p = (u8 *)arg0->unk74;
        p[6] -= 0x26;
        arg0->unk4D = 6;
        sub_08087E00((u8 *)arg0);
    }
}
