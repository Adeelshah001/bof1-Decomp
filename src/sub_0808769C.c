extern u8 D_03004F50[];

void sub_0807B248(void *arg0);
s32 sub_0807CA70(void *arg0);
void sub_08083BB4(void *arg0);
void sub_080877A4(void *arg0);
void sub_08087218(void *arg0);
void sub_08087664(void *arg0);
void sub_080876C4(void *arg0);
void sub_08087758(void *arg0);

void sub_0808769C(void *arg0) {
    u8 *p = arg0;

    p[0x41] = 8;
    sub_0807B248(arg0);
}

void sub_0808764C(void *arg0) {
    u8 *p = arg0;

    p[0x55] = p[0x54];
    sub_0808769C(arg0);
}

void sub_08087710(void *arg0) {
    u8 *p = arg0;
    u8 *q;

    q = *(u8 **)(p + 0x74);
    q[0x4C] = 4;
    p[0x50]++;
    sub_08083BB4(arg0);
    D_03004F50[0x5D] = 0;
    if (sub_0807CA70(arg0) != 0) {
        sub_080877A4(arg0);
    } else {
        sub_0807B248(arg0);
    }
}

void sub_08087614(void *arg0) {
    u8 *p = arg0;

    switch (p[0x50]) {
    case 0:
        sub_08087218(arg0);
        break;
    case 1:
        sub_08087664(arg0);
        break;
    case 2:
        sub_080876C4(arg0);
        break;
    default:
        sub_08087758(arg0);
        break;
    }
}
