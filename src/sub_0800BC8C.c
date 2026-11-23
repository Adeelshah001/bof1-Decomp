extern u8 D_0202DBD0[];
extern u8 D_03002AB0[];
extern u8 D_03004584[];
extern void *D_03004154;
extern u8 D_03003720[];

void sub_080017EC(s32);
void sub_08072CC4(s32);
void sub_08004EA0(s32);
void sub_0803AF58(s32, s32);
void *sub_0803ED98(void);

void sub_0800BF94(void) {
    sub_080017EC(0x5C);
    D_0202DBD0[0x45E] |= 0xD;
    D_0202DBD0[0x45F] |= 0x02;
    D_03004830[0x2C] = 0x3E;
    D_03004830[0x2B] += 1;
}

void sub_0800BC8C(void) {
    sub_08072CC4(0x711);
    if (D_03004584[0] == 0) {
        sub_08004EA0(0x8161);
        D_03002AB0[0x338] |= 0x40;
        sub_080017EC(0x41);
        D_03004830[0x2D] += 1;
        D_03004830[0x2B] += 1;
    }
}

void sub_0800BC2C(void) {
    void *ent;
    sub_0803AF58(0x69, 0xFFFF);
    ent = sub_0803ED98();
    D_03004154 = ent;
    ((u8 *)D_03004154)[0x3C] = 6;
    ((u8 *)D_03004154)[0x3A] = 1;
    ((u8 *)D_03004154)[0x41] = 0x0C;
    *(u16 *)((u8 *)D_03004154 + 2) = 0xD98;
    *(u16 *)((u8 *)D_03004154 + 6) = 0xFDBC;
    *(u16 *)((u8 *)D_03004154 + 0x2C) = 0xFDBC;
    D_03004830[0x2C] = 0x0F;
    D_03004830[0x2B] += 1;
}

void sub_0800BAF4(void) {
    u16 *base;
    u16 *ptr;
    base = (u16 *)D_03003720;
    base[1] = 0xEA8;
    base[3] = 0xFDAC;
    base[0x16] = 0xFDAC;
    ptr = (u16 *)((u8 *)base - 0x100);
    ptr[1] = 0xDF8;
    ptr[3] = 0xFD9C;
    *(u16 *)((u8 *)base - 0xD4) = 0xFD9C;
    D_03004830[0x2C] = 0x1C;
    D_03004830[0x2B] += 1;
}
