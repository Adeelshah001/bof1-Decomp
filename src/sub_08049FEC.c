void sub_08049FEC(void *arg0) {
    if (*(u8 *)0x03001850 != 0) {
        u8 *ptr61;
        u8 *ptr54;
        u8 zero;
        ptr61 = (u8 *)arg0 + 0x61;
        zero = 0;
        *ptr61 = zero;
        ptr54 = (u8 *)arg0 + 0x54;
        *ptr54 = 0x30;
        *(u32 *)((u8 *)arg0 + 0x64) = 0x0804A049;
        *(u16 *)((u8 *)arg0 + 0x38) = zero;
    }
    sub_0804A020(arg0);
}
