extern u16 D_03004120;
extern u8 D_0202DBD0[];
extern u8 D_03000852;
extern u16 D_03000850;

void sub_080075A4(u16);
void sub_080138A8(void);
void sub_0800421C(s32, s32, s32);
u8 sub_08038458(s32);
void sub_080017EC(s32);
u8 sub_0805CF40(u16, u16 *);
void sub_08013B68(void);
void sub_08003528(s32, s32, s32, s32, s32);

typedef struct {
    u8 pad00[0x204];
    u16 slots[65];
} ItemSlots;

void sub_08014DD8(void) {
    sub_080075A4(0x81FD);
    D_03004830[0x2C] = 0x40;
    D_03004830[0x2B]++;
}

void sub_08014E00(void) {
    sub_080138A8();
    D_03004120 = 0;
    sub_0800421C(0x16B, 0x278, -0x4D84);
    D_03004830[0x2B]++;
}

void sub_08014D78(void) {
    u16 slot;
    u8 status;

    if (sub_08038458(0)) {
        sub_080075A4(0x83D7);
        sub_080017EC(0x92);
        D_03004120 = 0x158;
        status = sub_0805CF40(0x158, &slot);
        if (status == 0) {
            ((ItemSlots *)D_0202DBD0)->slots[slot] = status;
        }
        sub_08013B68();
    }
}

void sub_08014D30(void) {
    u8 val = D_03000852;
    if (val == 1) {
        if (--D_03000850 == 0) {
            sub_08003528(0, 0, 0, 0x100, val);
            D_03004830[0x2B]++;
        }
    }
}
