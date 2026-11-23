extern u8 D_03002AB0[];
extern u8 D_0200B9E0[][0x40];

struct Unk4550 {
    u8 pad00[0x0C];
    u32 unkC;
    u8 pad10[0x1D - 0x10];
    u8 unk1D;
    u8 pad1E[0x21 - 0x1E];
    u8 unk21;
};

extern struct Unk4550 D_03004550;

void sub_0805BAF0(u8 arg0, u16 *arg1, u16 *arg2)
{
    *arg1 = 0x16;
    *arg2 = 0x17;
}

void sub_0805BBCC(u8 arg0, u16 *arg1, u16 *arg2)
{
    u8 flag = arg0 & 0x80;
    if (flag == 0) {
        D_03002AB0[0xB8] |= 4;
        D_03004830[0x3F] = 5;
        D_03004830[0x40] = flag;
    }
    *arg1 = 0xFFFF;
    *arg2 = 0x40;
}

void sub_0805B9E0(s32 arg0)
{
    u8 *entry = D_0200B9E0[arg0];
    u8 val = entry[0];
    if (val & 0x80) {
        D_03004550.unk21 = val & 0x7F;
        D_03004550.unkC = (((((entry[4] << 8) | entry[3]) << 8) | entry[2]) << 8) | entry[1];
    } else {
        D_03004550.unk21 = val;
        D_03004550.unkC = (u32)(entry + 1);
    }
    D_03004550.unk1D |= 2;
}

void sub_0805B980(s32 arg0)
{
    u8 *entry = D_0200B9E0[arg0 - 0x30];
    u8 val = entry[0];
    if (val & 0x80) {
        D_03004550.unk21 = val & 0x7F;
        D_03004550.unkC = (((((entry[4] << 8) | entry[3]) << 8) | entry[2]) << 8) | entry[1];
    } else {
        D_03004550.unk21 = val;
        D_03004550.unkC = (u32)(entry + 1);
    }
    D_03004550.unk1D |= 2;
}
