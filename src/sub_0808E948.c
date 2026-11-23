extern u8 D_03004F50[];
extern const char D_080A7364[];
extern const char D_080A7358[];

void sub_0808E984(u8 *);
void sub_0808E978(u8 *);
void sub_0808E96C(u8 *);
void sub_0808EA38(u8 *);
void sub_0808D0F0(u8 *);
void sub_080352D0(const char *, const char *, s32, ...);
void sub_0808E9F4(u8 *);
void sub_0808E948(u8 *);
void sub_0808E9A8(u8 *);
void sub_0808E9D0(u8 *);

void sub_0808E990(u8 *arg0, u8 arg1) {
    arg0[0xE1] = arg1;
    arg0[0xE0] = 6;
    arg0[0x4D] = 4;
}

void sub_0808E948(u8 *arg0) {
    u8 val = arg0[0xE1];
    if (val == 1) {
        sub_0808E984(arg0);
    } else if (val == 2) {
        sub_0808E978(arg0);
    } else {
        sub_0808E96C(arg0);
    }
}

void sub_0808EA00(u8 *arg0) {
    u8 val = D_03004F50[0x5C];
    if (!(val & 0x80) && val != 0) {
        sub_0808EA38(arg0);
    } else {
        arg0[0x61] = 0;
        sub_0808D0F0(arg0);
    }
}

void sub_0808E8EC(u8 *arg0) {
    switch (arg0[0x4D]) {
    case 0:
        sub_0808E9F4(arg0);
        break;
    case 2:
        sub_0808E948(arg0);
        break;
    case 4:
        sub_0808E9A8(arg0);
        break;
    case 6:
        sub_0808E9D0(arg0);
        break;
    default:
        sub_080352D0(D_080A7364, D_080A7358, 0x87, arg0[0x4D]);
        break;
    }
}
