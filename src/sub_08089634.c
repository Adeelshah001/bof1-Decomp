extern u8 D_03004F50[];

void sub_0808F500(void *arg0);
void sub_0803EF2C(void *arg0);
s32 sub_08037980(u16 arg0, s32 arg1);
void sub_08083BB4(void);
void sub_08089C94(void *arg0);
void sub_0803800C(void *arg0, s32 arg1, s32 arg2);
void sub_0808EE54(void *arg0);
void sub_08037FC4(void *arg0, s32 arg1);
void sub_0807B27C(void *arg0);

void sub_08089740(u8 *arg0) {
    u8 timer = arg0[0x54] - 1;
    arg0[0x54] = timer;
    if (timer != 0)
        sub_0808F500(arg0);
    else
        sub_0803EF2C(arg0);
}

void sub_080897D8(u8 *arg0) {
    u8 *base;
    u16 *field40;
    s32 v;
    u16 x;

    sub_08083BB4();
    base = D_03004F50;
    field40 = (u16 *)(base + 0x40);
    v = sub_08037980(*field40, 0x200);
    x = (u16)v;
    if ((u8)v != 0)
        x = (u16)(x + 1);
    *field40 = x;
    *(u16 *)(base + 0x74) = x;
    arg0[0x55] = 0x10;
    arg0[0x50]++;
    sub_08089C94(arg0);
}

void sub_08089678(u8 *arg0) {
    if (arg0[0x4D] == 0) {
        sub_0803800C(arg0, 2, 2);
        sub_0808EE54(arg0);
        return;
    }
    sub_0808EE54(arg0);
    if (arg0[0x54] == 0)
        sub_08037FC4(arg0, 0);
}

void sub_08089634(u8 *arg0) {
    u8 *obj = *(u8 **)(arg0 + 0x74);
    u8 v = obj[0x3A];

    if (v != 0) {
        sub_0807B27C(arg0);
        return;
    }
    if (D_03004F50[0x5D] != 0)
        D_03004F50[0x5D] = 0;
    arg0[0x4C] = 2;
    arg0[0x4D] = 0;
    sub_08037FC4(arg0, 0);
}
