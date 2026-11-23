extern u8 D_03004F50[];

void sub_0808F500(void *arg0);
void sub_0803EF2C(void *arg0);
s32 sub_08037980(u16 arg0, s32 arg1);
void sub_08083BB4(void);
void sub_08089C94(void *arg0);

void sub_08089740(u8 *arg0) {
    if (--arg0[0x54] != 0)
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
    x = (u16)(v >> 8);
    if ((u8)v != 0)
        x = (u16)(x + 1);
    *field40 = x;
    *(u16 *)(base + 0x74) = x;
    arg0[0x55] = 0x10;
    arg0[0x50]++;
    sub_08089C94(arg0);
}
