extern u8 D_03004620[];
extern u8 D_0202DBD0[];
s32 sub_08068E5C(void) {
    u8 *data = D_0202DBD0;
    u8 *state = D_03004620;
    u32 offset = state[0xB6] * 2;
    u32 value;
    data += 0x204;
    value = *(u16 *)(data + offset);
    if ((value & 0xF00) != 0)
        return 0;
    return 1;
}
