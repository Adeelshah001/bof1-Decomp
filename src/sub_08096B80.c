s32 sub_08083014(s32);
void sub_0807372C(s32);
void sub_0800312C(s32, s32);
void sub_08001F80(s32, s32, s32);
void sub_08093640(void *);
extern u16 D_02020FC0, D_020211C0, D_03001864;
extern u32 D_03001694;
extern u8 D_030045B0[];

void sub_08096B80(u8 *actor)
{
    s32 ready = sub_08083014((s32)actor);
    if (ready == 0) {
        D_02020FC0 = ready;
    } else {
        u8 *mode = D_030045B0;
        u16 zero = 0;
        u8 state = 2;

        mode[0x10] = state;
        D_03001864 = 0x17;
        sub_0807372C(0);
        D_03001694 &= ~8;
        sub_0800312C(0x10, 8);
        sub_08001F80(0, 0, 0);
        D_02020FC0 = zero;
        D_020211C0 = zero;
        sub_08093640(actor);
        actor[0x4C] = state;
    }
}
