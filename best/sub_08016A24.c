extern u8 D_030023E0[];

void sub_08016A24(void) {
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2C;
    u16 *st;

    if (--*ptr == 0) {
        ptr[-1]++;
        st = (u16 *)D_030023E0;
        if ((u16)(st[0x52] + 0xFFFFFE4F) <= 1) {
            base[0x40]++;
        }
    }
}
