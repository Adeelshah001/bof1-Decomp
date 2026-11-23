void sub_0808B984(void *arg0) {
    u8 *obj = (u8 *)arg0;
    u8 *p = obj + 0x54;
    u8 val;
    u8 *base;
    u8 *base2;

    val = *p + 1;
    if (val == 0xC0) {
        val = 0xA0;
    }
    *p = val;
    base = (u8 *)0x02023C40;
    base2 = base + (0xA0 << 3);
    *(u16 *)(obj + 6) = (base[val] | (base2[val] << 8)) + 0x2F48;
}
