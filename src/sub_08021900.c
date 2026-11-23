extern u8 D_030016E0[];
extern u8 D_03004830[];

void sub_080073C8(s32);
void sub_08021A28(s32, s32);
void sub_0800312C(s32, s32);
void sub_08037A74(s32);
void sub_080208C0(void);
void sub_0802198C(void);
void sub_080219B8(void);

void sub_08021794(void) {
}

typedef struct {
    u8 pad0[6];
    u16 flags;
} Unk16E0;

void sub_080217C0(void) {
    u8 *base = D_03004830;
    u8 remaining = base[0x2C] - 1;
    base[0x2C] = remaining;
    if (remaining == 0) {
        sub_080073C8(0x1B);
        sub_080073C8(0x1C);
        sub_080073C8(0x1D);
        sub_08021A28(1, 0x7E);
        base[0x2B]++;
    }
}

void sub_08021900(void) {
    u8 *base = D_03004830;
    if ((s8)base[0x2C] < 0) {
        sub_0800312C(0x10, 0);
        sub_08037A74(0x100);
        base[0x2C] = 0xA0;
        base[0x2B]++;
    }
}

void sub_08021958(void) {
    u16 flags = ((Unk16E0 *)D_030016E0)->flags;
    if (flags & 0x200) {
        sub_080219B8();
    } else if (flags & 0x100) {
        sub_0802198C();
    } else {
        sub_080208C0();
    }
}
