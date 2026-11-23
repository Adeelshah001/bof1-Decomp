extern u8 D_030040F8[];
extern u8 D_03003F98[];

void sub_0800764C(s32);
void sub_080379D4(s32);
void sub_08004EA0(s32);
void sub_08003378(s32);
u8 sub_08038458(s32);

void sub_0800D6D4(void) {
    sub_0800764C(5);
    sub_080379D4(9);
    D_03004830[0x2D] = 0x64;
    D_03004830[0x2B]++;
}

void sub_0800D6FC(void) {
    u32 remaining = D_03004830[0x2C];
    remaining--;
    D_03004830[0x2C] = remaining;
    if ((u8)remaining == 0) {
        sub_08004EA0(0x81D2);
        D_03004830[0x2B]++;
    }
}

void sub_0800D68C(void) {
    if (sub_08038458(1) != 0) {
        u8 *state = D_03004830;
        state[0x2C] = 0x2C;
        state[0x2D] = 1;
        *(u16 *)D_030040F8 = 0x12C;
        sub_08003378(0x31);
        state[0x2B]++;
    }
}

void sub_0800D824(void) {
    u8 *state = D_03004830;
    u32 remaining = state[0x2D];
    remaining--;
    state[0x2D] = remaining;
    if ((u8)remaining == 0) {
        D_03003F98[0] = 0x80;
        state[0x2D] = 0x30;
        state[0x2B]++;
    }
}
