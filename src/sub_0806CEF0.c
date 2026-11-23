extern u8 D_0300178C;
extern u8 D_03003410;
extern u32 D_030040F0;
extern u32 D_03003FB0;
extern u32 D_03002500;
extern u16 D_03001780;
extern u8 D_030045B0[];
void sub_0806CE1C(void);

void sub_0806CEF0(void)
{
    u8 *flags;
    u8 *base;
    D_0300178C = 0;
    D_03003410 = 0;
    D_030040F0 = 0;
    D_03003FB0 = 0;
    D_03002500 = 0;
    D_03001780 = 0;
    base = D_030045B0;
    flags = base + 0x46;
    *flags++ = 0;
    *flags++ = 0;
    *flags = 0;
    flags += 5;
    *flags++ = 0;
    *flags = 0;
    sub_0806CE1C();
}
