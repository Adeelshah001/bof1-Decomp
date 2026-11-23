void sub_08037FC4(u8 *actor, s32 offset);
u8 sub_08038128(u8 *actor, u8 *target, u16 x, u16 y);
void sub_08038264(void *actor);
void sub_0803EE6C(Entity *actor);
void sub_0807B270(void *actor);

void sub_08099648(Entity *actor)
{
    u8 *data = (u8 *)actor;
    u32 direction;
    u32 facing;
    u8 *field;
    u8 *count;
    u8 *frame;
    u8 index;

    sub_08038264(actor);
    sub_08038128(data, (u8 *)actor->unk78, 8, 8);
    field = data + 0x61;
    facing = *field;
    direction = 0xF0;
    direction &= facing;
    if ((*(u16 *)(data + 0x44) >> 8) == direction) {
        count = &actor->unk54;
        if (--*count == 0) {
            *count = 4;
            frame = data + 0x70;
            index = *frame;
            if (index != data[0x55]) {
                index--;
                *frame = index;
                sub_08037FC4(data, index * 2);
            }
        }
        sub_0807B270(actor);
    } else {
        sub_0803EE6C(actor);
        field = &actor->unk54;
        direction = 0;
        *field++ = direction;
        *field = direction;
    }
}
