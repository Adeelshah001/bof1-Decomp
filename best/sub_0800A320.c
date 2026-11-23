void sub_08030C80(void);

void sub_0800A320(s32 arg0) {
    u32 val = 0x80E9;
    sub_08030C80();
    *(u32 *)(0x03002AB0 + 0x94) = val;
    *(u8 *)0x030023D0 = 2;
    *(u32 *)(0x03003420 + 0x1E8) += 2;
    *(u32 *)(arg0 + 0x68) += 2;
}
