extern u8 D_030023DC[];
extern u8 D_03002AB0[];
extern u8 D_03004584[];
extern u8 D_03004830[];

extern void sub_080075BC(s32);
extern void sub_08013ADC(void);
extern void sub_08072CC4(s32);

void sub_080145E4(void) {
    if (D_030023DC[0] != 1) {
        D_03004830[0x2C] = 0x20;
        sub_080075BC(0x83A6);
    }
}

void sub_080145A4(void) {
    sub_08072CC4(0x72D);
    if (D_03004584[0] == 0) {
        sub_08013ADC();
        D_03002AB0[0xB8] &= 0xFB;
        D_03004830[0x2B]++;
    }
}
