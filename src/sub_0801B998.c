extern u8 gEntityPool[];

u8 sub_08019DBC(s32);
void sub_08054B60(void);
void sub_08054C2C(void);
u8 sub_08038458(s32);
void sub_08004EA0(s32);

void sub_0801B998(void) {
    if (sub_08019DBC(7) == 0) {
        D_03004830[0x2C] = 0x40;
        D_03004830[0x2B]++;
    }
}

void sub_0801B9C0(void) {
    ((Entity *)D_03003420)->unk78 = (u32)sub_08054B60;
    D_03004830[0x2C] = 0xF0;
    D_03004830[0x2B]++;
}

void sub_0801BA00(void) {
    ((Entity *)gEntityPool)->unk2C = 0xE70C;
    ((Entity *)D_03003420)->unk6 = 0xE76C;
    ((Entity *)D_03003420)->unk2C = 0xE7FC;
    ((Entity *)D_03003420)->unk78 = (u32)sub_08054C2C;
    D_03004830[0x2C] = 0x6E;
    D_03004830[0x2B]++;
}

void sub_0801BB0C(void) {
    if (sub_08038458(1) != 0) {
        sub_08004EA0(0x8197);
        D_03004830[0x2C] = 0x32;
        D_03004830[0x2B]++;
    }
}
