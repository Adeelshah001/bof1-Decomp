typedef struct {
    u8 pad00[0x61];
    u8 unk61;
    u8 pad62[0x124 - 0x62];
} State2AB0Item;

extern u16 D_03001864;
extern u8 D_03002AB0[];

void sub_080175F4(void)
{
    u8 *base;
    u8 *p;
    u32 zero;
    D_03001864 = 0x17;
    base = D_03004830;
    p = base + 0x2D;
    zero = 0;
    *p = zero;
    ((State2AB0Item *)D_03002AB0)[0].unk61 = zero;
    ((State2AB0Item *)D_03002AB0)[1].unk61 = zero;
    ((State2AB0Item *)D_03002AB0)[2].unk61 = zero;
    ((State2AB0Item *)D_03002AB0)[3].unk61 = zero;
    base[0x2C] = 0xFF;
    base[0x2B]++;
}
