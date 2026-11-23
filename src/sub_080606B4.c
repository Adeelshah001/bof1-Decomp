extern u8 D_03004620[];
extern u8 D_03004410[];
extern u8 D_03002AB0[];

s32 sub_08061EFC(void) {
    s32 i;
    s32 result;
    u8 *base = D_03004410;
    u8 active = base[0x14];
    u8 *state = D_03004620;
    if (active != 0) {
        u8 *selection;
        u8 *event;
        u8 *source;
        i = 0;
        selection = state + 0xC4;
        event = D_03002AB0;
        source = base + 0x14;
        do {
            u8 *dest = event + ((*selection) * 0x124);
            dest += 0xE8;
            dest[i] = source[i];
            i++;
        } while (i <= 3);
    }
    result = 0;
    state[3] = result;
    return result;
}

extern u8 D_03004760[];
extern const u8 D_08100744[];
void sub_08068938(s32, s32);
s32 sub_0805D8F4(void);
void sub_08060354(void);
void sub_0805B358(const void *, s32, s32, s32, s32);

s32 sub_080606B4(void) {
    u8 *ptr;
    s32 val;
    sub_08068938(2, 6);
    ptr = D_03004620;
    ptr[0xB4] = 0;
    val = sub_0805D8F4() - 0xC;
    ptr[0xB5] = val;
    ptr[0xB2] = 0xFF;
    ptr[0xB0] = 8;
    sub_08060354();
    sub_0805B358(D_08100744, 0, 0xB, 0, 1);
    D_03004760[0x19] = 2;
    return 0;
}
