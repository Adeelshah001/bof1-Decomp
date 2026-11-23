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

void sub_0805B9E0(s32 arg0)
{
    u8 *entry = D_0200B9E0[arg0];
    u8 val = entry[0];
    if (val & 0x80) {
        struct Unk4550 *s = &D_03004550;
        u32 mask = 0x7F;
        mask &= val;
        s->unk21 = mask;
        s->unkC = (((((entry[4] << 8) | entry[3]) << 8) | entry[2]) << 8) | entry[1];
    } else {
        D_03004550.unk21 = val;
        D_03004550.unkC = (u32)(entry + 1);
    }
    D_03004550.unk1D |= 2;
}

void sub_0805B980(s32 arg0)
{
    s32 offset = (arg0 - 0x30) << 6;
    u8 *entry = (u8 *)D_0200B9E0 + offset;
    u8 val = entry[0];
    if (val & 0x80) {
        struct Unk4550 *s = &D_03004550;
        u32 mask = 0x7F;
        mask &= val;
        s->unk21 = mask;
        s->unkC = (((((entry[4] << 8) | entry[3]) << 8) | entry[2]) << 8) | entry[1];
    } else {
        D_03004550.unk21 = val;
        D_03004550.unkC = (u32)(entry + 1);
    }
    D_03004550.unk1D |= 2;
}
