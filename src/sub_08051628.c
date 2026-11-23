typedef struct {
    u8 padding[0xA4];
    u16 mode;
} MapState;
extern MapState D_030023E0;
void sub_0803EE6C(Entity *);

void sub_08051628(Entity *actor)
{
    u16 mode = D_030023E0.mode;
    if (mode == 0x198) {
        actor->unk54 = 8;
        *(u16 *)((u8 *)actor + 0x58) = 4;
        *(u16 *)((u8 *)actor + 0x5A) = 4;
    } else if (mode == 0x1A9) {
        actor->unk54 = 0x10;
        *(u16 *)((u8 *)actor + 0x58) = 0x10;
        *(u16 *)((u8 *)actor + 0x5A) = 0x10;
    } else {
        sub_0803EE6C(actor);
        return;
    }
    *(u16 *)((u8 *)actor + 0xA8) = 0;
    *(u16 *)((u8 *)actor + 0xB4) = 0x10;
    *(u16 *)((u8 *)actor + 0xB6) = 0x10;
    actor->unk64 = 0x08051695;
}
