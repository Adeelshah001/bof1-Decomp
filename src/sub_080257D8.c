
extern u8 D_03004830[];

void sub_080257C4(void) {
    u8 *ptr = D_03004830;
    ptr[0x42] |= 2;
}

void sub_080257B0(void) {
    u8 *ptr = D_03004830;
    ptr[0x42] |= 1;
}

extern u8 D_0202DBD0[];

void sub_080017EC(s32);
void sub_0805C9A0(void *arg0, s32 arg1);
void sub_0805CF40(s32 arg0, u16 *arg1);

void sub_080257D8(void) {
    u16 sp0;
    
    sub_0805C9A0(D_0202DBD0, 0x1388);
    sub_0805CF40(0x156, &sp0);
    *(u16 *)(D_0202DBD0 + 0x204 + (sp0 * 2)) = 0;
    sub_080017EC(0xE8);
}

void sub_08025794(void) {
    sub_0805C9A0(D_0202DBD0, 0x4E20);
    sub_080017EC(0xE5);
}
