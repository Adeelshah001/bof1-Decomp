void sub_080379D4(s32);
void sub_08037FC4(void *, s32);

void sub_0808DC94(void *arg0) {
    u8 *p;
    u8 *q;

    p = (u8 *)arg0 + 0x54;
    if ((*p -= 1) == 0) {
        sub_080379D4(0x18);
        sub_08037FC4(arg0, 0x10);
        q = (u8 *)arg0 + 0x4D;
        *q = *q + 1;
    }
}
