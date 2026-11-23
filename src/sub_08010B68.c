/* identical to sub_0800D624 (matched), with its names changed by decompdecomp */
extern u8 D_03002AB0[];
extern u8 D_03004584[];

void sub_08054B60(void);
void sub_08054C18(void);
void sub_080017EC(s32);
void sub_08072CC4(s32);

void sub_08010B68(void) {
    ((Entity *)D_03003420)->unk78 = (u32)sub_08054B60;
    D_03004830[0x2C] = 0xD0;
    D_03004830[0x2B]++;
}

void sub_0800D64C(void) {
    ((Entity *)D_03003420)->unk6 = 0x5E8C;
    sub_080017EC(0x48);
    D_03002AB0[0xB8] &= 0xFB;
    D_03004830[0x2A] = 0;
    D_03004830[0x2C] = 0;
}

void sub_0800D5F8(void) {
    sub_08072CC4(0x2006);
    if (D_03004584[0] == 0) {
        D_03004830[0x2B]++;
    }
}

void sub_0800D5D0(void) {
    ((Entity *)D_03003420)->unk78 = (u32)sub_08054C18;
    D_03004830[0x2D]++;
    D_03004830[0x2B]++;
}
