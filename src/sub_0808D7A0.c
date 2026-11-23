extern u8 D_03004F30[];
extern u8 D_03004F50[];
u16 sub_0807B2BC(void *);
void sub_08037FC4(void *, s32);
void sub_0808DBE8(void *);

void sub_0808D7A0(void *arg0) {
    u8 *p;
    u8 v;

    v = 0x7F;
    p = D_03004F50;
    p[0x10] = v;
    if (((u32)sub_0807B2BC(arg0) << 16) == 0) {
        p[0x10] = 0x0F;
        sub_08037FC4(arg0, 0x12);
        if (*(u8 *)((u8 *)arg0 + 0x55) != 0) {
            p[0x5F] |= 0x40;
        }
        D_03004F30[0xC] &= 0xFE;
        *(u8 *)((u8 *)arg0 + 0x4D) += 1;
        sub_0808DBE8(arg0);
    }
}
