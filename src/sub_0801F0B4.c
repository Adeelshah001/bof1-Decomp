extern u8 D_03003418;
extern u16 D_03001644;
extern u16 D_0300168C;
extern u16 D_03004788;
extern u16 D_03000854;

void sub_080017EC(s32);
void sub_08039054(void);
void sub_0800518C(s32, s32, s32);
void sub_08037A74(s32);
void sub_0800312C(s32, s32);
void sub_08001F80(s32, s32, s32);

void sub_0801EC80(void)
{
    u8 *state = D_03004830;
    s8 flag = state[0x2D];

    if (flag < 0) {
        sub_080017EC(0xCB);
        sub_08039054();
        state[0x2B]++;
    }
}

void sub_0801ECB0(void)
{
    D_03003418 |= 0x40;
    sub_0800518C(0x1BE, 0x5A8, 0xFFFFB46C);
    D_03004830[0x2B]++;
}

void sub_0801F068(void)
{
    sub_08037A74(0x100);
    sub_0800312C(0x10, 0x32);
    sub_08001F80(0, 0, 0);
    D_03001644 = 0x10;
    D_0300168C = 0xDF;
    D_03004830[0x2C] = 0;
    D_03004830[0x2B]++;
}

void sub_0801F0B4(void)
{
    u8 *state = D_03004830;
    s8 timer = --state[0x2C];

    if (timer == 0) {
        D_03004788 = timer;
        sub_0800518C(0x1B2, 0x178, 0xFFFFF37C);
        D_03000854 = timer;
        state[0x2B]++;
    }
}
