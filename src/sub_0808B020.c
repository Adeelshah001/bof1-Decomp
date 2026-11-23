extern u16 D_030023E0[];
extern u8 D_03004F50[];
void sub_0807B27C(Entity *);
void sub_080379D4(s32);
void sub_08037FC4(Entity *, s32);
void sub_0808B0A0(Entity *);
void sub_0808B480(s32);

void sub_0808B020(Entity *actor)
{
    u8 *remaining;
    u8 *interval;
    u8 *battle;
    u8 duration;
    u32 mask;
    u32 timer;

    sub_0807B27C(actor);
    remaining = &actor->unk54;
    timer = *remaining - 1;
    *remaining = timer;
    mask = 0xFF;
    if ((u8)(timer & mask) != 0) {
        interval = &actor->pad55[0];
        timer = *interval - 1;
        *interval = timer;
        if ((timer & mask) == 0) {
            *interval = 8;
            sub_0808B480(0xEFF);
        }
    } else {
        sub_080379D4(0xF1);
        actor->unk4D = 0x26;
        D_030023E0[1] = 0xF00;
        sub_08037FC4(actor, 0);
        battle = D_03004F50;
        duration = battle[0x60];
        *remaining = duration;
        duration++;
        battle[0x4A] = duration;
        sub_0808B0A0(actor);
    }
}
