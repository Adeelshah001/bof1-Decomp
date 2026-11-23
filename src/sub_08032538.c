s32 sub_08032538(void *arg0) {
    u32 val;

    if (((u8 *)arg0)[0xB8] & 4) return 0;
    val = *(u32 *)((u8 *)arg0 + 0x88);
    if (val != 0) return 0;
    if (((u8 *)arg0)[0xC0] == 0) return 0;
    if (((u8 *)arg0)[0xC0] != 1) return 0;
    ((u8 *)arg0)[0x4D] = 0x1A;
    ((u8 *)arg0)[0x50] = (u8)val;
    ((u8 *)arg0)[0xC0] = (u8)val;
    return 1;
}
