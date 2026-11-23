extern u8 D_081A0C08[];
extern void sub_0802A578(u16, u16, u32);

void sub_0802A6A0(u8 arg0, u16 arg1, u16 arg2) {
    u16 offset = D_081A0C08[arg0 + 0x10] | (D_081A0C08[arg0 + 0x11] << 8);
    sub_0802A578(arg1, arg2, (u32)&D_081A0C08[offset]);
}
