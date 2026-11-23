extern u8 D_030023DC;
extern u8 D_030023E0[];

void sub_080323E4(void);
void sub_08032B78(void);
void sub_08032A78(void *, s32);
u8 sub_08038458(s32);
void sub_0802CCEC(void *);
u8 sub_0802E340(void *);
void sub_0804347C(u16, s32);
void sub_0800312C(s32, s32);

typedef struct {
    u8 pad0[0xA4];
    u16 unkA4;
} Unk_030023E0;

s32 sub_08032F1C(u8 *arg0)
{
    u8 timer = --arg0[0x54];

    if (timer == 0) {
        sub_080323E4();
        sub_08032B78();
        arg0[0x4D] = timer;
        arg0[0x50] = timer;
    }
    return 0;
}

s32 sub_08032EE8(u8 *arg0)
{
    if (D_030023DC == 0) {
        sub_08032A78(arg0, 0x8720);
        arg0[0x54] = 0x1E;
        arg0[0x50] = 0x18;
    }
    return 0;
}

u32 sub_08032F70(u8 *arg0)
{
    if (sub_08038458(1) == 0) {
        return 0;
    }
    arg0[0x54] = 0x10;
    arg0[0x50] = 2;
    sub_0802CCEC(arg0);
    return sub_0802E340(arg0);
}

s32 sub_08032EAC(u8 *arg0)
{
    if (D_030023DC == 0xFF) {
        sub_0804347C(((Unk_030023E0 *)D_030023E0)->unkA4, 0);
        arg0[0x50] = 0x16;
        D_030023DC = 0;
        sub_0800312C(0x10, 2);
    }
    return 0;
}
