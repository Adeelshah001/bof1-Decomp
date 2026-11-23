extern u16 D_03004114;
extern u8 D_030033F0;
extern u8 D_03001850;
extern u8 D_03002AB0[];
extern u16 D_080F9130[];
void sub_08027A00(void *);

s32 sub_08027A74(u8 *arg0) {
    u8 b;
    D_03004114 = 0;
    if (D_030033F0 != 0 && (D_030033F0 & 1)) {
        b = arg0[0xB8];
        b |= 4;
        D_03004830[0x40] = 7;
        b |= 0x40;
        arg0[0xB8] = b;
    }
    return 0;
}

s32 sub_080280FC(u8 *arg0, s32 arg1) {
    u32 off;
    u16 *tbl;
    u8 *p;

    off = ((u32)(((D_03001850 & 0xF) - 1) << 25) >> 23);
    tbl = (u16 *)((u8 *)arg1 + off);
    *(u16 *)(arg0 + 0x7A) = tbl[1];
    arg0[0x61] = (u8)tbl[0];
    p = arg0 + 0x61;
    p[-0xD] = 0x50;
    D_03002AB0[0xB8] |= 4;
    D_03002AB0[0xB8] |= 0x40;
    return 0;
}

s32 sub_080271F0(void *arg0) {
    u16 v;
    if (*(u16 *)((u8 *)arg0 + 6) == 0xF15C) {
        v = *(u16 *)((u8 *)arg0 + 2);
        if (v == 0x1D68) {
            sub_08027A00(arg0);
        } else if (v > 0x1D68) {
            if (v == 0x1D98 || v == 0x1DA8) {
                sub_08027A00(arg0);
            }
        } else if (v == 0x1D58) {
            sub_08027A00(arg0);
        }
    }
    return 0;
}

void sub_08028304(u16 *arg0, u16 *arg1, u8 arg2, u8 *arg3) {
    u16 *table = D_080F9130;
    u32 sum;

    sum = (u32)table[arg2 + 3] + *arg0;
    *arg3 = (u8)(sum & 0xF);
    *arg0 = (u16)((sum & 0x7FF0) | 8);
    *arg1 += table[arg2 + 4];
}
