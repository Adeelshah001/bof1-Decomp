struct UnkArg0 {
    u8 pad00[0x50];
    u16 unk50;
};

struct UnkArg2 {
    u8 pad00[0xE1];
    u8 unkE1;
};

struct UnkRes {
    u8 pad00[0x0D];
    u8 unk0D;
};

struct UnkRes *sub_0805D984(u16);
u16 sub_08073844(u16);
void sub_08074378(struct UnkArg0 *, s32, struct UnkArg2 *);
void sub_080743A0(struct UnkArg0 *, struct UnkArg2 *);
void sub_080743C0(struct UnkArg0 *, s32, struct UnkArg2 *);
s32 sub_08084F14(struct UnkArg0 *, u8, struct UnkArg2 *);

void sub_08074290(struct UnkArg0 *arg0, s32 arg1, struct UnkArg2 *arg2) {
    u8 flags;

    arg0->unk50 = arg2->unkE1;
    flags = sub_0805D984(sub_08073844(arg0->unk50))->unk0D;
    if (flags & 1) {
        arg1 = sub_08084F14(arg0, flags, arg2);
        if (arg1 == 0) {
            sub_080743A0(arg0, arg2);
            return;
        }
        goto call_4378;
    }
    if (flags & 4) {
    call_4378:
        sub_08074378(arg0, arg1, arg2);
        return;
    }
    sub_080743C0(arg0, arg1, arg2);
}
