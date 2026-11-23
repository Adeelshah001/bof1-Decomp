extern u8 D_03002AB0[];
extern u8 D_03004830[];

void sub_080074C4(void);

void sub_080128AC(void) {
    u8 *state;
    sub_080074C4();
    state = D_03002AB0;
    (*(u32 *)(state + 0x88))++;
    (*(u32 *)(state + 0x1AC))++;
    (*(u32 *)(state + 0x2D0))++;
    (*(u32 *)(state + 0x3F4))++;
    D_03004830[0x2B]++;
}
