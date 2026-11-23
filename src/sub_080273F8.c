extern u8 D_030025A0[];
extern u8 D_03002AB0[];
extern u8 D_030033F0[];
extern u8 D_03004114[];
extern u8 D_03004830[];
extern u8 D_080A62BC[];

void *Entity_FindFreeSlot(s32);
void sub_08023C70(s32, u8);
void sub_080380A4(s32);
void sub_080A0A68(void *dst, const void *src, s32 len);

void sub_080273D8(void)
{
    u8 *state = D_03004830;

    if (state[0x3F] != 0x1D) {
        u8 zero = 0;

        state[0x3F] = 0x1D;
        state[0x41] = zero;
    }
}

void sub_080273F8(s32 arg0, u8 arg1)
{
    u8 sp0[8];

    sub_080A0A68(sp0, D_080A62BC, 8);
    sub_08023C70(arg0, sp0[arg1]);
}

void sub_080273B2(s32 arg0)
{
    u8 *obj = Entity_FindFreeSlot(arg0 << 12);

    if (obj != NULL) {
        obj[0x3A] = 1;
        obj[0x3C] = 0x10;
        obj[0x3B] = 0x03;
    }
}

s32 sub_08027424(void)
{
    u8 *state;

    *(u16 *)D_03004114 = 0;
    if (!(D_030033F0[0] & 2)) {
        state = D_03004830;
        state[0x3F] = 0x13;
        state[0x40] = 0;
        D_03002AB0[0xB8] |= 4;
        sub_080380A4((s32)D_030025A0);
    }
    return 0;
}
