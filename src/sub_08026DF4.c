typedef struct {
    u8 pad00[0xB8];
    s8 unkB8;
} UnkActorB8;

typedef struct {
    u8 pad00[0x3F];
    u8 mode;
    u8 tick;
} Ctl3F;

u8 sub_08027A30(s32, s32, u16, u16);
void sub_080279EC(s32);

u8 sub_08026DF4(UnkActorB8 *arg0, s32 arg1, u16 arg2) {
    if (arg2 == 0x52CC) {
        Ctl3F *control = (Ctl3F *)D_03004830;
        u8 *mode = &control->mode;
        u8 zero = 0;

        *mode = 1;
        control->tick = zero;
        arg0->unkB8 |= 4;
    }
    return 0;
}

u8 sub_08026D6C(s32 arg0, u16 arg1, u16 arg2) {
    if (arg2 == 0x419C) {
        s32 x = 0x188;
        if (arg1 == x || arg1 == (arg1 <= x ? x - 0x10 : 0x198)) {
            sub_080279EC(arg0);
            return 1;
        }
        return sub_08027A30(0x268, 0x419C, arg1, arg2);
    }
    return 0;
}

u8 sub_08026E64(s32 arg0, u16 arg1, u16 arg2) {
    if (arg2 == 0x4E1C) {
        s32 x = 0x1B8;
        if (arg1 == x || arg1 == (arg1 <= x ? x - 0x10 : 0x1C8)) {
            sub_080279EC(arg0);
            return 1;
        }
        return sub_08027A30(0x238, 0x4E1C, arg1, arg2);
    }
    return 0;
}
