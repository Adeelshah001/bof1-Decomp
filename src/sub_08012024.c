typedef struct {
    u8 padding[0xA4];
    u16 mode;
} MapState;

typedef struct {
    u8 padding[0x2D];
    u8 flags;
} ScriptState;

extern MapState D_030023E0;
extern u8 D_030023DC;
extern u8 D_03002AB0[];
extern u32 D_03004880;
void sub_0803EE54(Entity *);
void sub_08024068(Entity *);
void sub_08003528(s32, s32, s32, s32, s32);
u8 sub_08002FAC(void);
void sub_0803A9AC(void);
s32 sub_0803A8EC(void *);
void sub_0802AD94(u8);
void sub_0802AC94(u32);
void sub_08053C8C(void);
void sub_08039420(void);
void sub_08000248(s32);
void sub_080030D4(void);
void sub_0800312C(s32, s32);
void sub_0800518C(s32, s32, s32);
void sub_08005140(void *, s32);
void sub_08010664(Entity *);

void sub_08011F6C(Entity *actor)
{
    sub_0803EE54(actor);
    sub_08024068(actor);
    if (D_030023E0.mode == 0x69) {
        u8 *party;
        u8 *mode;

        sub_08003528(0, 0, 0, 0xFF00, 1);
        party = D_03002AB0;
        mode = &party[0x61];
        while (sub_08002FAC()) {
            sub_0803A9AC();
            sub_0803A8EC(party);
            sub_0803A8EC(party + 0x124);
            sub_0803A8EC(party + 0x248);
            sub_0803A8EC(party + 0x36C);
            sub_0802AD94(*mode);
            sub_0802AC94(D_03004880);
            sub_08053C8C();
            sub_08039420();
            sub_08000248(1);
        }
        sub_080030D4();
    }
}

void sub_08011F0C(Entity *actor)
{
    if (D_030023E0.mode == 0x88) {
        sub_0800312C(0x10, 0xA);
        D_030023DC = 0;
        sub_0800518C(0x121, 0x388, -0x5894);
    }
    actor->unk68 += 2;
}

void sub_08011EDC(Entity *actor)
{
    if (!(D_03004830[0x2D] & 1)) {
        sub_08005140(actor, 0x823B);
        actor->unk68 += 2;
    }
}

void sub_08012024(Entity *actor)
{
    if (D_03002AB0[0xB8] & 4) {
        ScriptState *state = (ScriptState *)D_03004830;
        u8 *flags = &state->flags;

        if (*flags & 2) {
            sub_08010664(actor);
        } else {
            sub_08005140(actor, 0x8243);
            *flags |= 2;
        }
    }
}
