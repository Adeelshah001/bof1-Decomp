extern u16 D_03004890;
void sub_080379D4(s32);
void sub_08044EF8(Entity *);

void sub_08044E94(Entity *actor) {
    Entity *e = actor;
    u8 unk55;
    if (--actor->unk54 == 0) {
        unk55 = --((u8 *)actor)[0x55];
        if (unk55 != 0) {
            actor->unk54 = 0x60;
            D_03004890 = 0x190;
            sub_080379D4(0xD);
        } else {
            e->unk64 = (u32)sub_08044EF8;
            e->unk6 += 0x1C;
            actor->unk54 = 0;
            ((u8 *)actor)[0x55] = 6;
            *(u16 *)((u8 *)e + 0x38) = unk55;
        }
    }
}
