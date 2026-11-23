extern u8 D_03004830[];
extern u32 D_080F7310[];
extern u8 D_03002AB0[];
extern u8 D_03004114[];
extern u8 D_03004584[];

void sub_080A0770(s32);
void sub_080017EC(s32);
s32 sub_08001770(s32);
void sub_08072CC4(s32);
void sub_080030D4(void);

void sub_0801A5FC(void) {
    u32 *table = D_080F7310;
    u8 *base = D_03004830;
    s8 *step = (s8 *)(base + 0x2B);
    sub_080A0770(table[(s32)*step]);
}

void sub_0801A52C(void) {
    u8 *base = D_03004830;
    u8 *p = base + 0x2B;
    if (*(s8 *)p != 0) {
        base[0x2D]++;
        sub_080017EC(0x54);
        base[0x2A] = 0;
        *p = 0;
    }
}

void sub_0801A348(void) {
    u8 temp = sub_08001770(0xAF);
    u8 *event = D_03002AB0;
    if (temp != 0 || *(u16 *)(event + 0x06) != 0xD20C) {
        *(u16 *)D_03004114 = 0;
        return;
    }
    event[0xB8] |= 4;
    D_03004830[0x2D]++;
    sub_080017EC(0xAF);
    *(u16 *)D_03004114 = temp;
}

void sub_0801A95C(void) {
    u8 *base;
    sub_08072CC4(0x381D);
    sub_080030D4();
    if (D_03004584[0] == 0) {
        base = D_03004830;
        base[0x2C] = 0x1D;
        base[0x2B]++;
    }
}
