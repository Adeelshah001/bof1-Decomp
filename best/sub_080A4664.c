struct fdent {
    s32 handle;
    s32 pos;
};

extern struct fdent D_03001150[];
s32 sub_080A44FC(s32 file);
s32 sub_080A44DC(s32 fh);

s32 sub_080A4664(s32 file, s32 ptr, s32 dir) {
    s32 res;
    s32 fh;
    s32 slot;
    s32 block[2];

    fh = sub_080A44FC(file);
    slot = sub_080A44DC(fh);
    if (dir == 1) {
        if (slot == 20) {
            return -1;
        }
        ptr = D_03001150[slot].pos + ptr;
        dir = 0;
    }
    if (dir == 2) {
        block[0] = fh;
        ptr += *(volatile s32 *)block;
    }
    block[0] = sub_080A44FC(file);
    block[1] = ptr;
    res = *(volatile s32 *)block;
    if (slot != 20 && res == 0) {
        D_03001150[slot].pos = ptr;
    }
    return res == 0 ? ptr : -1;
}
