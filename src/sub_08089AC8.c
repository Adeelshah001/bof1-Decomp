void sub_08037FC4(u8 *, u16);
void sub_0807CB08(void);
void sub_08089B38(u8 *);
void sub_08089B50(u8 *, s32);
void sub_08089B60(u8 *);
u16 sub_080915D4(u8 *);

void sub_08089AC8(u8 *actor)
{
    u8 *timer;
    u32 state;

    state = actor[0xE0];

    if (state == 8) {
        sub_08089B60(actor);
        return;
    }

    if (state == 0xA) {
        state = sub_080915D4(actor);
        sub_08037FC4(actor, state);
        state = actor[0xE1];
        switch (state) {
        case 2:
            sub_08089B38(actor);
            return;
        case 1:
            sub_08089B50(actor, 8);
            return;
        default:
            sub_0807CB08();
            state = 8;
            timer = actor + 0x54;
            *timer = state;
            ++timer;
            *timer = state;
            sub_08089B50(actor, 0xC);
            return;
        }
    }

    sub_08089B38(actor);
}
