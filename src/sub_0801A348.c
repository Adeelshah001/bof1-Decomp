extern u8 D_03004830[];
extern u8 D_03002AB0[];
extern u8 D_03004114[];

void sub_080017EC(s32);
s32 sub_08001770(s32);

void sub_0801A348(void) {
    u8 temp = sub_08001770(0xAF);
    u8 *event;
    s32 v;
    if (temp != 0 || (event = D_03002AB0, *(u16 *)(event + 0x06) != 0xD20C)) {
        *(u16 *)D_03004114 = 0;
        return;
    }
    v = 4 | event[0xB8];
    event[0xB8] = v;
    D_03004830[0x2D]++;
    sub_080017EC(0xAF);
    *(u16 *)D_03004114 = temp;
}
