extern u8 D_03004830[];
extern u16 D_080FADF8[];

void sub_08037910(void) {
    u8 *state = D_03004830;
    u16 vcount = (u16)~*(vu16 *)0x04000130;
    u32 result = 0;
    u16 *table = D_080FADF8;

    state[0x3B] = (u8)~state[0x3D];
    state[0x3C] = (u8)~state[0x3E];

    while (*table != 0) {
        if (vcount & *table) {
            result |= table[1];
        }
        table += 2;
    }

    state[0x3D] = (u8)result;
    state[0x3E] = (u8)(result >> 8);
}
