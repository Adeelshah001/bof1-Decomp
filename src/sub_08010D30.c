extern u8 D_03002AB0[];

void sub_08033AF4(s32);
void sub_08023FD8(s32);
void sub_08004EA0(s32);
u8 sub_08033420(void);
void sub_08024008(s32);

void sub_08010D14(void) {
    sub_08033AF4(0xB);
    D_03004830[0x2B]++;
}

void sub_08010D30(void) {
    u8 *base;
    u8 *p;
    u32 zero;
    sub_08023FD8(0x30);
    base = D_03004830;
    p = base + 0x3F;
    zero = 0;
    *p = 0x1F;
    base[0x40] = zero;
    base[0x2A] = zero;
    base[0x2B] = zero;
}

void sub_08010CE0(void) {
    u8 *p;
    u8 *q;
    u32 z;
    sub_08004EA0(0x82B0);
    p = D_03002AB0;
    {
        u8 v = p[0xB8] & 0xFB;
        z = 0;
        p[0xB8] = v;
    }
    q = D_03004830;
    q[0x2A] = z;
    q[0x2B] = z;
}

typedef struct {
    u8 pad00[0x2B];
    s8 unk2B;
    u8 unk2C;
} Unk03004830_D5C;

void sub_08010D5C(void) {
    if (sub_08033420() != 0) {
        Unk03004830_D5C *state;
        sub_08024008(0x62);
        state = (Unk03004830_D5C *)D_03004830;
        state->unk2C = 0x20;
        state->unk2B |= ~0x7F;
    }
}
