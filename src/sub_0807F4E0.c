extern u8 D_0202DBD0[];
extern u8 D_03004584[];
extern u8 D_03004F50[];
u8 sub_08001770(u16 flag);
void sub_0807F5CC(s16 first, s16 second, s16 third);

void sub_0807F4E0(void)
{
    u8 flag;
    u8 *base;
    u32 offset;

    D_03004830[0x2D] = 0;
    if (sub_08001770(0x58) != 0) {
        flag = sub_08001770(0x4C);
        if (flag == 0) {
            base = D_0202DBD0;
            offset = 0x2B9;
            base[offset] = flag;
            sub_0807F5CC(0x65, 0x178, 0x337C);
            return;
        }
    }
    *D_03004584 = 1;
    sub_08002BBC(D_03004F50[0x5B]);
}
