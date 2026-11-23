extern u8 D_030040EC;
extern u8 D_03003410;
extern s32 D_030040F0;
extern s32 D_03003FB0;
extern s32 D_03002500;
void sub_080379D4(s32 state);

typedef struct {
    u8 pad00[0x9C];
    u16 unk9C;
    u16 unk9E;
    u16 unkA0;
    u16 unkA2;
    u8 padA4[0xC6 - 0xA4];
    u8 unkC6;
} Actor4A904;

void sub_0804A904(Actor4A904 *actor)
{
    s32 zero;
    u32 savedState;
    u16 *state;

    if (D_030040EC == 0)
        sub_080379D4(0xF);
    else
        sub_080379D4(0xD);

    savedState = D_03003410;
    state = &actor->unkA2;
    zero = 0;
    *state = savedState;
    actor->unk9C = D_030040F0;
    actor->unk9E = D_03003FB0;
    actor->unkA0 = D_03002500;
    D_03003FB0 = zero;
    D_03002500 = zero;
    D_03003410 = 0x33;
    actor->unkC6 = 3;
}
