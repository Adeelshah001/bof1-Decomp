extern u8 D_03002AB0[];
s32 sub_080274FC(void *actor);

void sub_0802490C(void)
{
    u8 *actor = D_03002AB0;
    u8 *state;

    actor[0xB8] &= 0xBF;
    sub_080274FC(actor);
    state = D_03004830;
    if (state[0x40] != 0)
        state[0x40]++;
}
