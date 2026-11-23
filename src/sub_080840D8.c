extern u16 D_03004F50[];

void sub_080840D8(u16 arg0) {
    D_03004F50[0x20] = arg0;
    D_03004F50[0x3A] = arg0;
}

extern void sub_08084118(void);
extern void sub_080845C0(void);
extern void sub_080845F4(void);
extern void sub_08084628(void);

void sub_08084594(void *arg0) {
    u8 v = *(u8 *)((u8 *)arg0 + 0x1D);
    if (v == 0) {
        sub_08084118();
    } else if (v == 1) {
        sub_080845C0();
    } else if (v == 2) {
        sub_080845F4();
    } else {
        sub_08084628();
    }
}
