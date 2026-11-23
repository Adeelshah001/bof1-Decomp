void sub_0808F1E4(void *);

void sub_080889CC(void *arg0) {
    u8 *obj = arg0;
    u8 *saved = obj;
    if (obj[0x54] == 1) {
        u8 *p1 = *(u8 **)(saved + 0xD0);
        u8 *p2 = *(u8 **)(saved + 0xD4);
        p1[0x4C] = 4;
        p2[0x4C] = 4;
    }
    sub_0808F1E4(arg0);
}
