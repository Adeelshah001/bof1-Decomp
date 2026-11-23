void sub_0808D3D4(void *);
void sub_0808D3F0(void *);
void sub_0808D410(void *, s32);

void sub_0808D368(Entity *arg0) {
    Entity *r4 = arg0;
    volatile u8 *p_ffc;
    volatile u8 *p_ff4;
    volatile u8 *p_ff8;
    volatile u16 *p_168c;
    volatile u16 *p_1644;
    if (--r4->unk54 == 0) {
        sub_0808D3D4(r4);
        return;
    }
    if (!(r4->unk54 & 1)) {
        sub_0808D3F0(r4);
        return;
    }
    p_ffc = (volatile u8 *)0x03004FFC;
    p_ff4 = (volatile u8 *)0x03004FF4;
    p_ff8 = (volatile u8 *)0x03004FF8;
    *p_ff8 = 0x1F;
    *p_ff4 = 0x1F;
    *p_ffc = 0x1F;
    p_168c = (volatile u16 *)0x0300168C;
    p_1644 = (volatile u16 *)0x03001644;
    *p_168c = 0x84;
    *p_1644 = 0x0F;
    sub_0808D410(r4, 0x0E);
}
