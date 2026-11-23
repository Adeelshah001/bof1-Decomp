typedef struct {
    u8 padding[0xA4];
    u16 mode;
} MapState;
extern MapState D_030023E0;

void sub_08037FC4(void *, u16);
u8 sub_080448A4(Entity *, s32);
void sub_08045504(Entity *);
void sub_08045DF4(Entity *);

void sub_080449A4(Entity *actor) {
    sub_08037FC4(actor, 0);
    actor->unk1C = 0x60;
    ((u8 *)actor)[0x6C] = 0;
    if (sub_080448A4(actor, 6)) {
        if (D_030023E0.mode == 0xC7) {
            if (actor->unk60 == 0) {
                actor->unk64 = (u32)sub_08045DF4;
                return;
            }
            sub_08037FC4(actor, 2);
            *(u16 *)((u8 *)actor + 2) += 0x10;
            *(u16 *)((u8 *)actor + 0x46) = *(u16 *)((u8 *)actor + 2);
        } else {
            if (actor->unk60 != 0) {
                sub_08037FC4(actor, 2);
            }
        }
    }
    actor->unk64 = (u32)sub_08045504;
}
