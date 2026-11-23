extern const u8 D_0822F254[];
extern u16 D_030033D4;
extern u16 D_030040F4;
extern const u8 D_0804AC54[];

typedef struct {
    Entity entity;
    u8 pad7C[0xA4 - 0x7C];
    u16 offset;
} PairActor;

void sub_0804B338(PairActor *actor, u8 advance)
{
    const u8 *table;
    u32 raw;
    u16 value;
    u32 sign;
    u32 offset;

    if (advance)
        actor->offset += 2;
    table = D_0822F254;
    raw = table[actor->offset];
    value = raw;
    sign = 0x80;
    if (raw & sign)
        value |= 0xFF00;
    D_030033D4 = value;

    offset = actor->offset;
    offset++;
    raw = *(const u8 *)((u32)table + offset);
    value = raw;
    if (raw & sign)
        value |= 0xFF00;
    D_030040F4 = value;
    actor->entity.unk64 = (u32)(D_0804AC54 + 1);
}
