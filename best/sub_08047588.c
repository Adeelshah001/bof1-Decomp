extern u8 D_030023E0[];

s32 sub_08046BBC(void);
u32 sub_08036C04(u32, u16, u16);
void sub_0803A8EC(void *);
void sub_08047624(void);

u8 sub_080472B8(void *arg0) {
    u8 *p;
    u8 v;
    p = (u8 *)arg0;
    p += 0x61;
    v = *p;
    *p = (u8)((v + 2) & 3);
    return sub_08046BBC();
}

void sub_0804725C(void *arg0, u8 *arg1) {
    u8 result;
    u8 final;
    result = sub_08036C04((u32)0x030023E0, *(u16 *)((u8 *)arg0 + 2), *(u16 *)((u8 *)arg0 + 0x2C));
    final = result - 3;
    *arg1 = final;
}

void sub_08047588(void *arg0) {
    u16 *p;
    u32 timer;
    p = (u16 *)((u8 *)arg0 + 0x54);
    timer = (u32)*p - 1;
    *p = (u16)timer;
    if ((timer << 16) == 0) {
        *p = 0xA0;
        *(u32 *)((u8 *)arg0 + 0x64) = (u32)sub_08047624;
    }
    sub_0803A8EC(arg0);
}
