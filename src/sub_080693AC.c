typedef struct {
    u8 pad[0x2A9];
    u8 flag;
} SaveState693;
extern SaveState693 D_0202DBD0;
extern u8 D_030033FC;
extern u8 D_03004620[];

s32 sub_08041878(void);
void sub_0805B404(s32);
void sub_0809EE14(u8);
void sub_0809EE68(u8);

s32 sub_080693AC(void)
{
    switch (sub_08041878()) {
    case 1:
        D_03004620[3] = 4;
        break;
    case 2:
    case 3:
        D_03004620[7] = 0;
        D_03004620[2] = 0x12;
        sub_0805B404(1);
        break;
    }
    if (D_0202DBD0.flag != 0)
        sub_0809EE14(D_030033FC);
    else
        sub_0809EE68(D_030033FC);
    return 0;
}
