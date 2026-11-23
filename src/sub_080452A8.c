extern u8 D_03001850;
extern u8 D_03002AB0[];

u8 sub_08033420(void);
void sub_08037C98(void *, s32);
s32 sub_0803A8EC(void *);
void sub_08045AFC(Entity *);
void sub_08045B1C(Entity *);

typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x38 - 0x08];
    u16 unk38;
    u8 pad3A[0x54 - 0x3A];
    u8 unk54;
    u8 pad55[0x5C - 0x55];
    u8 unk5C;
    u8 pad5D[0x61 - 0x5D];
    u8 unk61;
    u8 pad62[0x64 - 0x62];
    u32 unk64;
    u8 pad68[0x7C - 0x68];
    u16 unk7C;
} Actor452A8;

void sub_080452A8(Actor452A8 *actor) {
    u16 pos;

    if (D_03001850 == actor->unk5C && sub_08033420()) {
        D_03002AB0[0xB8] &= ~0x40;
        if (actor->unk61 != 0 && actor->unk61 != 0x10) {
            actor->unk64 = (u32)sub_08045AFC;
            pos = actor->unk2;
        } else {
            actor->unk64 = (u32)sub_08045B1C;
            pos = actor->unk6;
        }
        actor->unk7C = pos;
        actor->unk38 = 0x20;
        actor->unk54 = 1;
    }
    sub_08037C98(actor, 0);
    sub_0803A8EC(actor);
}
