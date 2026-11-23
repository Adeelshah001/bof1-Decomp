extern u8 D_03004830[];
extern u8 D_03002AB0[];

void sub_080017EC(s32 arg0);
void sub_0801270C(void);
s32 sub_08038458(s32 arg0);
void sub_08024008(s32 arg0);
void sub_08004EA0(s32 arg0);

void sub_0801E984(void) {
    u8 *p = D_03002AB0;
    sub_080017EC(0xD0);
    *(u32 *)(p + 0x88) = 0;
    p[0x4C] = 8;
    p[0x50] = 0;
    sub_0801270C();
}

void sub_0801E944(void) {
    if (sub_08038458(0) != 0) {
        sub_08024008(0x3E);
        D_03004830[0x2B] += 1;
    }
}

void sub_0801E9B0(void) {
    sub_08004EA0(0x857E);
    D_03004830[0x2A] = 0;
    D_03004830[0x2B] = 0;
}
