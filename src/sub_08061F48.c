
extern u8 D_03004620[];
extern void sub_080A0210(void *, void *, u32);
extern u32 sub_0804152C(void);
extern void sub_0805B404(s32);

s32 sub_08061F48(void) {
    sub_080A0210((void *)0x02019D00, (void *)0x0200D580, 0x40);
    switch (sub_0804152C() << 24 >> 24) {
    case 1:
        sub_0805B404(1);
        D_03004620[3] = 0;
        break;
    case 2:
        D_03004620[3] = 8;
        sub_0805B404(1);
        break;
    }
    return 0;
}
