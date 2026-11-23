extern void sub_0804D784(void *arg0, s32 arg1, s32 arg2);
extern void sub_0804D844(void *arg0, s32 arg1);
extern void sub_0804D430(void);

void sub_0804C8A8(Entity *arg0) {
    Entity *e = arg0;
    u8 *p = (u8 *)e + 0x61;
    u8 zero = 0;
    *p = 2;
    sub_0804D784(e, 0, 1);
    e->unk64 = (u32)sub_0804D430;
    *(u8 *)((u8 *)e + 0x54) = zero;
    sub_0804D844(e, 0x1A0);
}
