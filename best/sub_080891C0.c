extern void sub_0803815C(void *);
extern void sub_0808917C(void *);

void sub_080891C0(void *arg0) {
    u8 *f70;
    u8 *f4D;
    void *ptr;
    u8 *fDA;

    f70 = (u8 *)arg0 + 0x70;
    *f70 -= 1;
    if ((*f70 & 0x80) == 0) {
        sub_0808917C(arg0);
        return;
    }
    f4D = (u8 *)arg0 + 0x4D;
    *f4D += 1;
    ptr = *(void **)((u8 *)arg0 + 0x6C);
    fDA = (u8 *)ptr + 0xDA;
    *fDA -= 1;
    *(u32 *)((u8 *)arg0 + 0x78) = *(u32 *)((u8 *)ptr + 0x78);
    sub_0803815C(arg0);
}
