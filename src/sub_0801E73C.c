extern u8 D_030023DC;
extern u8 D_03004830[];

void sub_08010260(void);

void sub_0801E73C(void) {
    if (D_030023DC != 1) {
        sub_08010260();
        D_03004830[0x2A] = 0;
        D_03004830[0x2B] = 0;
    }
}
