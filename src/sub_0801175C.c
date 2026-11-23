extern u8 D_03004584[];
extern u8 D_030023DC[];

void sub_08072CC4(s32);
void sub_080017EC(s32);
void sub_0800518C(s32, s32, s32);
void sub_080104D8(void);
void sub_08024008(s32);

void sub_0801175C(void) {
    u8 *base = D_03004830;
    s8 *timer = (s8 *)(base + 0x2D);
    if (*timer & 0x80) {
        sub_08072CC4(0x2F25);
        if (D_03004584[0] == 0) {
            sub_080017EC(0x7C);
            *timer = 0x10;
            base[0x2B]++;
        }
    }
}

void sub_08011740(void) {
    if (D_030023DC[0] != 1) {
        D_03004830[0x2B]++;
    }
}

void sub_08011700(void) {
    u8 *base = D_03004830;
    if (base[0x2D] & 2) {
        sub_0800518C(0xBB, 0x228, (s32)0xFFFFA22C);
        sub_080104D8();
        sub_08024008(0x1C);
        base[0x2B]++;
    }
}
