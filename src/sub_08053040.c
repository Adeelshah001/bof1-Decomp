extern void sub_08051760(void);

void sub_08053040(u8 *arg0) {
    u32 val = *(u8 *)(arg0 + 0xCF);
    *(u16 *)(arg0 + 0xA8) = val;
    *(void **)(arg0 + 0x64) = sub_08051760;
}
