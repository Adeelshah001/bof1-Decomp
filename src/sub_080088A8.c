extern u8 D_03002AB0[];
extern u16 D_03004120[];
void sub_08054BAC(void);
void sub_0800312C(s32, s32);
void sub_08001F80(s32, s32, s32);
void sub_0800421C(s32, s32, s32);

typedef struct {
    u8 pad00[0x94];
    u32 unk94;
} ScriptRequestFields;

void sub_0800887C(void)
{
    u16 request = 0x80CC;
    D_03004830[0x2B]++;
    ((ScriptRequestFields *)D_03002AB0)->unk94 = request;
    D_030023D0[0] = 2;
}

void sub_080088A8(void)
{
    u16 request;
    D_03004830[0x2C] = 0x3E;
    D_03002AB0[0xB8] |= 4;
    request = 0x80CE;
    D_03004830[0x2B]++;
    ((ScriptRequestFields *)D_03002AB0)->unk94 = request;
    D_030023D0[0] = 2;
}

void sub_08008844(void)
{
    u16 request;
    ((Entity *)D_03003420)->unk78 = (u32)sub_08054BAC;
    request = 0x8041;
    D_03004830[0x2B]++;
    ((ScriptRequestFields *)D_03002AB0)->unk94 = request;
    D_030023D0[0] = 2;
}

void sub_080088EC(void)
{
    u8 *base = D_03004830;
    if (*(s8 *)(base + 0x2C) == 0) {
        sub_0800312C(0x10, 0x0A);
        sub_08001F80(0, 0, 0);
        D_03004120[0] = 0;
        sub_0800421C(0x6C, 0x0B78, 0x4ABC);
        base[0x2B]++;
    }
}
