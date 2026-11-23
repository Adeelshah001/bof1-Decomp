void sub_0808A820(u8 *, ...);
s32 sub_0807CE30(u8 *);
void sub_0807CB08(void);

void sub_0808A7DC(u8 *actor)
{
    u8 *state = actor + 0xE0;
    u8 currentState = *state;
    if (currentState != 10) {
        sub_0808A820(actor, currentState);
        return;
    }
    actor[0xE1] = 0x24;
    if (sub_0807CE30(actor) != 0) {
        sub_0808A820(actor);
        return;
    }
    *state = 6;
    sub_0807CB08();
    {
        s32 phase = 6;
        actor[0x4D] = phase;
    }
}
