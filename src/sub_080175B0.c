typedef struct {
    u8 pad00[0x61];
    u8 unk61;
    u8 pad62[0x124 - 0x62];
} State2AB0Item;

extern u16 D_03001864;
extern u8 D_03002AB0[];
extern u8 D_030034A0[];

void func_08017700(void)
{
}

void sub_080175F4(void)
{
    u8 *base;
    D_03001864 = 0x17;
    base = D_03004830;
    base[0x2D] = 0;
    ((State2AB0Item *)D_03002AB0)[0].unk61 = 0;
    ((State2AB0Item *)D_03002AB0)[1].unk61 = 0;
    ((State2AB0Item *)D_03002AB0)[2].unk61 = 0;
    ((State2AB0Item *)D_03002AB0)[3].unk61 = 0;
    base[0x2C] = 0xFF;
    base[0x2B]++;
}

void sub_080175B0(void)
{
    ((State2AB0Item *)D_03002AB0)[0].unk61 = 2;
    ((State2AB0Item *)D_03002AB0)[1].unk61 = 2;
    ((State2AB0Item *)D_03002AB0)[2].unk61 = 2;
    ((State2AB0Item *)D_03002AB0)[3].unk61 = 2;
    D_03004830[0x2C] = 0x20;
    D_03004830[0x2B]++;
}

void sub_08017558(void)
{
    Entity *p = (Entity *)D_030034A0;
    p->unk6 = 0xDEBC;
    p->unk2C = 0xDEBC;
    ((State2AB0Item *)D_03002AB0)[0].unk61 = 2;
    ((State2AB0Item *)D_03002AB0)[1].unk61 = 2;
    ((State2AB0Item *)D_03002AB0)[2].unk61 = 2;
    ((State2AB0Item *)D_03002AB0)[3].unk61 = 2;
    D_03004830[0x2D]++;
    D_03004830[0x2B]++;
}
