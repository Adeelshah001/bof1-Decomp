extern u32 D_03001694;
void sub_0803AF58(u16, u16);
void sub_080075BC(s32);
void sub_08013800(void *);

void sub_080143E0(void)
{
    u8 *state = D_03004830;
    state[0x2C] = 30;
    state[0x2B]++;
}

void sub_080143F8(void)
{
    sub_0803AF58(0xF5, 0xFFFF);
    D_03001694 |= 1;
    D_03004830[0x2B]++;
}

void sub_080143C4(void)
{
    D_03004830[0x2C] = 20;
    sub_080075BC(0x8354);
}

void sub_08014428(void)
{
    u8 *actor = D_03003420;
    *(u32 *)(actor + 0x68) += 18;
    actor[0x6D] &= 0xDF;
    sub_08013800(actor);
    D_03004830[0x2C] = 64;
    sub_080075BC(0x835C);
}
