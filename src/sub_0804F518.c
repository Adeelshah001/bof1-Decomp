typedef struct Actor4F518 Actor4F518;
struct Actor4F518 {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x02];
    u16 unk6;
    u8 pad08[0x14];
    u16 unk1C;
    u8 pad1E[0x0C];
    u16 unk2A;
    u16 unk2C;
    u8 pad2E[0x0F];
    u8 unk3D;
    u8 pad3E[0x03];
    u8 unk41;
    u8 pad42[0x12];
    u8 unk54;
    u8 unk55;
    u8 pad56[0x0E];
    void (*unk64)(Actor4F518 *);
};

extern const u16 D_080FD58A[];

void sub_080379D4(s32);
void sub_08037FC4(Actor4F518 *, s32);
void sub_0804FBF4(Actor4F518 *);

void sub_0804F518(Actor4F518 *actor)
{
    if (--actor->unk54 == 0) {
        void (*fn)(Actor4F518 *) = sub_0804FBF4;
        const u16 *table;
        u8 idx;
        u32 y;

        actor->unk64 = fn;
        actor->unk41 = 6;
        actor->unk3D = 2;
        actor->unk1C = 0x1A0;
        actor->unk2A = 0x19C;
        sub_08037FC4(actor, 0);
        idx = actor->unk55 * 2;
        table = D_080FD58A;
        actor->unk2 = table[idx];
        y = *(const u16 *)((u32)table + ((idx + 1) << 1));
        actor->unk6 = y;
        actor->unk2C = y;
        sub_080379D4(5);
        fn(actor);
    }
}
