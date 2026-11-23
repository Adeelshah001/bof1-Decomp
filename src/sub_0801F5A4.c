extern u8 D_03001698;
extern u8 D_03001674;
extern u8 D_0300166C;
extern u8 D_030016A4;

void sub_0803D3B8(s32);
void sub_0800518C(s16, s16, s16);

void sub_0801F5A4(void)
{
    u8 *p1;
    u8 val;
    u8 *p2;
    u8 *p3;
    u8 *p4;

    sub_0803D3B8(5);
    sub_0800518C(0, 0x7A8, 0x61C);
    p1 = &D_03001698;
    val = 8;
    p2 = &D_03001674;
    p3 = &D_0300166C;
    p4 = &D_030016A4;
    D_03004830[0x2B]++;
    *p1 = val;
    *p2 = val;
    *p3 = 0x40;
    *p4 = 0x40;
}
