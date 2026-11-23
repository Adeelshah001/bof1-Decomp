extern const u8 D_0822B3B8[];

struct Unk53820 {
    u8 pad00[0xCC];
    u8 unkCC;
    u8 padCD[0xD4 - 0xCD];
    Entity *unkD4;
};

void sub_08053820(struct Unk53820 *arg0)
{
    Entity *ent = arg0->unkD4;
    u32 val = D_0822B3B8[arg0->unkCC + 1] | (D_0822B3B8[arg0->unkCC + 2] << 8);
    val += ent->unk6;
    ent->unk6 = val;
    ent->unk2C = val;
    arg0->unkCC += 3;
}
