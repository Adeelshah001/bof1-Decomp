void sub_08000248(s32);

extern u16 D_02020FC0;
extern u16 D_020211C0;
extern u16 D_03001670;

void sub_0809B4CC(void) {
    s32 i;

    D_02020FC0 = D_020211C0 = 0x7FFF;
    for (i = 0; i < 4; i++) {
        if (D_03001670 & 0x80) {
            D_03001670 &= ~0x80;
        } else {
            D_03001670 |= 0x80;
        }
        sub_08000248(0xA);
    }
    D_02020FC0 = D_020211C0 = 0;
}
