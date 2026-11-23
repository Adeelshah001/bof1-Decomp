extern u8 D_0300341C;
extern u8 D_030040E4;
extern u16 D_030045B0[];

u8 sub_08001770(s32);

struct UnkActor57824 {
    u8 pad00[0x4C];
    u8 unk4C;
    u8 unk4D : 8;
};

void sub_0805785C(void)
{
}

void sub_08057824(struct UnkActor57824 *actor)
{
    if (actor->unk4C == 0) {
        actor->unk4C++;
        if (sub_08001770(0xB2) == 0) {
            D_0300341C = 1;
        }
    }
}

void sub_080577D8(void)
{
    if ((s8)D_03004830[0x31] == 4 && sub_08001770(0xA1) == 0 && sub_08001770(0xA0) != 0) {
        D_030045B0[0x12 / 2] = 0x40;
        D_030045B0[0x18 / 2] = 0x40;
        D_030040E4 |= 2;
    }
}

void sub_08057910(struct UnkActor57824 *actor)
{
    if ((--actor->unk4D) & 0x80) {
        actor->unk4C = 2;
    }
}
