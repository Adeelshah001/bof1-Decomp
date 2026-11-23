extern u8 D_030025A0[];
extern u8 D_03002AB0[];
extern u8 D_030033F0[];
extern u8 D_03004114[];
extern u8 D_03004830[];

void *Entity_FindFreeSlot(s32);
void sub_080380A4(s32);

void sub_080273B2(s32 arg0)
{
    u8 *obj;

    arg0 <<= 12;
    obj = Entity_FindFreeSlot(arg0);
    if (obj != NULL) {
        obj[0x3A] = 1;
        obj[0x3C] = 0x10;
        obj[0x3B] = 0x03;
    }
}

s32 sub_08027424(void)
{
    u32 zero = 0;
    u8 *state;
    u8 *p;

    *(u16 *)D_03004114 = zero;
    if (!(D_030033F0[0] & 2)) {
        p = D_030025A0;
        state = D_03004830;
        state[0x3F] = 0x13;
        state[0x40] = zero;
        D_03002AB0[0xB8] |= 4;
        sub_080380A4((s32)p);
    }
    return 0;
}
