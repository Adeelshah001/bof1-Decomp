extern u8 D_03004620[];
extern u8 D_03004410[];
extern u8 D_030016E0[];
extern const u8 D_080A65E8[];
extern u8 D_0202DBD0[];

void sub_08042084(void);
void sub_080A0A68(void *, const void *, u32);

s32 sub_0804413C(void)
{
    sub_08042084();
    D_03004620[7] = 0xFF;
    D_03004410[0xE] = 2;
    return 0;
}

s32 sub_0804415C(void)
{
    u8 *p = D_030016E0 + D_030016E0[1] * 0xC + 0xB;
    sub_08042084();
    D_03004620[7] = 0xFF;
    D_03004410[0xE] += 2;
    p[2] = -1;
    p[3] = -1;
    p[1] = 1;
    return 0;
}

s32 sub_080440F8(u8 *arg0)
{
    u8 arr[6];
    u8 i;
    u8 *p = arg0 + 0x29E;
    sub_080A0A68(arr, D_080A65E8, 6);
    for (i = 0; i <= 5; i++) {
        if (p[i] != arr[i]) {
            return 0;
        }
    }
    return 1;
}

s32 sub_080445CC(u16 *arg0)
{
    u16 sum = 0;
    u16 i;
    for (i = 2; i <= 0x4FA; i++) {
        sum += D_0202DBD0[i];
    }
    if (*arg0 == sum) {
        return 1;
    }
    return 0;
}
