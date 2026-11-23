extern u8 D_03002AB0[];
extern u8 D_03004550[];
extern const void *D_080F64EC[];
void sub_080017EC(s32);
void sub_08001888(s32);
void sub_08005140(void *, s32);
void sub_08004EA0(s32);
void sub_080A0770(const void *);

void func_08010860(void)
{
    sub_080A0770(D_080F64EC[(s8)D_03004830[0x2B]]);
}

typedef struct {
    u8 pad00[0x2D];
    s8 flags;
} ScriptState106B8;

void sub_080106B8(void)
{
    sub_080017EC(0x7F);
    ((ScriptState106B8 *)D_03004830)->flags &= ~2;
    D_03002AB0[0xB8] &= 0xFB;
}

typedef struct {
    u8 pad00[0x68];
    u8 *script;
} ScriptActor10664;

void sub_08010664(ScriptActor10664 *actor)
{
    u8 *script;

    if (D_03004550[0x23] & 0x80) {
        sub_080106B8();
    } else {
        sub_08005140(actor, 0x8244);
        sub_08001888(0x7F);
        if (!(D_03002AB0[0x61] & 2))
            script = actor->script;
        else {
            u8 *start = actor->script;
            u32 skip = start[2];
            script = start + skip;
        }
        actor->script = script + 3;
    }
}

void sub_08010A5C(void)
{
    u32 remaining = D_03004830[0x2C];
    remaining--;
    D_03004830[0x2C] = remaining;
    if ((u8)remaining == 0) {
        sub_08004EA0(0x824E);
        D_03004830[0x2B]++;
    }
}
