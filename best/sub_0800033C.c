void sub_0800033C(void *arg0) {
    u8 *base;
    u16 keyinput;
    u16 temp;
    u16 masked;
    u8 zero_val;
    u8 val2;
    u8 val3;
    
    base = (u8 *)arg0;
    keyinput = ~(*(vu16 *)0x04000130);
    temp = keyinput & ~(*(u16 *)(base + 4));
    *(u16 *)(base + 6) = temp;
    *(u16 *)(base + 4) = keyinput;
    
    zero_val = 0;
    masked = keyinput & 0xF0;
    if (masked != 0) {
        val2 = base[2];
        if (val2 <= 0x13) {
            base[2] = val2 + 1;
            return;
        }
        val3 = base[3];
        if (val3 == 0) {
            *(u16 *)(base + 6) = (temp & 0xFF0F) | masked;
        }
        val3 = val3 + 1;
        base[3] = val3;
        if (val3 > 4) {
            base[3] = zero_val;
        }
    } else {
        base[2] = zero_val;
        base[3] = zero_val;
    }
}
