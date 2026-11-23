extern u8 D_03002AB0[];
extern u8 D_03004584[];
void sub_080017EC(s32);
void sub_0803EE88(void *);
void sub_08072CC4(s32);

typedef struct {
    u8 pad00[0x94];
    u32 unk94;
} ScriptRequestFields;

void sub_08008DF4(void)
{
    u16 request = 0x80E1;
    D_03004830[0x2B]++;
    ((ScriptRequestFields *)D_03002AB0)->unk94 = request;
    D_030023D0[0] = 2;
}

void sub_08008E20(void)
{
    u8 *p;
    u32 val;
    u8 *event;
    D_03003420[0x41] &= 0xCF;
    p = D_03004830;
    p[0x2C] = 0x20;
    val = 0x80AE;
    p[0x2B]++;
    event = D_03002AB0;
    *(u32 *)(event + 0x94) = val;
    D_030023D0[0] = 2;
}

void sub_08008DA8(void)
{
    sub_08072CC4(0x130A);
    if (D_03004584[0] == 0) {
        sub_0803EE88(D_03003420);
        sub_080017EC(0x33);
        D_03002AB0[0xB8] &= 0xFB;
        D_03004830[0x2B]++;
    }
}

void sub_08008D5C(void)
{
    sub_08072CC4(0x1309);
    if (D_03004584[0] == 0) {
        sub_0803EE88(D_03003420);
        sub_080017EC(0x32);
        D_03002AB0[0xB8] &= 0xFB;
        D_03004830[0x2B]++;
    }
}
