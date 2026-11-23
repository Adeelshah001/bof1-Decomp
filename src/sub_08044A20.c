u8 sub_080448A4(Entity *, s32);
void sub_0803EE38(Entity *);
void sub_08037FC4(Entity *, s32);
void sub_08045D04(Entity *);
void sub_08045D80(Entity *);

void sub_08044A20(Entity *actor) {
    u32 tmp;
    if (sub_080448A4(actor, 8)) {
        u8 mode = actor->unk60;
        if (mode == 2) {
            sub_0803EE38(actor);
            return;
        }
        if (mode == 1) {
            actor->unk64 = (u32)sub_08045D04;
            sub_08037FC4(actor, 0x12);
            tmp = 0x10 | actor->unk3A;
            actor->unk3A = tmp;
            actor->unk1C = 0xA0;
            return;
        }
    }
    *(u16 *)((u8 *)actor + 0x46) -= 1;
    actor->unk64 = (u32)sub_08045D80;
    sub_08037FC4(actor, 0x10);
    tmp = 0x10 | actor->unk3A;
    actor->unk3A = tmp;
    actor->unk1C = 0xA0;
}
