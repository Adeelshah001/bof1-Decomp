extern u8 D_03003FA4[];
extern u8 D_030023E0[];
extern u8 D_03003420[];
extern u8 D_0202DBD0[];
void sub_0803F764(void);
void sub_0803F7B0(void);

void sub_0803ECAC(void) {
    u8 i;
    u8 *base;
    u8 *end;

    D_03003FA4[0] = 0x0A;
    {
        u16 *p = (u16 *)D_030023E0;
        if (p[0x50] == 1) {
            D_03003FA4[0] = 0x12;
        }
    }
    base = D_03003420;
    end = base + 0x78;
    i = 0;
    do {
        u8 *s = base + i * 0x80;
        *(u16 *)(s + 0x4C) = 0;
        *(u16 *)(s + 0x50) = 0;
        *(u16 *)(s + 0x22) = 0;
        s[0x3A] = 0;
        *(u32 *)(end + i * 0x80) = 0;
        i++;
    } while (i <= 0x11);
}

s32 sub_0803EFCC(void **arg0) {
    if (((u8 *)*arg0)[1] == 0) {
        if ((u32)(s8)(D_0202DBD0[0x2B2] - 2) > 2U) {
            sub_0803F7B0();
        } else {
            sub_0803F764();
        }
    } else {
        if ((u32)(s8)(D_0202DBD0[0x2B2] - 2) > 2U) {
            sub_0803F764();
        } else {
            sub_0803F7B0();
        }
    }
    *arg0 = (void *)((u8 *)*arg0 + 2);
    return 0;
}
