typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x02];
    u16 unk6;
    u8 pad08[0x33];
    u8 unk3B;
    u8 pad3C[0x18];
    u8 unk54;
    u8 unk55;
    u8 pad56[0x02];
    u16 unk58;
    u16 unk5A;
} Actor48EF4;

typedef struct {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
} Unk03002AB0;

extern Unk03002AB0 D_03002AB0;

void sub_080379D4(s32);
u16 sub_08037C98(Actor48EF4 *, s32);
void sub_0803A8EC(Actor48EF4 *);
void sub_08048250(Actor48EF4 *);
void sub_08049EAC(Actor48EF4 *, u16, u16);

void sub_08048EF4(Actor48EF4 *actor)
{
    if (actor->unk54 != 0) {
        if (--actor->unk54 != 0)
            return;
        if (actor->unk3B == 0)
            sub_080379D4(0x1F);
        actor->unk2 = D_03002AB0.unk2;
        actor->unk6 = D_03002AB0.unk6;
        sub_08049EAC(actor, actor->unk58, actor->unk5A);
    }
    if (sub_08037C98(actor, 1) == 0) {
        sub_08048250(actor);
        actor->unk54 = actor->unk55;
    }
    sub_0803A8EC(actor);
}
