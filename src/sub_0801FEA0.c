typedef struct {
    u8 pad00[0x204];
    u16 items[65];
} InventoryData;

extern InventoryData D_0202DBD0;
extern u16 D_03004114;
u8 sub_0805CF40(u16, u16 *);
void sub_080017EC(s32);
void sub_0801D700(void);

void sub_0801FE8C(void)
{
    D_03004830[0x2B] &= 0x7F;
}

void sub_0801FEA0(void)
{
    u16 slot;

    sub_0805CF40(0x166, &slot);
    D_0202DBD0.items[slot] = 0x167;
    sub_080017EC(0xC3);
    sub_0801D700();
}

void sub_0801FEF4(void)
{
    u16 slot;

    sub_0805CF40(0x165, &slot);
    D_0202DBD0.items[slot] = 0;
    sub_080017EC(0xC2);
    sub_0801D700();
}

void sub_0801FF44(void)
{
    u8 *mode = &D_03004830[0x2A];
    u8 zero = 0;

    *mode = 8;
    D_03004830[0x2B] = zero;
    D_03004114 = zero;
}
