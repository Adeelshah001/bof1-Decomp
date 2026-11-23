extern u16 D_02020FC0;
void sub_0807CA08(void *actor);
void sub_080859B0(void *actor);

void sub_080860E0(void)
{
    u8 *actor = D_03003420;
    s32 index = 9;
    u16 white = 0x7FFF;
    u8 *action = actor + 0xD8;
    u8 *state = actor + 0x3A;

    do {
        if (state[0] != 0 &&
            (state[2] == 0x32 || !(0x80 & action[0x19]))) {
            if (D_02020FC0 != white)
                sub_080859B0(actor);
            else if (action[0] != 0x32)
                sub_0807CA08(actor);
        }
        action += 0x124;
        state += 0x124;
        actor += 0x124;
    } while (--index >= 0);
}
