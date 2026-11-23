extern u8 D_03004F30[];
extern u16 D_03001654;
extern u16 D_03001670;
extern u16 D_03001684;

void sub_08000248(s32);
void sub_0809AF74(s32);
void sub_0809AFD8(s32);
void sub_0809B078(s32);
void sub_0809B148(void);
void sub_0809B4BC(void);

void sub_0809B440(s32 arg0)
{
    u16 save1654;
    u16 save1684;

    D_03004F30[6] |= 0x80;
    D_03001670 = 0;
    sub_08000248(1);
    save1654 = D_03001654;
    save1684 = D_03001684;
    sub_0809AF74(arg0);
    sub_0809B078(arg0);
    sub_0809B4BC();
    D_03001654 = save1654;
    D_03001684 = save1684;
    sub_0809AFD8(arg0);
    sub_0809B148();
    D_03004F30[6] &= 0x7F;
}
