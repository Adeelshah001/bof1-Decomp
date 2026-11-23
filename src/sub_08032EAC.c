extern u8 D_030023DC;
extern u8 D_030023E0[];

u8 sub_08038458(s32);
void sub_0802CCEC(void *);
u8 sub_0802E340(void *);
void sub_0804347C(u16, s32);
void sub_0800312C(s32, s32);

typedef struct {
    u8 pad0[0xA4];
    u16 unkA4;
} Unk_030023E0;

u32 sub_08032F70(u8 *arg0)
{
    if (sub_08038458(1) == 0) {
        return 0;
    } else {
        arg0[0x54] = 0x10;
        arg0[0x50] = 2;
        sub_0802CCEC(arg0);
        return sub_0802E340(arg0);
    }
}

s32 sub_08032EAC(u8 *arg0)
{
    if (D_030023DC == 0xFF) {
        u8 *p;
        u8 zero;

        sub_0804347C(((Unk_030023E0 *)D_030023E0)->unkA4, 0);
        p = arg0 + 0x50;
        zero = 0;
        *p = 0x16;
        D_030023DC = zero;
        sub_0800312C(0x10, 2);
    }
    return 0;
}
