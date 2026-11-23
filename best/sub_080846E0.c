typedef struct {
    u8 pad00[0x114];
    u16 id[3];
} Actor846E0;

extern u8 D_03004F50[];
u32 sub_08084F74(u16);

void sub_080846E0(Actor846E0 *actor, u8 flagsArg)
{
    u32 flags = flagsArg;
    u32 groupMask;
    u16 id;
    u32 attr;
    u32 group;
    u16 *value;
    u16 amount;

    id = actor->id[0];
    attr = sub_08084F74(id);
    groupMask = 0xF0;
    group = attr;
    group &= groupMask;
    if (!group) {
        id = actor->id[1];
    attr = sub_08084F74(id);
        group = attr;
        group &= groupMask;
        if (!group) {
            id = actor->id[2];
    attr = sub_08084F74(id);
            group = attr;
            group &= groupMask;
            if (!group)
                return;
        }
    }
    flags &= attr;
    if (flags) {
        value = (u16 *)D_03004F50;
        value += 0x20;
        amount = *value;
        *value = amount - (amount >> 2);
    }
}
