struct Actor569 {
    u8 pad00[0x3A];
    u8 unk3A;
    u8 pad3B[0xF1 - 0x3B];
    u8 unkF1;
};

void sub_0805DA14(struct Actor569 *);

void sub_08056944(struct Actor569 *arg0) {
    arg0->unkF1 &= 3;
    sub_0805DA14(arg0);
}

s32 sub_0805692C(struct Actor569 *arg0) {
    arg0->unkF1 &= ~0x40;
    sub_0805DA14(arg0);
    return 0;
}

s32 sub_0805695C(struct Actor569 *arg0) {
    arg0->unkF1 &= ~0x70;
    sub_0805DA14(arg0);
    return 0;
}

s32 sub_08056974(struct Actor569 *arg0) {
    if (arg0->unk3A != 0 && (arg0->unkF1 & 0x70)) {
        return 1;
    }
    return 0;
}
