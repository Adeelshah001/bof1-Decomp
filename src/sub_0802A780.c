extern u8 D_081A0C08[];
extern void sub_0802A558(u16, u16, u32);

void sub_0802A780(u8 arg0, u16 arg1, u16 arg2) {
    u16 offset = D_081A0C08[arg0 + 0x20] | (D_081A0C08[arg0 + 0x21] << 8);
    sub_0802A558(arg1, arg2, (u32)&D_081A0C08[offset]);
}
