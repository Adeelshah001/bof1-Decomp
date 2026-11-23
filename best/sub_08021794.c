extern u8 D_030016E0[];
extern u8 D_030023E0[];
extern u8 D_030043B0[];
extern u8 D_03004830[];

void sub_080073C8(s32);
void sub_08021A28(s32, s32);
void sub_080208C0(void);
void sub_0802198C(void);
void sub_080219B8(void);

typedef struct {
    u8 pad0[6];
    u16 flags;
} Unk16E0;

void sub_08021794(void) {
    u8 *base = D_03004830;
    *(u16 *)(D_030023E0 + 0x3C) = 6;
    D_030043B0[0] = 1;
    base[0x2C] = (u8)(base[0x2C] & 0x1F);
    base[0x2C] |= 0xE0;
    base[0x2D] = 0x50;
}

void sub_080217C0(void) {
    u8 *base = D_03004830;
    base[0x2C] -= 1;
    if (base[0x2C] == 0) {
        sub_080073C8(0x1B);
        sub_080073C8(0x1C);
        sub_080073C8(0x1D);
        sub_08021A28(1, 0x7E);
        base[0x2B] += 1;
    }
}

void sub_08021958(void) {
    u16 flags = ((Unk16E0 *)D_030016E0)->flags;
    if (0x200 & flags) {
        sub_080219B8();
    } else if (0x100 & flags) {
        sub_0802198C();
    } else {
        sub_080208C0();
    }
}
