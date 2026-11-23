extern u8 D_082D2708[];
u16 sub_08037974(u8 arg0, s32 arg1);
void sub_08074378(s32 arg0, s32 arg1, void *arg2);
void sub_080743A0(s32 arg0, void *arg1);
void sub_080743C0(s32 arg0, s32 arg1, void *arg2);
s32 sub_080829B8(s32 arg0, u8 arg1, void *arg2);

void sub_08074210(s32 arg0, s32 arg1, void *arg2) {
    s32 var_r6 = arg1;
    u8 *ptr = (u8 *)arg2;
    u16 temp;
    u8 byte;

    if (((u16)ptr[0xDC] | ((u16)ptr[0xDD] << 8)) & 0x2C0) {
        sub_080743A0(arg0, arg2);
        return;
    }

    temp = (u16)sub_08037974(ptr[0xE1], 0x11);
    byte = D_082D2708[temp + 0x14];

    if (byte & 1) {
        var_r6 = sub_080829B8(arg0, byte, arg2);
        if (var_r6 != 0) {
            sub_08074378(arg0, var_r6, arg2);
            return;
        }
        sub_080743A0(arg0, arg2);
        return;
    }

    if (byte & 0x20) {
        sub_08074378(arg0, var_r6, arg2);
    } else {
        sub_080743C0(arg0, var_r6, arg2);
    }
}
