void *sub_080A4970(void *arg0, s32 arg1, s32 arg2);
s32 sub_080A443C(s32 arg0, s32 arg1);

void *sub_080A3A38(void *arg0, s32 arg1) {
    void **pool;
    void *node;
    void *tmp;
    s32 bit;

    if (*(void **)((u8 *)arg0 + 0x4C) == 0) {
        tmp = sub_080A4970(arg0, 4, 0x10);
        *(void **)((u8 *)arg0 + 0x4C) = tmp;
        if (tmp == 0)
            return 0;
    }
    pool = *(void ***)((u8 *)arg0 + 0x4C);
    node = pool[arg1];
    if (node != 0) {
        pool[arg1] = *(void **)node;
    } else {
        bit = 1 << arg1;
        node = sub_080A4970(arg0, 1, bit * 4 + 0x14);
        if (node == 0)
            return 0;
        *(s32 *)((u8 *)node + 4) = arg1;
        *(s32 *)((u8 *)node + 8) = bit;
    }
    *(s32 *)((u8 *)node + 0x10) = 0;
    *(s32 *)((u8 *)node + 0xC) = 0;
    return node;
}

s32 sub_080A3298(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        if (sub_080A443C(arg2, 0x080F3D5C) != 0 &&
            sub_080A443C(arg2, 0x080F3D54) != 0)
            return 0;
        *(s32 *)((u8 *)arg0 + 0x30) = arg1;
        *(s32 *)((u8 *)arg0 + 0x34) = arg2;
    }
    return 0x080F3D5C;
}
