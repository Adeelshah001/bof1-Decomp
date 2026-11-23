extern u8 D_03003520[];
extern u8 D_03002CF8[];
extern u8 D_03004830[];
extern u8 D_080F7550[];

void sub_08037C98(s32, s32);
u8 sub_08001770(s32);
void sub_080017EC(s32);
u8 sub_08019FE0(void *);

void sub_0801A02C(void) {
    *(u16 *)(D_03003520 + 6) -= 1;
    *(u16 *)(D_03003520 + 0x2C) -= 1;
    sub_08037C98((s32)D_03002CF8, 0);
}

void sub_0801A070(void) {
    u8 result = sub_08001770(0xAC);
    if (result == 0) {
        sub_080017EC(0xAC);
        D_03004830[0x2A] = result;
        D_03004830[0x2B] = result;
    }
}

u8 sub_08019FE0(void *arg0) {
    u8 *p54 = (u8 *)arg0 + 0x54;
    u8 *p55 = (u8 *)arg0 + 0x55;

    --*p54;
    if (*p54 == 0) {
        *p55 = (u8)((*p55 - 1) ^ 0x80);
        *p54 = D_080F7550[*p55 & 0x7F];
    }
    return *p54;
}

s8 sub_08019FA0(void *arg0) {
    u8 *p54 = (u8 *)arg0 + 0x54;
    u8 *p55 = (u8 *)arg0 + 0x55;
    u16 *p6 = (u16 *)((u8 *)arg0 + 6);

    if (*p54 == 0) {
        return 0;
    }
    if (*p55 & 0x80) {
        *p6 -= 2;
    } else {
        *p6 += 2;
    }
    return (s8)sub_08019FE0(arg0);
}
