void sub_0804B9D4(Entity *);
s32 sub_0803A8EC(Entity *);
void sub_0804D6B0(Entity *);
u8 sub_0804BD30(Entity *);
void sub_0803EE6C(Entity *);

static inline void call_3A8EC(Entity *e) {
    sub_0803A8EC(e);
}

static inline void check_2A(Entity *e, u16 val) {
    if (((Entity *)D_03004830)->unk2A == val) {
        sub_0804B9D4(e);
        e->unk64 = (u32)sub_0804D6B0;
    }
}

void sub_0804D538(Entity *arg0) {
    check_2A(arg0, 0x70C);
    call_3A8EC(arg0);
}

void sub_0804D504(Entity *arg0) {
    Entity *e = arg0;
    if (((Entity *)D_03004830)->unk2A == 0x60C) {
        sub_0804B9D4(arg0);
        arg0->unk64 = (u32)sub_0804D6B0;
    }
    sub_0803A8EC(e);
}

static inline void call_3EE6C(Entity *e) {
    sub_0803EE6C(e);
}

void sub_0804D56C(Entity *arg0) {
    Entity *e = arg0;
    if (sub_0804BD30(arg0) == 0) {
        D_03004830[0x2D] = 1;
        if (arg0->unk3B == 0x2F) {
            D_03004830[0x2B] &= 0x7F;
        }
        call_3EE6C(e);
    }
}
