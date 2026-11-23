typedef struct {
    u8 pad00[0xB8];
    u8 unkB8;
} UnkActorB8;

u8 sub_08027A30(s32, s32, u16, u16);
void sub_080279EC(s32);

u8 sub_08026DC8(s32 arg0, u16 arg1, u16 arg2) {
    return sub_08027A30(0x1798, 0x4A5C, arg1, arg2);
}

u8 sub_08026DF4(UnkActorB8 *arg0, s32 arg1, u16 arg2) {
    if (arg2 == 0x52CC) {
        u8 *p = D_03004830;
        p[0x3F] = 1;
        p[0x40] = 0;
        arg0->unkB8 |= 4;
    }
    return 0;
}

u8 sub_08026D6C(s32 arg0, u16 arg1, u16 arg2) {
    if (arg2 == 0x419C) {
        switch (arg1) {
        case 0x178:
        case 0x188:
        case 0x198:
            sub_080279EC(arg0);
            return 1;
        default:
            return sub_08027A30(0x268, 0x419C, arg1, arg2);
        }
    }
    return 0;
}

u8 sub_08026E64(s32 arg0, u16 arg1, u16 arg2) {
    if (arg2 == 0x4E1C) {
        switch (arg1) {
        case 0x1A8:
        case 0x1B8:
        case 0x1C8:
            sub_080279EC(arg0);
            return 1;
        default:
            return sub_08027A30(0x238, 0x4E1C, arg1, arg2);
        }
    }
    return 0;
}
