s32 sub_08037C98(void *, s32);
void sub_0803A974(void *);
void sub_0804AC30(void *);
void sub_080379D4(s32);
void sub_08037FC4(void *, s32);

void sub_0804AB80(Entity *arg0) {
    Entity *r5 = arg0;
    sub_08037C98(arg0, 0);
    arg0->unk54--;
    if (arg0->unk54 != 0) {
        sub_0803A974(arg0);
    } else {
        arg0->unk3B--;
        if (arg0->unk3B == 0) {
            arg0->unk64 = (u32)&sub_0804AC30;
        } else {
            arg0->unk54 = 0x10;
            sub_080379D4(0x25);
            sub_08037FC4(r5, 0);
        }
    }
}
