extern u16 D_0202DBD0[];
extern u8 D_03003FB4;
extern u8 D_0300341C;
extern u8 D_030040E4;
extern u32 D_030045B0[];
extern u16 D_030023D4;
extern u8 D_03001698;
extern u16 D_030040E0;
extern u8 D_0300166C;

u8 sub_08001770(s32);

struct Unk40A74 {
    u16 unk0;
    u16 unk2;
    u16 unk4;
};

struct Unk40A74 *sub_08040A74(s32);
void sub_080376E4(void);

struct UnkActor57824 {
    u8 pad00[0x4C];
    u8 unk4C;
    u8 unk4D : 8;
};

void sub_0805793C(s16 arg0, s16 arg1, s16 arg2)
{
    D_0202DBD0[0x286 / 2] = arg2;
    D_0202DBD0[0x0E / 2] = arg0;
    D_0202DBD0[0x12 / 2] = arg1;
}

void sub_080577A4(struct UnkActor57824 *actor)
{
    if (actor->unk4C == 0) {
        actor->unk4C++;
        if (sub_08001770(0xBA) == 0) {
            D_03003FB4 = 1;
            D_0300341C = 1;
        }
    }
}

void sub_0805775C(struct UnkActor57824 *actor)
{
    if (actor->unk4C == 0) {
        actor->unk4C++;
        if ((s8)D_03004830[0x31] == 3 && sub_08001770(0x80) == 0) {
            struct Unk40A74 *p = sub_08040A74(0x1C);
            p->unk0 = 0x1A0;
            p->unk4 = 0x9C88;
        }
    }
}

void sub_08057700(struct UnkActor57824 *actor)
{
    u8 unused[0x14];
    if (D_030040E4 & 0x80) {
        D_030045B0[0x1C / 4] = (D_030023D4 - D_03001698) << 8;
        D_030045B0[0x20 / 4] = (D_030040E0 - D_0300166C - 4) << 8;
        actor->unk4C = 0xFF;
        sub_080376E4();
    }
}
