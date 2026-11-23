extern u8 D_03004830[];
extern u8 D_03002AB0[];
extern u16 D_03004114;
extern u8 D_080F78D8[];
extern u8 D_080F7920[];

struct Struct_030023E0 {
    u8 pad[0xA8];
    u16 unkA8;
};
extern struct Struct_030023E0 D_030023E0;

s32 sub_08001770(s32);
void sub_08018858(void);
void sub_080278E0(void *);

void sub_0801A218(void) {
    u8 *p = D_03004830;
    p[0x2A] = 0;
    p[0x2B] = 0;
}

void sub_0801A22C(void) {
    u8 val = D_03002AB0[0x4C];
    if (val == 0) {
        D_03004114 = val;
    } else if ((sub_08001770(0xA4) << 24) != 0) {
        sub_08018858();
    } else {
        sub_080278E0(D_080F78D8);
    }
}

void sub_0801A1D0(void) {
    if (D_030023E0.unkA8 == 0x102) {
        if ((sub_08001770(0xA1) << 24) != 0) {
            u8 *p = D_03004830;
            D_03002AB0[0xB8] |= 4;
            p[0x2A] = 0x24;
            p[0x2B] = 0;
        }
    }
}

void sub_0801A268(void) {
    if ((sub_08001770(0xA0) << 24) != 0) {
        D_03004114 = 0;
    } else {
        sub_080278E0(D_080F7920);
    }
}
