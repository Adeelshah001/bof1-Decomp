extern const u8 D_082D2708[];

u16 sub_08037974(u8, s32);
s32 sub_0807D148(u8 *);

s32 sub_0807CE0C(u8 *arg0) {
    u8 *other = *(u8 **)(arg0 + 0x78);
    return (other[2] >= arg0[2] && (u8)(other[6] + 0x10) >= arg0[6]);
}

s32 sub_0807CE30(u8 *arg0) {
    u16 idx = sub_08037974(arg0[0xE1], 0x11);
    idx += 12;
    if ((u16)(D_082D2708[idx + 9] - 1) >= *(u16 *)(arg0 + 0xFA)) {
        return 1;
    }
    return 0;
}

s32 sub_0807CDDC(u8 *arg0) {
    u16 a = *(u16 *)(*(u8 **)(arg0 + 0x78) + 2);
    u16 b = *(u16 *)(arg0 + 2);
    u16 diff = a - b;
    s32 res;
    if (a < b) {
        diff = ~diff + 1;
    }
    if (diff <= 0x17) {
        res = sub_0807D148(arg0);
    } else {
        res = 1;
    }
    return res;
}

void sub_0807CDB8(u8 *arg0) {
    if ((u8)(arg0[0x61] + 2) <= 0xF) {
        sub_0807CDDC(arg0);
    } else {
        sub_0807D148(arg0);
    }
}
