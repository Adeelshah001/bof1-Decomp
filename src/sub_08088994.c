void sub_0808EEF4(void *);

void sub_08088994(void *arg0) {
    u8 *obj = arg0;
    u8 *saved = obj;
    if (obj[0x4D] == 0 && (obj[0xF1] & 4)) {
        u8 *p1 = *(u8 **)(saved + 0xD0);
        u8 *p2 = *(u8 **)(saved + 0xD4);
        p1[0x41] = 0xE;
        p2[0x41] = 0xE;
    }
    sub_0808EEF4(arg0);
}
