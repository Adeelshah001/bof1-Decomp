/* identical to sub_080803E8 (matched), with its names changed by decompdecomp */
extern u8 D_03004830[];
void sub_0807F750(void);
void sub_0807F75C(void);
void sub_080379D4(s32);
void sub_0807FAC0(u8 *);
void sub_0807FF88(u8 *, u8 *, u8);
u8 *sub_0808007C(s32, u8 *);
void sub_0807FD0C(s32, u8 *);
void sub_080805C0(s32, u8 *, u8 *);

void sub_0808042C(u8 *arg0) {
    u8 temp = D_03004830[0x3E] & 2;
    if (temp != 0) {
        if (arg0[0x40] == 0) {
            arg0[0x40]++;
            sub_0807F750();
        }
    } else if (arg0[0x40] != 0) {
        arg0[0x40] = 0;
        sub_0807F75C();
    }
}

s32 sub_080803A8(void) {
    u8 temp = D_03004830[0x3B] & D_03004830[0x3D];
    if (temp & 4) {
        sub_080379D4(2);
        return 1;
    }
    if (!(temp & 8)) {
        return temp << 8;
    }
    sub_080379D4(3);
    return 2;
}

void sub_080804B8(u8 *arg0, u8 *arg1) {
    u8 temp = arg1[0x3C];
    if (temp == 0x11 || temp == 0x22) {
        arg0[8] = 2;
        sub_0807FF88(arg0, arg1, (u8)((arg1[0x110] << 2) + 2));
    } else {
        sub_0807FAC0(arg0);
    }
}

void sub_080804F0(s32 a, u8 *b) {
    u8 *p = sub_0808007C(a, b);
    if (!p) {
        sub_0807FD0C(a, b);
    } else {
        sub_080805C0(a, b, p);
    }
}
