void sub_0804B9D4(Entity *);
s32 sub_0803A8EC(Entity *);
void sub_0804D6B0(Entity *);

void sub_0804D538(Entity *arg0) {
    Entity *e = arg0;
    if (((Entity *)D_03004830)->unk2A == 0x70C) {
        sub_0804B9D4(arg0);
        arg0->unk64 = (u32)sub_0804D6B0;
    }
    sub_0803A8EC(e);
}

void sub_0804D5AC(Entity *arg0) {
    Entity *e = arg0;
    if (((Entity *)D_03004830)->unk2A == 0xA0E) {
        sub_0804B9D4(arg0);
        arg0->unk64 = (u32)sub_0804D6B0;
    }
    sub_0803A8EC(e);
}
