void sub_080840D8(u16 arg0) {
    *(u16 *)0x03004F90 = arg0;
    *(u16 *)0x03004FC4 = arg0;
}

void sub_080840F0(void) {
    u16 v = *(u16 *)0x03004F90;
    if (v > 0x3E7U) {
        v = 0x3E7U;
    }
    *(u16 *)0x03004F90 = v;
    *(u16 *)0x03004FC4 = v;
    *(u8 *)0x03004F98 = 0;
}

void sub_08084088(void *arg0, u8 arg1) {
    if (arg1 != 0) {
        u8 b = *(u8 *)((u8 *)arg0 + 0xFC);
        if (*(u8 *)((u32)b + (u32)0x08152036) & arg1) {
            u16 *p = (u16 *)0x03004F90;
            *p = *p + (*p >> 1);
        }
    }
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
