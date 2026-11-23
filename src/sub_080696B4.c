extern u8 *D_03004760[];
extern u8 D_0200BAA0[];
extern u8 sub_0814C2A4[];

void sub_0805D634(u8, u8 *);

void sub_080696B4(void)
{
    u8 *ptr = D_03004760[3];
    u8 *p;
    u32 val;
    u8 flags = ptr[8];
    flags &= 0x20;
    p = sub_0814C2A4 + 0x2C;
    if (flags != 0) {
        p = (u8 *)0x0814C2DC;
    }
    D_0200BAA0[0] = *p;
    val = (u32)(p + 1);
    D_0200BAA0[1] = val;
    val >>= 8;
    D_0200BAA0[2] = val;
    val >>= 8;
    D_0200BAA0[3] = val;
    val >>= 8;
    D_0200BAA0[4] = val;
    sub_0805D634(ptr[0xF], D_0200BAA0 - 0x80);
    sub_0805D634(D_03004760[3][0xE], D_0200BAA0 - 0x40);
}
