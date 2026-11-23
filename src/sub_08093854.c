struct UnkSub93854 {
    u8 pad00[0x61];
    u8 unk61;
};

struct UnkActor93854 {
    u8 pad00[0x06];
    u8 unk6;
    u8 pad07[0x3B - 0x07];
    u8 unk3B;
    u8 unk3C;
    u8 pad3D[0x4C - 0x3D];
    u8 unk4C;
    u8 pad4D[0x54 - 0x4D];
    u8 unk54;
    u8 unk55;
    u8 pad56[0x6C - 0x56];
    struct UnkSub93854 *unk6C;
};

extern const u8 D_08152DEA[];

void sub_08037FC4(struct UnkActor93854 *, s32);
void sub_08038264(struct UnkActor93854 *);
void sub_0803EE6C(struct UnkActor93854 *);
void sub_0809206C(struct UnkActor93854 *);
void sub_08095618(struct UnkActor93854 *);
void sub_08095EFC(struct UnkActor93854 *);
void sub_08096EA4(struct UnkActor93854 *);

void sub_08093854(struct UnkActor93854 *actor)
{
    if (actor->unk4C == 0) {
        actor->unk4C++;
        sub_08037FC4(actor, 2);
        sub_08095EFC(actor);
        return;
    }
    if (actor->unk6C->unk61 != 0) {
        sub_08038264(actor);
        sub_0809206C(actor);
        return;
    }
    if (actor->unk6 > 0xE7) {
        sub_0803EE6C(actor);
        actor->unk54 = 0;
        actor->unk55 = 0;
        if (actor->unk3C == 10 && *(actor->unk3B + D_08152DEA) == 0) {
            sub_08095618(actor);
        }
    } else {
        sub_08096EA4(actor);
    }
}
