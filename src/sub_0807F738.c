extern u8 D_03004F50[];

void *sub_08084D04(u16, u16);
void sub_0807F778(s32);

void *sub_080802CC(u8 *arg0)
{
    u16 i = 4;

    arg0[0x5E] = 0;
    do {
        u16 prev = i - 1;
        u8 *p = arg0 + 0x64 + prev;
        u8 val = *p;
        if (val != i) {
            *p = i;
            return sub_08084D04((val - 1) * 2, (u8)(prev * 2));
        }
        i = prev;
    } while (i != 0);
    return 0;
}

void sub_0807F738(void)
{
    sub_0807F778(6);
}

s32 sub_0807F708(void)
{
    s32 ret = 4 - D_03004F50[0x60];
    if (ret != 0) {
        ret--;
    }
    return ret;
}

void sub_0807F634(void)
{
    sub_08002BBC(D_03004F50[0x5B]);
}
