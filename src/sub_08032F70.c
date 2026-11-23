u8 sub_08038458(s32);
void sub_0802CCEC(void *);
u8 sub_0802E340(void *);

u32 sub_08032F70(u8 *arg0)
{
    if (sub_08038458(1) != 0) {
        arg0[0x54] = 0x10;
        arg0[0x50] = 2;
        sub_0802CCEC(arg0);
        return sub_0802E340(arg0);
    }
    return 0;
}
