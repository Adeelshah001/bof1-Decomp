extern u16 D_030016E0[];
extern u8 D_030045B0[];
extern u8 D_03004620[];
extern u8 D_03004760[];
extern u32 D_0810063C[];
extern void sub_080379D4(s32 arg0);

s32 sub_0805C934(void *arg0)
{
    u32 temp;
    u32 entry;
    s32 ret;

    if ((1 & D_030016E0[3]) == 0) {
        ret = 0;
    } else {
        if (D_030045B0[0x37] == 0) {
            sub_080379D4(2);
        }
        D_030045B0[0x37] = 0;
        D_03004620[7] = 0;
        temp = D_03004760[0x18] >> 1;
        if (temp == 0xE) {
            ret = 1;
        } else {
            entry = D_0810063C[temp];
            if (entry == 0) {
                ret = 1;
            } else {
                D_03004620[2] = *(u8 *)((u32)entry + (u32)arg0);
                D_03004620[3] = 0;
                ret = 1;
            }
        }
    }
    return ret;
}
