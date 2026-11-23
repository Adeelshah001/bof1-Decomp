typedef struct SceneActor SceneActor;

struct SceneActor {
    u8 pad00[0x12];
    u16 unk12;
    u8 pad14[0x64 - 0x14];
    void (*update)(SceneActor *);
    u8 pad68[0xA8 - 0x68];
    u16 unkA8;
    u8 padAA[0xD1 - 0xAA];
    u8 unkD1;
};

void sub_08000C68(volatile void *, s32);
void sub_08052884(SceneActor *);
void sub_08052A34(SceneActor *);
void sub_0803EE6C(SceneActor *);
void sub_08053278(SceneActor *);
void sub_0805339C(SceneActor *);

extern vu16 D_04000018[];
extern const u8 D_080FDCA6[];
extern u8 D_03004E90;
extern u16 D_03002508;
extern u16 D_03000AC8;
extern vu32 D_040000D4[];
extern u8 D_02019FC0[];
extern vu16 D_030033D4;
extern vu16 D_030040F4;

void sub_080531E4(SceneActor *actor)
{
    void (*update)(SceneActor *);
    sub_08000C68(D_04000018, 8);
    sub_08052884(actor);
    update = sub_08052A34;
    actor->update = update;
    update(actor);
}

s32 sub_0805321C(SceneActor *actor, u16 *position)
{
    const u8 *commands;
    u32 index;
    u32 command;

    ++*position;
    commands = D_080FDCA6 + 1;
    index = *(vu16 *)position;
    command = commands[index];
    if (command != 0) {
        if (command == 1) {
            u32 next = index + 1;
            *position = next;
            actor->unk12 = next;
            return 0xFF;
        }
        D_03004E90 = 0;
        D_03002508 = 0;
        sub_0803EE6C(actor);
        D_03004830[0x2B]++;
        return 0;
    }
    return 1;
}

void sub_080531A0(SceneActor *actor)
{
    volatile u32 zero;
    sub_08053278(actor);
    D_03000AC8 = 0;
    zero = 0;
    D_040000D4[0] = (u32)&zero;
    D_040000D4[1] = (u32)D_02019FC0;
    D_040000D4[2] = 0x85000C00;
    (void)D_040000D4[2];
    actor->update = sub_0805339C;
}

void sub_08053278(SceneActor *actor)
{
    vu16 *dest = &D_030033D4;
    u32 offset = 0xFFF8;
    u32 value;
    u8 zeroByte;
    u16 *status;

    value = (u16)offset;
    *dest = value;
    dest = &D_030040F4;
    offset -= 0x18;
    value = (u16)offset;
    *dest = value;
    status = &actor->unkA8;
    zeroByte = 0;
    offset = 0;
    *status = 1;
    actor->unkD1 = zeroByte;
    actor->unk12 = offset;
}
