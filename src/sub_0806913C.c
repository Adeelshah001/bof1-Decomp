extern u8 D_03004620[];
extern u8 *D_03004760[];
extern u8 D_0200BAA0[];
extern u8 D_0814BCF4[];
extern u8 sub_0814C2F6[];

void sub_0805D634(u8, u8 *);
void sub_08059978(void);
void sub_0805B308(void *);
void sub_0805A9FC(void);
void sub_0805B358(u32, u8, u8, u8, s32);

void sub_080696B4(void)
{
    u8 *ptr = D_03004760[3];
    u8 *p;
    u32 val;
    u8 flags = ptr[8];
    flags &= 0x20;
    p = (u8 *)0x0814C2D0;
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

s32 sub_0806913C(void)
{
    u8 *p;
    u8 val;
    sub_08059978();
    sub_0805B308(D_0814BCF4 + 1);
    sub_0805A9FC();
    p = D_03004620;
    val = p[0xB6];
    p[0xB1] = val;
    sub_0805B358((u32)(sub_0814C2F6 + 0x92), p[0xB2], 0x10, 0, 2);
    p[3] = 6;
    return 0;
}
