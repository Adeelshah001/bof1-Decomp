extern void (*D_080F7EA4[])(void);

void sub_0801DEB0(void)
{
    u8 *base = D_03004830;

    if (*(s8 *)(base + 0x2B) >= 0)
        D_080F7EA4[(s8)*(base + 0x2B)]();
}
extern void (*D_080F7F44[])(void);

void sub_0801DFD4(void)
{
    u8 *base = D_03004830;

    if (*(s8 *)(base + 0x2B) >= 0)
        D_080F7F44[(s8)*(base + 0x2B)]();
}
extern void (*D_080F7F84[])(void);

void sub_0801E04C(void)
{
    u8 *base = D_03004830;

    if (*(s8 *)(base + 0x2B) >= 0)
        D_080F7F84[(s8)*(base + 0x2B)]();
}
extern struct {
    u8 pad[0xA4];
    u16 mapId;
} D_030023E0;

extern u16 D_03001864;
extern u32 D_03001694;
extern void sub_08039054(void);
extern void sub_080379D4(s32);
extern void sub_08037A74(s32);

void sub_0801DD04(void)
{
    if (D_030023E0.mapId == 0x199) {
        u8 *state;
        D_03001864 = 16;
        D_03001694 |= 0x80;
        sub_08039054();
        sub_080379D4(8);
        sub_08037A74(0x400);
        state = D_03004830;
        state[0x2C] = 0xF0;
        ++state[0x2B];
    }
}
