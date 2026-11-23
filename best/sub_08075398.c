extern u8 D_03002AB0[];
extern const u8 D_08151320[];
extern u16 D_03001864;

u8 sub_08075428(s32);
u16 sub_080753F0(const Entity *);
u8 sub_08001770(s32);

u8 sub_0807518C(void)
{
    u32 val;
    val = ++D_03002AB0[0xBC];
    if (val > 0x41) {
        val = 0x42;
        D_03002AB0[0xBC] = val;
    }
    val = (u8)(val - 1) >> 3;
    val &= 7;
    val = *(const u8 *)(val + (u32)(D_08151320 + 1));
    return sub_08075428(val);
}

u16 sub_0807530C(const Entity *entity)
{
    u16 result;
    if (entity->pad3C[2] == 0)
        result = 0;
    else
        result = sub_080753F0(entity);
    return result;
}

s32 sub_0807535C(void)
{
    u8 flag = sub_08001770(0x6B);
    s32 result;
    if (flag == 0) {
        D_03002AB0[0xBC] = flag;
        result = 0x2901;
    } else {
        D_03002AB0[0xBC] = 0;
        result = 0x2B01;
    }
    return result;
}

s32 sub_08075398(void)
{
    s32 value = 0x47;
    if (D_03001864 & 1)
        value = 0x63;
    D_03002AB0[0xBC] = 0;
    return (value << 8) | 1;
}
