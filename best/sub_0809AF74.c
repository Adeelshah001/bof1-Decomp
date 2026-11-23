struct SceneSettings9AF74 {
    u8 pad00[0xA0];
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
};

struct Actor9AF74 {
    u8 pad00[0x2E];
    u16 unk2E;
    u8 pad30[0x24];
    u8 unk54, unk55;
    u8 pad56[0xB];
    u8 unk61;
    u8 pad62[0xA];
    u8 unk6C, unk6D;
};

extern struct SceneSettings9AF74 D_030023E0;
extern u8 D_030047FC;
extern u8 D_03004884;

void sub_0809AF74(struct Actor9AF74 *arg)
{
    struct Actor9AF74 *actor = arg;
    struct SceneSettings9AF74 *settings;
    u16 value;
    u16 replacement;

    actor->unk2E = D_030047FC;
    actor->unk6C = D_03004884;
    settings = &D_030023E0;
    value = settings->unkA4;
    actor->unk61 = value >> 8;
    actor->unk6D = value;
    replacement = 0x18D;
    settings->unkA4 = replacement;
    actor->unk54 = *(u8 *)&settings->unkA0;
    settings->unkA0 = 4;
    actor->unk55 = *(u8 *)&settings->unkA2;
    settings->unkA2 = 8;
}
