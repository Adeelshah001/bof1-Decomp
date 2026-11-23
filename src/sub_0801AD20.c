extern u16 D_03004120;
extern u8 D_03001698;
extern u8 D_03001674;
extern u8 D_0300166C;
extern u8 D_030016A4;
void sub_08030AD8(s32);
void sub_080017EC(s32);
void sub_0800421C(s32, s32, s32);
void sub_08019DA0(void);
u8 sub_08019758(s32, s32, s32);

void sub_0801AD00(void)
{
    sub_08030AD8(0x16);
    sub_080017EC(0xA3);
    D_03004830[0x2B]++;
}

void sub_0801AD20(void)
{
    D_03004120 = 2;
    sub_0800421C(0, 0x7E8, 0x68C);
    D_03001698 = 8;
    D_03001674 = 8;
    D_0300166C = 0x20;
    D_030016A4 = 0x20;
    sub_08019DA0();
}

void sub_0801ACA0(void)
{
    u8 *state;
    D_03004120 = 2;
    sub_0800421C(0xD7, 0x208, -0x68A4);
    D_03001698 = 8;
    D_03001674 = 8;
    D_0300166C = 0x30;
    D_030016A4 = 0x30;
    state = D_03004830;
    state[0x2D] = 0;
    state[0x2C] = 0;
    state[0x2B]++;
}

void sub_0801AD68(void)
{
    if (sub_08019758(0xE, 0x198, 0x3728)) {
        D_03004830[0x2B]++;
    } else {
        D_03004830[0x2C] = 0x78;
        D_03004830[0x2B]++;
    }
}
