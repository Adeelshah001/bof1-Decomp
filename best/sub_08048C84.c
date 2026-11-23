typedef struct SceneActor SceneActor;
struct SceneActor {
    u8 pad00[2];
    u16 unk02;
    u8 pad04[0x40 - 4];
    u8 unk40;
    u8 pad41[0x54 - 0x41];
    u8 unk54;
    u8 pad55[0x80 - 0x55];
    u8 unk80;
    u8 pad81[0xDC - 0x81];
    void (*callback)(SceneActor *);
};

void sub_080491AC(SceneActor *, s32, s32, s32);
void sub_0804A258(SceneActor *);
void sub_0804A284(SceneActor *);

void sub_08048C84(SceneActor *actor)
{
    if (actor->unk40 != 0) {
        actor->unk02 = 0x70;
        actor->unk54 = 0x1E;
        actor->callback = sub_0804A258;
        sub_080491AC(actor, 0xE, 0x178, 0xF91A);
    } else {
        actor->unk54 = 8;
        actor->callback = sub_0804A284;
        actor->unk80 = 1;
        sub_080491AC(actor, 0x14, 0x170, 0xF92B);
    }
}
