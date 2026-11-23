typedef struct {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 pad06[0x32];
    u16 unk38;
    u8 pad3A[0x1A];
    u8 unk54;
    u8 unk55;
    u8 pad56[0x0B];
    u8 unk61;
} Actor4D9E0;

extern const u16 D_080FD4C8[];

void sub_08037C98(Actor4D9E0 *, s32);
void sub_0803828C(Actor4D9E0 *, void *, u16, u8);
void sub_0803A8EC(Actor4D9E0 *);
void sub_0803EE6C(Actor4D9E0 *);
Actor4D9E0 *sub_08040A74(s32);

void sub_0804D9E0(Actor4D9E0 *actor)
{
    if (--actor->unk54 == 0) {
        Actor4D9E0 *obj;
        u32 count;
        actor->unk54 = 0x1D;
        obj = sub_08040A74(0x19);
        obj->unk0 = 0xF80;
        obj->unk4 = D_080FD4C8[actor->unk55];
        count = actor->unk55;
        count--;
        actor->unk55 = count;
        if (count & 0x80)
            sub_0803EE6C(actor);
    }
    sub_0803828C(actor, &actor->unk4, actor->unk38, actor->unk61);
    sub_08037C98(actor, 0);
    sub_0803A8EC(actor);
}
