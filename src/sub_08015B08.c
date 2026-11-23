typedef struct {
    u8 pad00[0x88];
    u32 counter;
} ScriptGlobals15B08;

extern u8 D_03002AB0[];
void sub_0803EE54(Entity *);
void sub_08015A98(Entity *);

void sub_08015B20(Entity *actor)
{
    sub_0803EE54(actor);
}

void sub_08015B08(Entity *actor)
{
    ((ScriptGlobals15B08 *)D_03002AB0)->counter++;
    actor->unk68 += 2;
}

void sub_08015AB0(Entity *actor)
{
    u32 flags = actor->unk3A;
    u32 mask = 0x40;

    mask |= flags;
    actor->unk3A = mask;
    sub_08015A98(actor);
}

void sub_08015BB4(Entity *actor)
{
    u8 *data = (u8 *)actor;
    u32 x = *(u16 *)(data + 2);

    x += 0x100;
    *(u16 *)(data + 2) = x;
    *(u16 *)(data + 0x46) = x;
    actor->unk68 += 2;
}
