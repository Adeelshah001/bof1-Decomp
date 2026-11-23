void sub_08048264(void *, s32);
extern void sub_0804AC0C(void *);

void sub_0804ABEC(Entity *arg0) {
    u8 *base = D_03003420;
    base[0x50] = 1;
    arg0->unk64 = (u32)&sub_0804AC0C;
    sub_08048264(arg0, 0x22);
}
