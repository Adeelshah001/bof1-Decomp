extern u8 D_03002AB0[];
extern void sub_08030BB0(u8 *arg0, u16 arg1);

void sub_080197C8(u16 arg0) {
    sub_08030BB0(D_03002AB0, arg0);
}

extern void sub_08037FC4(s32 arg0, u8 arg1);

void sub_080197A8(s32 arg0, u8 arg1) {
    sub_08037FC4(arg0, arg1);
}

void sub_080197E0(u8 *arg0, u8 *arg1, u16 arg2) {
    u16 *p = (u16 *)(arg0 + 0x5C);
    u16 a, b, c, d;
    u16 zero = 0;

    *p = arg2;
    a = *(u16 *)(arg0 + 2);
    b = *(u16 *)(arg1 + 2);
    *(u16 *)(arg0 + 2) = b;
    *(u16 *)(arg1 + 2) = a;
    c = *(u16 *)(arg0 + 6);
    d = *(u16 *)(arg1 + 6);
    *(u16 *)(arg0 + 6) = d;
    *(u16 *)(arg1 + 6) = c;
    *(u16 *)(arg1 + 0x2C) = c;
    *(u16 *)(arg0 + 0x2C) = d;
    *(u16 *)0x03004114 = zero;
}

extern u8 D_03004114[];
void sub_080197E0(u8 *arg0, u8 *arg1, u16 arg2);

void sub_0801980C(u8 *arg0, u8 *arg1) {
    u16 *p = (u16 *)(arg0 + 0x5C);
    u16 t = *p - 1;
    u8 *q;

    *p = t;
    if ((t << 16) != 0) {
        *(u16 *)D_03004114 = 0;
        return;
    }
    q = arg0 + 0x76;
    (*q)++;
    q -= 0x22;
    (*q)++;
    sub_080197E0(arg0, arg1, *q);
}
