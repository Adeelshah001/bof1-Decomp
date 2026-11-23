void sub_08037C98(void *actor, s32 direction);
void sub_0803A8EC(void *actor);
void sub_08046C34(Entity *actor);
void sub_080470B4(Entity *actor);

void sub_08046978(Entity *actor)
{
    Entity *original = actor;
    u32 timer = actor->unk54;
    u16 y;

    if (timer != 0) {
        actor->unk54 = timer - 1;
        goto update;
    }
    if (actor->unk3B <= 1) {
        sub_08037C98(actor, 0);
        sub_08037C98(actor, 0);
        timer = ((u8 *)actor)[0x55];
        timer--;
        ((u8 *)actor)[0x55] = timer;
        if ((u8)timer == 0) {
            sub_08046C34(actor);
            return;
        }
        goto update;
    }
    sub_080470B4(actor);
    y = actor->unk2C;
    if (y >= actor->unk6) {
update:
        sub_0803A8EC(actor);
        return;
    }
    original->unk6 = y;
    sub_08046C34(original);
}
