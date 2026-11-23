extern u8 D_081A0C08[];
extern void sub_0802A558(u16, u16, u32);

void sub_0802A630(u8 arg0, u16 arg1, u16 arg2) {
    u16 offset = D_081A0C08[arg0 + 0x08] | (D_081A0C08[arg0 + 0x09] << 8);
    sub_0802A558(arg1, arg2, (u32)&D_081A0C08[offset]);
}

void sub_0802A668(u8 arg0, u16 arg1, u16 arg2) {
    u16 offset = D_081A0C08[arg0 + 0x0C] | (D_081A0C08[arg0 + 0x0D] << 8);
    sub_0802A558(arg1, arg2, (u32)&D_081A0C08[offset]);
}

void sub_0802A710(u8 arg0, u16 arg1, u16 arg2) {
    u16 offset = D_081A0C08[arg0 + 0x18] | (D_081A0C08[arg0 + 0x19] << 8);
    sub_0802A558(arg1, arg2, (u32)&D_081A0C08[offset]);
}

void sub_0802A748(u8 arg0, u16 arg1, u16 arg2) {
    u16 offset = D_081A0C08[arg0 + 0x1C] | (D_081A0C08[arg0 + 0x1D] << 8);
    sub_0802A558(arg1, arg2, (u32)&D_081A0C08[offset]);
}
