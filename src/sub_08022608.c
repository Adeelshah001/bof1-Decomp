extern u8 D_03002AB0[];
extern u8 D_03004830[];
extern u16 D_0202DBD0[];
extern u8 D_03003420[];
extern u8 D_03003F98[];
extern u8 D_03003F9C[];
extern u16 D_03004114[];

extern void sub_08023FD8(s32);
extern void sub_080379D4(s32);
extern void sub_0800764C(s32);
extern void sub_0805CF40(u16 item_id, u16 *out_slot);
extern void sub_08004EA0(u16);
extern void sub_08016854(u8 arg0, u8 *arg1);
extern s8 sub_08023374(void);

void sub_08022608(void) {
    D_03002AB0[0x61] = 2;
    D_03002AB0[0x185] = 2;
    D_03002AB0[0x2A9] = 2;
    D_03002AB0[0x3CD] = 2;
    sub_08023FD8(0x5E);
    sub_080379D4(8);
    sub_0800764C(0x10);
    D_03004830[0x40] += 1;
}

void sub_0802265C(void) {
    u16 slot;
    sub_0805CF40(0x170, &slot);
    D_0202DBD0[0x102 + slot] = 0x171;
    sub_08004EA0(0x818E);
    D_03002AB0[0xB8] &= 0xFB;
    D_03004830[0x3F] = 0;
    D_03004830[0x40] = 0;
}

void sub_080226BC(void) {
    s8 *state = (s8 *)D_03004830;
    s8 val = state[0x41] - 1;
    state[0x41] = val;
    if (val == 0) {
        sub_08016854(0x28, D_03002AB0);
        state[0x41] = 0xA0;
        state[0x40] = state[0x40] + 1;
    } else {
        if (val > 0x2F) {
            *(u16 *)(D_03003420 + 6) = *(u16 *)(D_03003420 + 6) + 1;
        }
    }
}

s32 sub_08023314(void) {
    u8 zero = 0;
    D_03004114[0] = 0;
    if ((D_03003F9C[0] & 0x80) == 0) {
        D_03004830[0x4D] = 0x30;
        D_03003F9C[0] = 0x80;
        D_03004830[0x3F] = 2;
        D_03004830[0x40] = 2;
        D_03004830[0x41] = zero;
        D_03003F98[0] |= 0x40;
        return 0;
    } else {
        s8 result = sub_08023374();
        D_03004114[0] = result;
        return result;
    }
}
