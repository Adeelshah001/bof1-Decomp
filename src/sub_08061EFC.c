extern u8 D_03004620[];
extern u8 D_03004410[];
extern u8 D_03002AB0[];

s32 sub_08061EFC(void) {
    s32 i;
    s32 result;
    u8 *base = D_03004410;
    u8 active = base[0x14];
    u8 *state = D_03004620;
    do {
        if (active != 0) {
            u8 *selection;
            u32 event;
            u32 source;
            i = 0;
            selection = state + 0xC4;
            event = (u32)D_03002AB0;
            source = (u32)(base + 0x14);
            do {
                u32 dest = ((*selection) * 0x124) + event;
                dest += 0xE8;
                *(u8 *)(dest + i) = *(u8 *)(i + source);
                i++;
            } while (i <= 3);
        }
        result = 0;
        state[3] = result;
    } while (0);
    return result;
}
