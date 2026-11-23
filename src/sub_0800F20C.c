extern u8 D_030023E0[];
extern u8 D_03002AB0[];
extern u32 D_03001694;
extern u16 D_03004114;

void sub_080052C0(s32);
void sub_0800511C(s32, s32);
void sub_08023FD8(s32);
void sub_080379D4(s32);
void sub_0803AD54(u16);

typedef struct {
    u8 pad00[0x02];
    u16 unk02;
    u8 pad04[0x06 - 0x04];
    u16 unk06;
    u8 pad08[0xB8 - 0x08];
    u8 unkB8;
} Struct2AB0;

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
    u8 padA6[0xA8 - 0xA6];
    u16 unkA8;
} Struct23E0;

void sub_0800E438(void)
{
    u8 *p;
    sub_080052C0(0x10000);
    p = D_03004830;
    p[0x2C] = 0xA4;
    p[0x2D] = 1;
    p[0x2B]++;
}

void sub_0800DFB8(void)
{
    ((Struct2AB0 *)D_03002AB0)->unk02 = 0x0F98;
    ((Struct2AB0 *)D_03002AB0)->unk06 = 0x05AC;
    ((Struct23E0 *)D_030023E0)->unkA8 = 0x018F;
    sub_0800511C(0, 0);
    D_03004830[0x2B]++;
}

void sub_0800EFA4(void)
{
    u8 *p = D_03004830;
    s8 val;
    p[0x2C]--;
    val = p[0x2C];
    if (val != 0) {
        D_03004114 = 0;
        return;
    }
    p[0x2C] = val;
    p[0x2D] = val;
    p[0x2B]++;
    sub_08023FD8(0x2E);
    sub_080379D4(0x26);
    D_03001694 |= 0x40;
    D_03004114 = 0;
}

void sub_0800F20C(void)
{
    u8 *p = D_03004830;
    u8 val = --p[0x2C];
    if (val == 0) {
        p[0x2C] = 0x40;
        sub_0803AD54(((Struct23E0 *)D_030023E0)->unkA4);
        D_03002AB0[0xB8] &= 0x7F;
        p[0x2B]++;
    }
}
