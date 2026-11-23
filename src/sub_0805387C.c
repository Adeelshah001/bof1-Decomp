extern const u8 D_0822B3B8[];
extern u8 D_03000ACC;

struct Unk53820 {
    u8 pad00[0xCA];
    u8 unkCA;
    u8 unkCB;
    u8 unkCC;
    u8 padCD[0xD4 - 0xCD];
    Entity *unkD4;
};

void sub_08053588(struct Unk53820 *);

void sub_0805387C(struct Unk53820 *arg0)
{
    arg0->unkCC = arg0->unkCA + 1;
}

void sub_08053858(struct Unk53820 *arg0)
{
    D_03004830[0x2D] = D_0822B3B8[arg0->unkCC + 1];
    arg0->unkCC += 2;
}

void sub_08053820(struct Unk53820 *arg0)
{
    Entity *ent = arg0->unkD4;
    u8 idx = arg0->unkCC;
    u16 val = D_0822B3B8[idx + 1] | (D_0822B3B8[idx + 2] << 8);
    val += ent->unk6;
    ent->unk6 = val;
    ent->unk2C = val;
    arg0->unkCC += 3;
}

void sub_080538EC(struct Unk53820 *arg0)
{
    D_03000ACC = 0xA;
    sub_08053588(arg0);
}
