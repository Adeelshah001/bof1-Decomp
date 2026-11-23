extern u8 D_030016E0[];
extern u8 D_030023E0[];
extern u8 D_030043B0[];

void sub_080073C8(s32);
void sub_08021A28(s32, s32);
void sub_0800312C(s32, s32);
void sub_08037A74(s32);
void sub_080208C0(void);
void sub_0802198C(void);
void sub_080219B8(void);

void sub_08021794(void) {
}

void sub_080217C0(void) {
    u32 remaining = D_03004830[0x2C];
    remaining--;
    D_03004830[0x2C] = remaining;
    if ((u8)remaining == 0) {
        sub_080073C8(0x1B);
        sub_080073C8(0x1C);
        sub_080073C8(0x1D);
        sub_08021A28(1, 0x7E);
        D_03004830[0x2B]++;
    }
}

void sub_08021900(void) {
    u8 *base = D_03004830;
    s8 *timer = (s8 *)(base + 0x2C);
    if (*timer < 0) {
        sub_0800312C(0x10, 0);
        sub_08037A74(0x100);
        *timer = 0xA0;
        base[0x2B]++;
    }
}

void sub_08021958(void) {
    u16 flags = *(u16 *)(D_030016E0 + 6);
    if (flags & 0x200) {
        sub_080219B8();
    } else if (flags & 0x100) {
        sub_0802198C();
    } else {
        sub_080208C0();
    }
}
