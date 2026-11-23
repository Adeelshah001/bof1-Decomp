extern u8 D_03002AB0[];
extern struct {
    u8 pad00[0x2B8];
    u8 unk2B8;
} D_0202DBD0;
void sub_0806CB98(void);
void sub_08073500(void);

void sub_0806CCF0(void)
{
    s32 i = 0;
    u8 *entry = D_03002AB0;
    u32 mode = 0xE2;
    mode += (u32)entry;
    entry += 0x3A;
    do {
        if (entry[0] != 0 && entry[2] == 5) {
            if (!(((u8 *)mode)[0xE] & 0x40)) {
                u32 low = D_0202DBD0.unk2B8 & 0xF;
                u32 high;
                D_0202DBD0.unk2B8 = low;
                high = *(u8 *)mode & 0x70;
                if (high != 0) {
                    D_0202DBD0.unk2B8 = high | low;
                    sub_0806CB98();
                    sub_08073500();
                }
            }
            return;
        }
        mode += 0x124;
        entry += 0x124;
        i++;
    } while (i < 8);
}
