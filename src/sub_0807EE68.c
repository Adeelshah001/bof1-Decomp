extern u8 D_03002AB0[];
extern u8 D_03004F50[];
void sub_080391BC(void *);

void sub_0807EE68(void)
{
    sub_080391BC(D_03002AB0);
    if (D_03004F50[0x5B] == 0)
        D_03004830[0x2D] = 0x80;
    else
        D_03004830[0x2D] = 2;
}
