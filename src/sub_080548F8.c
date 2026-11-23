struct Actor548 {
    u8 pad00[0x68];
    u8 *unk68;
};

void sub_08037FC4(struct Actor548 *, s32);

s32 sub_080548F8(struct Actor548 *arg0) {
    u8 *p = arg0->unk68;
    s32 val = p[1];
    arg0->unk68 = p + 2;
    sub_08037FC4(arg0, val * 2);
    return 1;
}
