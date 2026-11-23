extern u8 D_03002AB0[];
extern u8 D_030040E4;

typedef struct {
    u8 pad00[0x02];
    u16 unk02;
    u8 pad04[0x02];
    u16 unk06;
} Unk030034A0;

extern Unk030034A0 D_030034A0;
void sub_080072A0(u16, u16, s32);
void sub_0803EE88(Unk030034A0 *);

void sub_08025524(void)
{
    u8 *base = D_03004830;
    u8 *ptr = base + 0x41;

    if (--*ptr == 0)
    {
        base[0x40]++;
    }
}

void sub_08025714(void)
{
    u8 *p;
    D_03002AB0[0xB8] &= 0xBB;
    D_030040E4 &= 0x7F;
    p = D_03004830;
    p[0x3F] = 0;
    p[0x40] = 0;
}

void sub_080254F0(void)
{
    Unk030034A0 *p = &D_030034A0;
    u8 *state;
    sub_080072A0(p->unk02, p->unk06, 0xC);
    sub_0803EE88(p);
    state = D_03004830;
    state[0x41] = 0x3C;
    state[0x40]++;
}
