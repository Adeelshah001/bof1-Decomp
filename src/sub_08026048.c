extern u8 D_030033F0;
extern u8 D_030043DC;
extern u32 D_03001694;
extern u8 D_03002AB0[];
void sub_0802411C(s32 arg0, s32 arg1);
void sub_08023FD8(s32 arg0);

void sub_080260E0(u8 *arg0) {
    u8 *script = *(u8 **)(arg0 + 0x68);
    u32 mask = script[2];
    D_030033F0 |= mask;
    *(u8 **)(arg0 + 0x68) = script + 3;
}

void sub_080260A0(u8 *arg0) {
    u8 *script = *(u8 **)(arg0 + 0x68);
    sub_0802411C(script[3] | (script[4] << 8), script[2] + 0x180);
    *(u32 *)(arg0 + 0x68) += 5;
    D_030043DC = 1;
    D_03001694 |= 1;
}

void sub_08026164(u8 *arg0) {
    u8 *script = *(u8 **)(arg0 + 0x68);
    u8 value = script[2];
    u8 *state = D_03004830;
    state[0x42] = value;
    *(u8 **)(arg0 + 0x68) = script + 3;
}

void sub_08026048(u8 *arg0) {
    u8 *script = *(u8 **)(arg0 + 0x68);
    u32 a = script[2] | (script[3] << 8);
    u32 b = script[4] | (script[5] << 8);
    u8 *state = D_03002AB0;
    if (*(u16 *)(state + 2) == a && *(u16 *)(state + 6) == b) {
        sub_08023FD8(0x58);
        *(u32 *)(arg0 + 0x68) += 6;
    }
}
