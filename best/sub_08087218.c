typedef struct {
    u8 pad[0x50];
    u8 unk50;
    u8 pad51[3];
    u8 unk54 : 8;
    u8 unk55 : 8;
} E2;
void sub_0808764C(E2 *);
void sub_0807B248(E2 *);
void sub_080876B0(E2 *);
void sub_08083484(u8 *);
void sub_08087E00(u8 *);
void sub_08087E0C(u8 *, s32);

void sub_08087218(E2 *arg0) {
    u8 v = --arg0->unk55;
    if (v & 0x80) {
        sub_0808764C(arg0);
    } else if (v != 0) {
        sub_0807B248(arg0);
    } else {
        if ((--arg0->unk54 & 0xFF) == 0) {
            arg0->unk54 = 0xF;
            arg0->unk50++;
        }
        sub_080876B0(arg0);
    }
}

void sub_08087DAC(u8 *arg0) {
    u8 *p = arg0 + 0x54;
    if (--*p != 0) {
        if (!(*p & 1)) {
            sub_08087E00(arg0);
        } else {
            sub_08087E0C(arg0, 0xE);
        }
    } else {
        u8 *q;
        sub_08083484(arg0);
        q = *(u8 **)(arg0 + 0x74);
        q[6] -= 0x26;
        arg0[0x4D] = 6;
        sub_08087E00(arg0);
    }
}
