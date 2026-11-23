void sub_080017EC(s32);
void sub_0803EE88(void *);
void sub_08072CC4(s32);

extern u8 D_03004584;
extern u8 D_030035A0[];

void sub_0800D530(void) {
    sub_08072CC4(0x70D);
    if (D_03004584 == 0) {
        u8 *p = D_03003420;
        u8 *base;
        sub_0803EE88(p);
        sub_0803EE88(p + 0x80);
        sub_080017EC(0x4D);
        base = D_03004830;
        *(base + 0x2B) = 1;
    }
}

void sub_0800D574(void) {
    sub_08072CC4(0x70E);
    if (D_03004584 == 0) {
        u8 *p = D_030035A0;
        u8 *base;
        sub_0803EE88(p);
        sub_0803EE88(p - 0x80);
        sub_0803EE88(p - 0x180);
        sub_0803EE88(p - 0x100);
        sub_080017EC(0x4E);
        base = D_03004830;
        *(base + 0x2B) = 1;
    }
}
