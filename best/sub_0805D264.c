void sub_0805D264(void *arg0) {
    u8 *base = (u8 *)arg0;
    u32 off1, off2;
    
    base[0x10B] = base[0x103];
    
    off1 = 0x105;
    base[off1 + 7] = base[off1];
    off1 += 7;
    
    base[0x10D] = 0;
    
    base[off1 - 2] = base[0x102];
    off1 -= 2;
    
    off2 = 0x102;
    *(u16 *)(base + off2 + 4) = base[0x100];
    off2 += 4;
    
    *(u16 *)(base + off2 + 2) = base[off1 - 9];
    off2 += 2;
}
