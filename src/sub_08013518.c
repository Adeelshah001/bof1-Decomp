typedef struct {
    u8 pad00[0xE8];
    const u8 *script;
} ScriptState;

typedef struct {
    u8 pad00[0x2A];
    u8 mode;
    u8 tick;
    u8 pad2C;
    u8 flags;
} ScriptControl;

typedef struct {
    u8 pad00[0xB8];
    u8 flags;
} ObjectFlags;

extern ObjectFlags D_03002AB0;
extern u16 D_03004114;

void sub_08013518(const u8 *script)
{
    ScriptControl *control;
    u32 flags;
    u32 mask;
    u8 zero;

    ((ScriptState *)D_03003420)->script = script + 1;
    control = (ScriptControl *)D_03004830;
    flags = control->flags;
    mask = 2;
    zero = 0;
    mask |= flags;
    control->flags = mask;
    control->mode = 5;
    control->tick = zero;
    D_03002AB0.flags |= 4;
    D_03004114 = 1;
}

void sub_080134EC(void)
{
    sub_08013518(((ScriptState *)D_03003420)->script);
}

void sub_08013500(void)
{
    sub_08013518(((ScriptState *)D_03003420)->script + 6);
}

void sub_080134BC(void)
{
    ScriptControl *control = (ScriptControl *)D_03004830;
    u8 *mode = &control->mode;
    u8 zero = 0;

    *mode = 5;
    control->tick = zero;
    D_03002AB0.flags |= 4;
    D_03004114 = 1;
}
