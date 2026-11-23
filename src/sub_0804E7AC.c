typedef struct {
    u8 padding[0xA4];
    u16 mode;
} MapState;

extern MapState D_030023E0;
void sub_080379D4(s32);
void sub_08037FC4(void *, s32);
void sub_0804FF90(Entity *);

void sub_0804E7AC(Entity *actor)
{
    *((u8 *)actor + 0x3D) = 2;
    actor->unk41 = 8;
    if (D_030023E0.mode == 0x1BE) {
        actor->unk1C = 0x80;
    } else {
        actor->unk1C = 0x170;
    }
    actor->unk2A = 0xEA;
    sub_08037FC4(actor, 0);
    if (D_030023E0.mode != 0x1BE) {
        sub_080379D4(0x16);
    } else {
        sub_080379D4(0x23);
    }
    actor->unk64 = (u32)sub_0804FF90;
}
