extern u8 D_03003420[];
extern u8 D_03004830[];
extern u8 D_03002AB0[];
extern u16 D_03004114;

typedef struct {
    u8 pad00[0x2A];
    u8 mode;
    u8 tick;
    u8 pad2C;
    u8 flags;
} ScriptControl;

typedef struct {
    u8 pad00[0x168];
    const u8 *script;
} ScriptState;

void sub_0801359C(const u8 *arg0)
{
    ScriptControl *control;
    u8 flags;
    u8 zero;

    ((ScriptState *)D_03003420)->script = arg0 + 1;
    control = (ScriptControl *)D_03004830;
    flags = control->flags;
    control->flags = 4 | flags;
    zero = 0;
    control->mode = 5;
    control->tick = zero;
    D_03002AB0[0xB8] |= 4;
    D_03004114 = 1;
}
