extern s16 D_03001858;

void sub_08053AD4(u8 *arg0);
void sub_08053C2C(u8 *arg0);
void sub_0803A8EC(u8 *arg0);

void sub_08053BE8(u8 *arg0) {
    void (*fn)(u8 *) = sub_08053AD4;
    *(u32 *)(arg0 + 0x64) = (u32)fn;
    *(u16 *)(arg0 + 0x38) = 0;
    fn(arg0);
}

void sub_08053C00(u8 *arg0) {
    if (D_03001858 == 0xC) {
        D_03004830[0x40]++;
    }
}

void sub_08053BB0(u8 *arg0) {
    void (*fn)(u8 *);
    *(u16 *)(arg0 + 6) += 0x60;
    arg0[0x61] = 0;
    arg0[0x54] = 0xC0;
    arg0[0x55] = 0;
    fn = sub_08053AD4;
    *(u32 *)(arg0 + 0x64) = (u32)fn;
    *(u16 *)(arg0 + 0x38) = 0;
    fn(arg0);
}

void sub_08053C44(u8 *arg0) {
    *(u16 *)(arg0 + 2) += 1;
    if (--arg0[0x54] == 0) {
        sub_08053C00(arg0);
        arg0[0x54] = 0xC0;
        arg0[0x55] = 0x60;
        sub_08053BE8(arg0);
    } else {
        *(u32 *)(arg0 + 0x64) = (u32)sub_08053C2C;
        sub_0803A8EC(arg0);
    }
}
