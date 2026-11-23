extern u8 D_03001850;
s32 sub_0803A8EC(void *);
void sub_0803EE38(Entity *);
u8 sub_080448A4(Entity *, s32);
void sub_08045E90(Entity *);
void sub_08045F38(Entity *);

void sub_08045850(Entity *actor) {
    u32 tmp = 0x10 | actor->unk3A;
    actor->unk3A = tmp;
    actor->unk1C = 0x80;
    if (sub_080448A4(actor, 0xB)) {
        if (actor->unk60 == 0) {
            actor->unk64 = (u32)sub_08045E90;
            sub_0803A8EC(actor);
            return;
        }
        D_03001850 = 1;
        sub_0803EE38(actor);
        return;
    }
    actor->unk64 = (u32)sub_08045F38;
    sub_0803A8EC(actor);
}
