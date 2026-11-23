extern u8 D_03004F50[];
Entity *sub_0807C638(Entity *actor);
void sub_08083AC8(s32 command);

typedef struct {
    u8 pad00[0x55];
    u8 timer : 8;
} CountdownActor;

void sub_0807BC1C(Entity *actor)
{
    CountdownActor *countdown = (CountdownActor *)actor;
    u32 timer = countdown->timer;
    Entity *other;
    u8 *field;
    u8 mode;
    u16 value;

    timer--;
    if ((countdown->timer = timer) & 0x80) {
        sub_08083AC8(0x58A0);
        actor->unk4D++;
        mode = 5;
        D_03004F50[0xD] = mode;
        other = sub_0807C638(actor);
        field = (u8 *)other + 0x4C;
        *field = 0;
        value = *(u16 *)((u8 *)actor + 0xE6);
        field += 0x9A;
        *(u16 *)field = value;
        if (((u8 *)actor)[0xD9] == 4) {
            field += 2;
            *field = 6;
        }
    }
}
