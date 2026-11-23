extern u8 D_03002AB0[];
extern u8 D_03004584[];
extern void *D_03004448;

void sub_08072CC4(s32);
void *sub_0800764C(s32);

void sub_0801E56C(void) {
    sub_08072CC4(0x512F);
    if (D_03004584[0] == 0) {
        D_03004830[0x2C] = 0x40;
        D_03004830[0x2B]++;
    }
}

void sub_0801E5A0(void) {
    if (--D_03004830[0x2C] == 0) {
        D_03004448 = sub_0800764C(0x18);
        D_03004830[0x2B]++;
    }
}

void sub_0801E5D8(void) {
    u32 *p = (u32 *)D_03004448;
    u16 *st = (u16 *)D_03002AB0;
    u8 *base;

    if (((st[3] & 0xFFF0) == ((p[5] & 0xFFFFFF) >> 8)) &&
        ((st[1] & 0xFFF0) == ((p[4] & 0xFFFFFF) >> 8))) {
        base = D_03004830;
        base[0x2C] = 0x18;
        base[0x2B]++;
    }
}
