struct EntityA9CC {
    u8 pad[0x4C];
    u8 unk4C;
};
void sub_0804A9B0(void *);
void sub_0804A9F0(void *);

void sub_0804A9CC(struct EntityA9CC *arg0) {
    u8 temp = arg0->unk4C;
    if (temp == 0) {
        arg0->unk4C = temp + 1;
        sub_0804A9B0(arg0);
    } else {
        sub_0804A9F0(arg0);
    }
}

s32 sub_08037C98(void *, s32);
void sub_0803EE6C(void *);
void sub_0803A8EC(void *);

void sub_0804AC30(void *arg0) {
    if ((sub_08037C98(arg0, 1) << 16) == 0) {
        sub_0803EE6C(arg0);
    } else {
        sub_0803A8EC(arg0);
    }
}

void sub_080379D4(s32);
void sub_0804AA9C(void *);

void sub_0804AA70(Entity *arg0) {
    Entity *r5 = arg0;
    if ((sub_08037C98(arg0, 1) << 16) == 0) {
        arg0->unk64 = (u32)&sub_0804AA9C;
        sub_080379D4(0x21);
    }
    sub_0803A8EC(r5);
}

void sub_0803A974(void *);
void sub_08037FC4(void *, s32);

void sub_0804AB80(Entity *arg0) {
    Entity *r5 = arg0;
    sub_08037C98(arg0, 0);
    if (--arg0->unk54 != 0) {
        sub_0803A974(arg0);
    } else if (--arg0->unk3B == 0) {
        arg0->unk64 = (u32)&sub_0804AC30;
    } else {
        arg0->unk54 = 0x10;
        sub_080379D4(0x25);
        sub_08037FC4(r5, 0);
    }
}
