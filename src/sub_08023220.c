extern u8 D_03004830[];
void *sub_0803ED98(void);

void sub_08023220(void *arg0) {
    void *slot;
    u8 *src_ptr;
    u8 *slot_byte;
    u8 val;

    slot = sub_0803ED98();
    if (slot != NULL) {
        *(u8 *)((u8 *)slot + 0x3C) = 0x1E;
        *(u8 *)((u8 *)slot + 0x3A) = 1;
        src_ptr = *(u8 **)((u8 *)arg0 + 0x68);
        val = *(u8 *)(src_ptr + 2) * 2;
        slot_byte = (u8 *)slot + 0x3A;
        slot_byte += 7;  // slot + 0x41
        *slot_byte = val;
        *(u16 *)((u8 *)slot + 0x06) = *(u16 *)((u8 *)arg0 + 0x06);
        *(u16 *)((u8 *)slot + 0x02) = *(u16 *)((u8 *)arg0 + 0x02);
        *(u16 *)((u8 *)slot + 0x2C) = *(u16 *)((u8 *)arg0 + 0x06) + 0x10;
    }
    *(u32 *)((u8 *)arg0 + 0x68) += 3;
}
