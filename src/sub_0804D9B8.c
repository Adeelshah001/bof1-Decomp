s32 sub_08037C98(void *, s32);
void sub_0803A8EC(void *);
void sub_0804D85C(Entity *);

void sub_0804D9B8(Entity *arg0) {
    Entity *r5 = arg0;
    if ((sub_08037C98(arg0, 1) << 16) == 0) {
        arg0->unk64 = (u32)&sub_0804D85C;
    }
    sub_0803A8EC(r5);
}
