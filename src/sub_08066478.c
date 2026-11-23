extern u16 D_030016E0[];
extern u8 D_03004620[];
extern u8 sub_0814C2F6[];

void sub_080379D4(s32);
void sub_0805B358(u32, u8, u8, u8, s32);
void sub_0805B404(s32);
void sub_080650FC(void);
s32 sub_08068B0C(void);

s32 sub_08066478(void)
{
    u16 keys = D_030016E0[3];
    u32 cancel = (u16)(4 & keys);
    u32 accept;
    u8 *state;

    if (cancel != 0) {
        sub_080379D4(0x15);
        return sub_08068B0C();
    }
    accept = 3;
    accept &= keys;
    if (accept != 0) {
        sub_0805B404(3);
        state = D_03004620;
        state[0xB4] = cancel;
        state[0xB2] = 0xFF;
        sub_080650FC();
        sub_0805B358((u32)(sub_0814C2F6 + 0x92), 0, 0x10, 0, 2);
        state[3] = 6;
    }
    return 0;
}
