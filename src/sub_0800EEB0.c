extern u8 D_03002AB0[];
extern u8 D_030023DC[];

s8 sub_080103F8(s32);
void sub_080017EC(s32);
void sub_08004EA0(s32);
void sub_08054C18(void);

void sub_0800EF00(void) {
    u8 *p = D_03004830;
    s32 ret;
    p[0x2C] = 0xA;
    p[0x2D] = 2;
    ret = sub_080103F8(0x144);
    if (ret == 0) {
        D_03002AB0[0xB8] &= 0xFB;
        p[0x2A] = ret;
        p[0x2B] = ret;
    } else {
        p[0x2B]++;
    }
}

void sub_0800EEB0(void) {
    u8 *p;
    ((Entity *)D_03003420)->unk6 = 0x5E8C;
    sub_080017EC(0x6A);
    p = D_03004830;
    p[0x2C] = 0;
    p[0x2D] = 0;
    D_03002AB0[0xB8] &= 0xFB;
    p[0x2B]++;
    p[0x4D] = 0x20;
}

void sub_0800EF54(void) {
    u8 *p = D_03004830;
    if (D_030023DC[0] != 1) {
        D_03002AB0[0xB8] &= 0xFB;
        p[0x2A] = 0;
        p[0x2B] = 0;
    }
    if ((p[0x2A] | p[0x2B]) == 0) {
        sub_08004EA0(0x82AE);
    }
}

void sub_0800EE6C(void) {
    u8 *p = D_03004830;
    p[0x4D] = 0x30;
    ((Entity *)D_03003420)->unk78 = (u32)sub_08054C18;
    p[0x2D]++;
    D_03002AB0[0xB8] |= 4;
    p[0x2B]++;
}
