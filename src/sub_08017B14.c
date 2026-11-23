extern u8 D_03002AB0[];
extern u8 D_03004830[];

void sub_080379D4(s32);

void sub_08017B14(void) {
    u8 *base = D_03002AB0;
    u16 val = 0xDEC;
    
    *(u16 *)(base + 6) = val;
    *(u16 *)(base + 0x2C) = val;
    base[0x55] = 7;
    base[0x54] = 0x40;
    base[0x41] = 0x30;
    sub_080379D4(0x20);
    D_03004830[0x2B]++;
}
