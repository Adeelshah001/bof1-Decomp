extern const char D_080A6F8C[], D_080A6F80[];
void sub_080352D0(const char *, const char *, s32, ...);
void sub_0808A904(u8 *);
void sub_0808A910(u8 *);
void sub_0808A820(u8 *);
s32 sub_0807CE30(u8 *);
void sub_0807CB08(u8 *);
u16 sub_0807B2BC(u8 *);
void sub_08037FC4(u8 *, s32);
void sub_08083300(u8 *, s32);
void sub_0808A894(u8 *);
void sub_0808A8B8(u8 *);
void sub_0808A8E0(u8 *);
void sub_08083484(u8 *);

void sub_0808A7DC(u8 *actor)
{
    u8 *state = &actor[0xE0];
    if (*state != 10) {
        sub_0808A820(actor);
        return;
    }
    actor[0xE1] = 0x24;
    if (sub_0807CE30(actor)) {
        sub_0808A820(actor);
        return;
    }
    *state = 6;
    sub_0807CB08(actor);
    actor[0x4D] = 6;
}

void sub_0808A838(u8 *actor)
{
    u8 *phase = &actor[0x50];
    u8 value = *phase;
    if (value == 1) {
        sub_0808A894(actor);
    } else if (value == 2) {
        sub_0808A8B8(actor);
    } else if (value == 3) {
        sub_0808A8E0(actor);
    } else if (sub_0807B2BC(actor) == 0) {
        u8 *child;
        sub_08037FC4(actor, 6);
        sub_08083300(actor, 0x1C);
        child = *(u8 **)&actor[0x74];
        *(u8 **)&child[0x6C] = actor;
        ++*phase;
    }
}

void sub_0808A780(u8 *actor)
{
    switch (actor[0x4D]) {
    case 0:
        sub_0808A904(actor);
        break;
    case 2:
        sub_0808A7DC(actor);
        break;
    case 4:
        sub_0808A838(actor);
        break;
    case 6:
        sub_0808A910(actor);
        break;
    default:
        sub_080352D0(D_080A6F8C, D_080A6F80, 0x7F, actor[0x4D]);
        break;
    }
}

void sub_0808A650(u8 *actor)
{
    u8 previous = actor[0x54]--;
    if ((u8)(previous - 1) != 0) {
        s32 pattern;
        if ((previous & 1) == 0) {
            pattern = 8;
        } else {
            pattern = 14;
        }
        actor[0x41] = pattern;
    } else {
        sub_08037FC4(actor, 2);
        ++actor[0x50];
        actor[0x41] = 8;
        sub_08083484(actor);
    }
}
