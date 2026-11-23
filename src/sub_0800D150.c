extern u8 D_030023E0[];
extern u16 D_03004114;

u8 sub_08005024(s32, s32);
void sub_0800D238(void);
void sub_080379D4(s32);
void sub_080017EC(s32);

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Struct23E0;

void sub_0800D1D0(void) {
    u8 *state = D_03004830;
    u8 *timer = state + 0x2C;
    u8 prev = *timer;
    if ((*timer = prev - 1) == 0) {
        *timer = prev;
        state[0x2B]++;
    }
}

void sub_0800D1F4(void) {
    u8 ret = sub_08005024(0xE68, 0x3D6C);
    if (ret != 0 || ((Struct23E0 *)D_030023E0)->unkA4 != 0xC0) {
        sub_0800D238();
    } else {
        sub_080379D4(0x17);
        D_03004114 = ret;
    }
}

void sub_0800D150(void) {
    u8 *state = D_03004830;
    u8 *p = state + 0x3F;
    u8 zero = 0;
    *p = 0x1F;
    state[0x40] = zero;
    state[0x2A] = zero;
    state[0x2B] = zero;
    state[0x2C] = zero;
    state[0x2D] = zero;
}

void sub_0800D26C(void) {
    u8 ret = sub_08005024(0xE68, 0x3D6C);
    if (ret != 0 || ((Struct23E0 *)D_030023E0)->unkA4 != 0x2D) {
        D_03004114 = 0;
    } else {
        sub_080017EC(0x5D);
        sub_080379D4(0x17);
        D_03004114 = ret;
    }
}
