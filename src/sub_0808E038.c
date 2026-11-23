extern u8 D_03001125, D_03003410, D_03004FFC;
extern u16 D_0300168C, D_03001644;
void sub_08073470(void);
void sub_08083484(Entity *);

struct CountdownActor {
    u8 pad[0x54];
    u8 timer : 8;
};

void sub_0808E038(Entity *actor)
{
    struct CountdownActor *effect = (void *)actor;
    u32 parity;
    u8 toggle;
    u8 *flag;

    u32 timer = effect->timer - 1;

    if (!((effect->timer = timer) & 0x80)) {
        parity = 1;
        if (!(timer & parity)) {
            flag = &D_03001125;
            toggle = *flag;
            toggle ^= 1;
            *flag = toggle;
            if (toggle & parity) {
                D_0300168C = 0x84;
                D_03001644 = D_03004FFC >> 1;
            } else {
                sub_08073470();
            }
        }
    } else {
        D_03003410 = 0;
        sub_08073470();
        sub_08083484(actor);
        actor->unk4D = 10;
    }
}
