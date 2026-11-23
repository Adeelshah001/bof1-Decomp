extern const u8 D_082D2708[];

u16 sub_08037974(u8, s32);
s32 sub_0807D148(u8 *);

s32 sub_0807CE0C(u8 *arg0) {
    u8 *other = *(u8 **)(arg0 + 0x78);
    if (other[2] < arg0[2]) {
        return 0;
    }
    if ((u8)(other[6] + 0x10) < arg0[6]) {
        return 0;
    }
    return 1;
}

s32 sub_0807CE30(u8 *arg0) {
    u16 idx = sub_08037974(arg0[0xE1], 0x11);
    u16 val;
    idx += 12;
    val = D_082D2708[idx + 9] - 1;
    if (val >= *(u16 *)(arg0 + 0xFA)) {
        return 1;
    }
    return 0;
}

s32 sub_0807CDDC(u8 *arg0) {
    u32 a = *(u16 *)(*(u8 **)(arg0 + 0x78) + 2);
    u32 b = *(u16 *)(arg0 + 2);
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

s32 sub_0807CDB8(u8 *arg0) {
    s32 res;
    if ((u8)(arg0[0x61] + 2) <= 0xF) {
        res = sub_0807CDDC(arg0);
    } else {
        res = sub_0807D148(arg0);
    }
    return res;
}
