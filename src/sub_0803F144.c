typedef struct {
    u8 pad00[0x2B8];
    u8 unk2B8;
} Struct_0202DBD0;

extern Struct_0202DBD0 D_0202DBD0;
extern u8 D_0202DDD4[];

void sub_0803F764(void);
void sub_0803F7B0(void);
u8 sub_0803EC10(void *, s32);

s32 sub_0803F190(u8 **arg0) {
    u8 val = D_0202DBD0.unk2B8 >> 4;

    if (val == (*arg0)[1]) {
        sub_0803F764();
    } else {
        sub_0803F7B0();
    }
    *arg0 += 2;
    return 0;
}

s32 sub_0803F1C8(u8 **arg0) {
    u32 flags = 0x1100 | (*arg0)[1];

    if (sub_0803EC10(D_0202DDD4, flags) != 0) {
        sub_0803F764();
    } else {
        sub_0803F7B0();
    }
    *arg0 += 2;
    return 0;
}

s32 sub_0803F144(u8 **arg0) {
    u8 *p = *arg0;
    u16 val = p[1] | (p[2] << 8);
    u8 *state = D_03004830;

    if (state[0x3F] == (val & 0xFF) && state[0x40] == (val >> 8)) {
        sub_0803F764();
    } else {
        sub_0803F7B0();
    }
    *arg0 += 3;
    return 0;
}

s32 sub_0803F200(u8 **arg0) {
    u32 flags = 0x1100 | (*arg0)[1];

    if (sub_0803EC10(D_0202DDD4, flags) == 0) {
        sub_0803F764();
    } else {
        sub_0803F7B0();
    }
    *arg0 += 2;
    return 0;
}
