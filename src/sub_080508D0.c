/* identical to sub_0804D9B8 (matched), with its names changed by decompdecomp */
s32 sub_08037C98(void *, s32);
void sub_0803A974(void *);
void sub_080508F8(Entity *);

void sub_080508D0(Entity *arg0) {
    Entity *r5 = arg0;
    if ((sub_08037C98(arg0, 1) << 16) == 0) {
        arg0->unk64 = (u32)&sub_080508F8;
    }
    sub_0803A974(r5);
}
