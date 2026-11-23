extern u8 D_03002AB0[];
extern u16 D_03004114;

void sub_08037A74(s32 arg0);
void sub_08000248(s32 arg0);
void sub_080379D4(s32 arg0);
u8 sub_08001770(s32 arg0);
void sub_080017EC(s32 arg0);
void sub_08001888(s32 arg0);
u8 sub_080131E8(void);
void sub_080073C8(s32 arg0);

void sub_08014114(void) {
    u8 v = 0x40;
    u8 *state;

    sub_08037A74(0x800);
    state = D_03004830;
    state[0x2C] = v;
    sub_08000248(0xA);
    sub_080379D4(0x23);
    state[0x2B]++;
}

void sub_08014148(void) {
    u8 v = 8;
    u8 *state;

    sub_08037A74(0x800);
    state = D_03004830;
    state[0x2C] = v;
    sub_08000248(0xA);
    sub_080379D4(0x23);
    state[0x2B]++;
}

void sub_08013DC0(void) {
    u8 flag = sub_08001770(0x8E);

    if (flag != 0 || ((Entity *)D_03002AB0)->unk6 > 0x5AFC) {
        D_03004114 = 0;
        return;
    }
    if (sub_080131E8() == 0) {
        sub_08001888(0x8D);
    } else {
        sub_080017EC(0x8D);
    }
    D_03004114 = flag;
}

void sub_08013CF4(void) {
    if (sub_08001770(0x95) == 0) {
        if (sub_08001770(0x94) != 0) {
            sub_080073C8(0x31);
            sub_080073C8(0x32);
            sub_080073C8(0x33);
        } else if (sub_08001770(0x93) != 0) {
            sub_080073C8(0x29);
            sub_080073C8(0x2A);
            sub_080073C8(0x2B);
            sub_080073C8(0x2C);
        }
    }
}
