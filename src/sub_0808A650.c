void sub_0808A820(u8 *);
s32 sub_0807CE30(u8 *);
void sub_0807CB08(void);
void sub_08037FC4(u8 *, s32);
void sub_08083484(u8 *);

void sub_0808A7DC(u8 *actor)
{
    u8 *state = &actor[0xE0];
    if (*state != 10) {
        sub_0808A820(actor);
    } else {
        actor[0xE1] = 0x24;
        if (sub_0807CE30(actor) != 0) {
            sub_0808A820(actor);
        } else {
            *state = 6;
            sub_0807CB08();
            actor[0x4D] = 6;
        }
    }
}

void sub_0808A650(u8 *actor)
{
    u8 *countdown = actor + 0x54;
    s32 value = *countdown;
    s32 next = value - 1;
    *countdown = next;
    if ((u8)next != 0) {
        value &= 1;
        if (value == 0) {
            value = 8;
        } else {
            value = 14;
        }
        actor[0x41] = value;
        return;
    }
    sub_08037FC4(actor, 2);
    ++actor[0x50];
    actor[0x41] = 8;
    sub_08083484(actor);
}
