extern u16 D_03001858;
u8 sub_080448A4(Entity *, s32);
void sub_08049C48(Entity *);
void sub_08049C88(Entity *);

void sub_08048834(Entity *actor) {
    actor->unk64 = (u32)sub_08049C48;
    if (sub_080448A4(actor, 0xD) && actor->unk60 == 0) {
        actor->unk3A |= 0x10;
        actor->unk64 = (u32)sub_08049C88;
    }
    ((u8 *)actor)[0xC1] = 8;
    ((u8 *)actor)[0xC0] = 8;
    *(u16 *)((u8 *)actor + 0x20) = D_03001858 + 1;
    actor->unk41 = 0x3E;
    actor->unk1C = 0xA0;
}
