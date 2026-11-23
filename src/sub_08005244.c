extern void (*D_080F4AA4[])(void);
extern void (*D_080F5828[])(void);
extern s16 D_030040F8;
extern s16 D_03004100;
extern s16 D_03004120;
extern const s8 D_080F4B68[];
extern u8 D_0201AFC0[];
extern u8 D_02020FC0[];
extern u8 D_020211C0[];
extern vu32 D_040000D4[];
extern void sub_080379D4(s32);
extern void sub_080051B0(s32, s32, s32);

void sub_08005244(void)
{
    u8 *state = D_03004830;
    s8 *step = (s8 *)(state + 0x31);

    if (*step >= 0)
        D_080F4AA4[*step]();
}

void sub_080051C8(u16 x, u16 y, u16 z)
{
    s16 *saved = &D_030040F8;
    if ((*saved = D_03004100) != 0) {
        const s8 *table = D_080F4B68;
        sub_080379D4(table[*saved]);
    }
    sub_080051B0((s16)x, (s16)y, (s16)z);
}

void sub_08005218(s16 x, s16 y, s16 z)
{
    D_03004120 = 2;
    D_03004100 = 1;
    sub_080051C8(x, y, z);
}

void sub_08005274(s32 index)
{
    vu32 *dma = D_040000D4;
    u8 *dest;
    u32 control;

    dma[0] = (u32)D_02020FC0;
    dest = D_0201AFC0;
    dma[1] = (u32)dest;
    control = 0x80000100;
    dma[2] = control;
    (void)dma[2];
    dma[0] = (u32)D_020211C0;
    dma[1] = (u32)(dest + 0x800);
    dma[2] = control;
    (void)dma[2];
    D_080F5828[index]();
}
