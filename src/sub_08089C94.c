extern u8 D_03004F50[];
void sub_0807B27C(u8 *);
void sub_0807CD6C(u8 *);
void sub_08083300(u8 *, s32);
void sub_08089BE4(u8 *);
void sub_08037FC4(u8 *, u16);
s32 sub_0807CA70(u8 *);
void sub_08089D88(u8 *);
u16 sub_080915B4(u8 *);

void sub_08089C94(u8 *arg0) {
    if (--arg0[0x55] != 0)
        sub_0807B27C(arg0);
    else
        sub_0807CD6C(arg0);
}

void sub_08089CCC(u8 *arg0) {
    u8 *p;
    D_03004F50[0x5D] = 1;
    p = arg0 + 0x55;
    if (--*p == 0) {
        p -= 5;
        (*p)++;
        sub_08083300(arg0, 0x12);
    }
    sub_08089BE4(arg0);
}

void sub_08089D3C(u8 *arg0) {
    u8 v = (*(u8 **)(arg0 + 0x74))[0x3A];
    if (v == 0) {
        sub_08037FC4(arg0, sub_080915B4(arg0));
        arg0[0x50]++;
        D_03004F50[0x5D] = v;
        if (sub_0807CA70(arg0) != 0)
            sub_08089D88(arg0);
    }
}

void sub_08089BB4(u8 *arg0) {
    u8 *p = arg0 + 0x55;
    if (--*p == 0) {
        p -= 5;
        (*p)++;
        sub_08083300(arg0, 0x12);
    }
    sub_08089BE4(arg0);
}
