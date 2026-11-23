extern const u8 D_080A65E8[];

void sub_080A0A68(void *, const void *, u32);

s32 sub_080440F8(u8 *arg0)
{
    u8 arr[6];
    u8 i;
    u8 *p;
    sub_080A0A68(arr, D_080A65E8, 6);
    i = 0;
    p = arg0 + 0x29E;
    for (; i <= 5; i++) {
        if (p[i] != arr[i]) {
            return 0;
        }
    }
    return 1;
}
