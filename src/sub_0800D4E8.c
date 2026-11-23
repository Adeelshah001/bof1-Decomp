void sub_080A0770(s32);
void sub_080017EC(s32);
void sub_0803EE88(void *);
void sub_08072CC4(s32);

extern u32 D_080F6228[];
extern u32 D_080F62D4[];
extern u8 D_03004584;
extern u8 D_030035A0[];

void sub_0800D4E8(void) {
    u32 *table = D_080F6228;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0800D50C(void) {
    u32 *table = D_080F62D4;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0800D530(void) {
    sub_08072CC4(0x70D);
    if (D_03004584 == 0) {
        u8 *p = D_03003420;
        sub_0803EE88(p);
        sub_0803EE88(p + 0x80);
        sub_080017EC(0x4D);
        *(D_03004830 + 0x2B) = 1;
    }
}

void sub_0800D574(void) {
    sub_08072CC4(0x70E);
    if (D_03004584 == 0) {
        u8 *p = D_030035A0;
        sub_0803EE88(p);
        sub_0803EE88(p - 0x80);
        sub_0803EE88(p - 0x180);
        sub_0803EE88(p - 0x100);
        sub_080017EC(0x4E);
        *(D_03004830 + 0x2B) = 1;
    }
}
