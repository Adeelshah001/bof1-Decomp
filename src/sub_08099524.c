extern void sub_08038178(void *, s32);
extern void sub_0808B984(void *);

void sub_08099524(void *arg0) {
    u32 temp = ((u8 *)arg0)[0x55] - 1;
    u16 val;
    u16 masked;
    u16 v38;
    ((u8 *)arg0)[0x55] = temp;
    if ((temp << 24) == 0) {
        v38 = 0xD0 << 1;
        *(u16 *)((u8 *)arg0 + 0x38) = v38;
        sub_08038178(arg0, *(u32 *)((u8 *)arg0 + 0x78));
        masked = (u16)((((u8 *)arg0)[0x61] & 0xF0) << 8);
        *(u16 *)((u8 *)arg0 + 0x44) = masked;
        ((u8 *)arg0)[0x4C] = 4;
    }
    sub_0808B984(arg0);
    val = *(u16 *)((u8 *)arg0 + 0x06) - 0x40;
    *(u16 *)((u8 *)arg0 + 0x06) = val;
    *(u16 *)((u8 *)arg0 + 0x2C) = val;
}
