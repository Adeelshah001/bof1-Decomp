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

typedef struct {
    u8 pad00[0x68];
    const u8 *script;
} State68;

void sub_0801359C(const u8 *arg0);
void sub_080134BC(void);

void sub_08013568(void)
{
    sub_0801359C(((ScriptState *)D_03003420)->script);
}

void sub_08013580(void)
{
    sub_0801359C(((ScriptState *)D_03003420)->script + 6);
}

void sub_0801359C(const u8 *arg0)
{
    ScriptControl *control = (ScriptControl *)D_03004830;
    u8 flags;
    u8 zero;

    ((ScriptState *)D_03003420)->script = arg0 + 1;
    flags = control->flags;
    zero = 0;
    control->flags = 4 | flags;
    control->mode = 5;
    control->tick = zero;
    D_03002AB0[0xB8] |= 4;
    D_03004114 = 1;
}

void sub_08013498(const u8 *arg0)
{
    ((State68 *)D_03003420)->script = arg0 + 1;
    D_03004830[0x2D] |= 1;
    sub_080134BC();
}
