extern u8 D_03003520[];
extern u8 D_03002CF8[];
extern u8 D_03004830[];
extern u8 D_080F7550[];

void sub_08037C98(s32, s32);
u8 sub_08001770(s32);
void sub_080017EC(s32);
u8 sub_08019FE0(void *, s8);

u8 sub_08019FE0(void *arg0, s8 arg1) {
    u8 *p = (u8 *)arg0;
    u8 v = p[0x54] - 1;
    p[0x54] = v;
    if (v == 0) {
        p[0x55] = (u8)((p[0x55] - 1) ^ 0x80);
        p[0x54] = D_080F7550[p[0x55] & 0x7F];
    }
    return p[0x54];
}

s8 sub_08019FA0(void *arg0) {
    if (((u8 *)arg0)[0x54] == 0) {
        return 0;
    }

    if (((u8 *)arg0)[0x55] & 0x80) {
        *(u16 *)(((u8 *)arg0) + 6) -= 2;
    } else {
        *(u16 *)(((u8 *)arg0) + 6) += 2;
    }

    return (s8)sub_08019FE0(arg0, (s8)((u8 *)arg0)[0x54]);
}
