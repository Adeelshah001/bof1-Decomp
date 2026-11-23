extern void sub_080A0770(s32);
extern u32 D_080F7310[];
void sub_0801A5FC(void)
{
    u32 *table = D_080F7310;
    u8 *base = D_03004830;
    s8 *step = (s8 *)(base + 0x2B);
    sub_080A0770(table[(s32)*step]);
}
extern u32 D_080F72CC[];
void sub_0801A5D8(void)
{
    u32 *table = D_080F72CC;
    u8 *base = D_03004830;
    s8 *step = (s8 *)(base + 0x2B);
    sub_080A0770(table[(s32)*step]);
}
extern u32 D_080F7234[];
void sub_0801A5B4(void)
{
    u32 *table = D_080F7234;
    u8 *base = D_03004830;
    s8 *step = (s8 *)(base + 0x2B);
    sub_080A0770(table[(s32)*step]);
}
extern u8 sub_08038458(s32);
extern void sub_08004EA0(s32);
extern u8 D_03002AB0[];

void sub_0801A584(void)
{
    if (sub_08038458(1) != 0) {
        u8 *event = D_03002AB0;
        u8 *step;
        sub_08004EA0(*(s32 *)(event + 0x94));
        step = D_03004830 + 0x2B;
        ++*step;
    }
}
