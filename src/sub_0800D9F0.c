extern u8 D_03002AB0[];
extern u8 D_03004830[];

void sub_080017EC(s32 arg0);
void sub_0800518C(s32 arg0, s32 arg1, s32 arg2);
void sub_0802FD60(s32 arg0);
void sub_0803ADA8(s32 arg0);

void sub_0800DA78(void) {
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2C;

    if (--*ptr == 0) {
        ptr[-1]++;
    }
}

void sub_0800DA2C(void) {
    sub_0802FD60(10);
    sub_080017EC(0x59);
    sub_0803ADA8(0x1D);
    D_03004830[0x2B]++;
}

void sub_0800D9F0(void) {
    sub_0800518C(0, 0xFB8, 0x7AC);
    sub_080017EC(0x59);
    D_03002AB0[0xB8] &= 0xF7;
    D_03004830[0x2B]++;
}
