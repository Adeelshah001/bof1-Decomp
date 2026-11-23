extern u8 D_03004410[];
extern u8 sub_080FBCE6[];
extern void (*D_080FBAE8[])(void);
extern u8 D_0202DBD0[];

extern u16 D_03004E30;
extern u8 D_0300459C;
extern u16 D_0300168C;
extern u8 D_03001698;
extern u8 D_03001674;
extern u8 D_0300166C;
extern u8 D_030016A4;
extern u8 D_030016E0[];
extern void sub_08001244(void);

void sub_080440DC(u8);
void sub_080023A8(void);
void sub_08029094(void);
void sub_08069680(void);
void sub_0800312C(s32, s32);
void sub_08001F80(s32, s32, s32);

u8 sub_08043E40(void) {
    return ((s32 (**)(void))(sub_080FBCE6 + 0x7A))[D_03004410[0xE] >> 1]();
}

s32 sub_08043E64(void) {
    D_080FBAE8[D_03004410[0xE] >> 1]();
    return 0;
}

s32 sub_08043DB4(void) {
    u8 val = D_0300459C;
    if (!(D_03004E30 & (0x10 << val))) {
        sub_080440DC(val);
    }
    sub_080023A8();
    sub_08029094();
    sub_08069680();
    sub_0800312C(0x10, 0x2C);
    sub_08001F80(0, 0, 0);
    D_0300168C = 0xFF;
    D_03001698 = 8;
    D_03001674 = 8;
    D_0300166C = 0x20;
    D_030016A4 = 0x20;
    *(void (**)(void))(D_030016E0 + D_030016E0[1] * 0xC + 0x10) = sub_08001244;
    return 1;
}

void sub_08043D54(void) {
    u8 *base = D_0202DBD0;
    base[0x2A6] = 1;
    base[0x2A7] = 1;
    base[0x2A8] = 0;
    base[0x2A9] = 1;
}
