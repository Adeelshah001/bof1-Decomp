extern u8 D_03001864[];
extern u8 D_03004584[];

s32 sub_08038458(s32);
void sub_08004EA0(s32);
void sub_08039174(void);
void sub_08072CC4(s32);

void sub_0801B788(void) {
    u8 *base;

    *(u16 *)D_03001864 = 0x17;
    base = D_03004830;
    base[0x2C] = 0xFF;
    base[0x2B]++;
}

void sub_0801B7AC(void) {
    u8 *base;
    u8 *ptr;

    if ((u8)sub_08038458(1) != 0) {
        sub_08004EA0(0x8473);
        base = D_03004830;
        ptr = base + 0x2D;
        (*ptr)++;
        base[0x2B]++;
    }
}

void sub_0801B7E0(void) {
    u8 *state;

    sub_08039174();
    sub_08072CC4(0x5A44);
    if (D_03004584[0] == 0) {
        state = D_03004830;
        state[0x2C] = 0x20;
        state[0x2B]++;
    }
}

void sub_0801B818(void) {
    u8 *state;

    sub_08004EA0(0x8474);
    state = D_03004830;
    state[0x2C] = 0x20;
    state[0x2B]++;
}
