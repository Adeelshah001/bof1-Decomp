extern u8 D_03004830[];
extern u8 D_03002AB0[];
extern u8 D_030023D0[];
extern u8 D_03003420[];
extern u8 D_0300413C[];
void sub_080073D8(u16);
void sub_08054820(u8 *actor, u8 value);

typedef struct {
    u8 pad00[0x94];
    u32 unk94;
} ScriptRequestFields;

void sub_08009500(void)
{
    u16 request = 0x80B7;
    D_03004830[0x2B]++;
    ((ScriptRequestFields *)D_03002AB0)->unk94 = request;
    D_030023D0[0] = 2;
}

void sub_0800989C(void) {
    u8 *p;
    p = D_03004830 + 0x2A;
    *p = 0x0A;
    p = D_03004830 + 0x2B;
    *p = 2;
    D_03002AB0[0xB8] |= 4;
}

void sub_08009908(void) {
    u8 *p;
    u16 off;
    p = D_03004830 + 0x2A;
    *p = 0x10;
    p = D_03004830 + 0x2B;
    *p = 0;
    off = 0xF4;
    *(u32 *)((u16 *)D_03003420 + off) += 2;
    sub_080073D8(0x2C);
}

void sub_08009950(void) {
    u8 *actor;
    *(u16 *)D_0300413C = 3;
    actor = *(u8 **)((u8 *)D_03002AB0 + 0x94);
    actor[0x6F] = 3;
    sub_08054820(actor, D_0300413C[0]);
}
