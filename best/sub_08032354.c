s32 sub_08032354(u8 *actor, u8 action)
{
    if (action == 2) {
        u8 *state = actor + 0x4D;
        u8 zero = 0;

        *state = 8;
        actor[0x50] = zero;
    } else {
        u8 *field;

        D_030023D0[0] = action;
        field = actor + 0xBE;
        action = 0;
        *field = action;
        field -= 0x71;
        *field = action;
        field += 3;
        *field = action;
    }
    return 0;
}
