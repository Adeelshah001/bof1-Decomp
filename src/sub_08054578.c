typedef struct {
    u8 pad00[0x68];
    u8 *unk68;
    u8 pad6C[0x72 - 0x6C];
    u8 unk72;
    u8 pad73[0x78 - 0x73];
    u32 unk78;
} Actor54;

void sub_08054988(Actor54 *);

s32 sub_08054578(Actor54 *actor)
{
    s32 ret = 0;
    u8 val = *actor->unk68;

    switch (val & 0xF) {
    case 0:
        actor->unk68++;
        ret = 1;
        break;
    case 1:
        actor->unk68++;
        break;
    case 15:
        actor->unk68++;
        actor->unk72 = *actor->unk68 - 1;
        actor->unk68++;
        actor->unk78 = (u32)sub_08054988;
        break;
    default:
        actor->unk68++;
        actor->unk72 = (val & 0xF) - 1;
        actor->unk78 = (u32)sub_08054988;
        break;
    }
    return ret;
}
