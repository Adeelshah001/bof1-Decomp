extern u8 D_03002AB0[];
void sub_080587D8(void);

void sub_08007980(void) {
    u8 *base = D_03004830;
    s8 *state = (s8 *)(base + 0x2C);

    if (*state == 0) {
        u32 val = 0x8000;
        u8 *p2AB0;
        (*(base + 0x2B))++;
        p2AB0 = D_03002AB0;
        *(u32 *)(p2AB0 + 0x94) = val;
        D_030023D0[0] = 2;
        *state = 0x40;
    } else if (*state == 0x7E) {
        sub_080587D8();
    }
}
