extern u8 D_03002AB0[];
extern u16 D_03004114[];
extern u8 D_03004830[];

s32 sub_08001770(s32);
void sub_08004EA0(s32);

void sub_0800C51C(void) {
    u8 val;
    if ((u8)sub_08001770(0x5E) == 0 || (val = sub_08001770(0x59)) != 0) {
        D_03004114[0] = 0;
        return;
    }
    sub_08004EA0(0x819A);
    D_03002AB0[0xB8] |= 4;
    D_03004830[0x2A] = 7;
    D_03004830[0x2B] = val;
    D_03004114[0] = val;
}
