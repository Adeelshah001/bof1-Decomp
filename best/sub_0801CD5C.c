void sub_0801970C(void);
extern u8 D_03002AB0[];
extern u8 D_03004830[];
extern u8 D_030023E0[];
extern u16 D_03004164;

u8 *sub_0801CC4C(void) {
    return D_03002AB0 + 0x40;
}

void sub_0801CBC4(void) {
    u8 *p = D_03002AB0 + 0xB8;
    *p &= 0xFB;
    sub_0801970C();
}

void sub_0801CB8C(u8 *arg0) {
    D_03004830[0x2D] += 1;
    *(u32 *)(arg0 + 0x68) += 2;
    if (*(u16 *)(D_030023E0 + 0xA4) == 0x1CE) {
        arg0[0x41] = (u8)((arg0[0x41] & 0x0F) | 0x20);
    }
}

void sub_0801CD5C(void) {
    u16 val = *(u16 *)0x03004164 - 1;
    *(u16 *)0x03004164 = val;
    if (val == 0) {
        u8 *q = (u8 *)0x03004830;
        q[0x2C] = 0;
        q[0x2D] = 0;
        q[0x2B]++;
    }
}
